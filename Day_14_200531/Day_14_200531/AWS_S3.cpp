#include "AWS_S3.h"
#include "stdint.h"
AWS_S3::AWS_S3() :Socket((char*)"192.168.0.101", 80)
{

}
void AWS_S3::get(char* nameFile, char* buff, int buffLen)
{
	char data_send[1024];
	sprintf(data_send, "GET /%s HTTP/1.1\r\nHost: dataled.s3-ap-southeast-1.amazonaws.com\r\n\r\n", nameFile);
	printf("data send: %s", data_send);
	Send(data_send);
	char header[1024];
	int cnt = 0;
	memset(header, 0, sizeof(header));
	while (1)
	{
		Recv(header + cnt, 1);
		if (cnt > 3)
		{
			if (header[cnt] && header[cnt - 1] == '\r'
				&& header[cnt - 2] == '\n' && header[cnt - 3] == '\r')
			{
				break;
			}
		}
		cnt++;
	}
	printf("%s", header);
	Get_Content_Len(header);

	Recv(buff, buffLen);

}

void AWS_S3::put(char* nameFile, char* data, int dataLen)
{
	char data_send[1024];
	sprintf(data_send, "PUT /%s HTTP/1.1\r\nContent-Lenght: %d\r\nHost://dataled.s3-ap-southeast-1.amazonaws.com\r\n\r\n", nameFile, dataLen, data);
	printf("data_send: %s\r\n", data_send);
	//nhan data ve kiem tra
	Send(data_send);
}

void AWS_S3::putFile(char* nameFile)
{
	FILE* file = fopen(nameFile, "a+b");
	int sizeFile = 0;
	while (true)
	{
		if (fgetc(file) == EOF) break;
		sizeFile++;
	}
	fclose(file);
	printf("size of file %d\r\n", sizeFile);

	char header[256];
	memset(header, 0, sizeof(header));
	sprintf(header, "PUT /%s HTTP/1.1\r\nContent-Length: %d\r\nHost: dataled.s3-ap-southeast-1.amazonaws.com\r\n\r\n", nameFile,sizeFile);// dua chuoi vao bien
	printf("%s", header);
	Send(header);

	file = fopen(nameFile, "a+b");
	char temp = 0;
	for (int i = 0; i < sizeFile; i++)
	{
		temp = fgetc(file);
		SendOneByte(temp);
		printf("%c", temp);
	}
	char dataRecv[1024];

	memset(dataRecv, 0, sizeof(dataRecv));
	Recv(dataRecv, sizeof(dataRecv));
	printf(dataRecv, sizeof(dataRecv));
	//return 0;
}



void AWS_S3::getFile(char* imgFile)
{
	char data_send[1024];
	sprintf(data_send, "GET /%s HTTP/1.1\r\nHost: dataled.s3-ap-southeast-1.amazonaws.com\r\n\r\n", imgFile);
	printf("data send: %s", data_send);
	Send(data_send);
	char header[1024];
	int cnt = 0;
	memset(header, 0, sizeof(header));
	while (1)
	{
		Recv(header + cnt, 1);
		if (cnt > 3)
		{
			if (header[cnt] && header[cnt - 1] == '\r'
				&& header[cnt - 2] == '\n' && header[cnt - 3] == '\r')
			{
				break;
			}
		}
		cnt++;
	}
	printf("%s", header);
	Get_Content_Len(header);
	int sizeFile = Get_Content_Len(header);
	FILE* file = fopen("data.txt", "w+b");

	//file = fopen("Cpp.jpg", "w+b");
	char temp = 0;
	for (int i = 0; i < sizeFile; i++)
	{
		char buff = 0;
		Recv(&buff, 1);
		temp = fputc(buff,file);
		//SendOneByte(temp);
		//printf("%c", temp);
	}
	char dataRecv[1024];

	memset(dataRecv, 0, sizeof(dataRecv));
	Recv(dataRecv, sizeof(dataRecv));
	printf(dataRecv, sizeof(dataRecv));
}