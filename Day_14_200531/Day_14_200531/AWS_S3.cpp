
#include "AWS_S3.h"

AWS_S3::AWS_S3() :Socket((char*)"52.219.128.83", 80)
{

}
void AWS_S3::get(char* nameFile, char* buff, int buffLen)
{
	char data_send[1024];
	sprintf(data_send, "GET /%s HTTP/1.1\r\nHost: imic-backet-s3.s3-ap-southeast-1.amazonaws.com\r\n\r\n", nameFile);
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
	Recv(buff, buffLen);

}

void AWS_S3::put(char* nameFile, char* data, int dataLen)
{
	char data_send[1024];
	sprintf(data_send, "PUT /%s HTTP/1.1\r\nContent-Lenght: %d\r\nHost://imic-backet-s3.s3-ap-southeast-1.amazonaws.com\r\n\r\n", nameFile, dataLen, data);
	printf("data_send: %s\r\n", data_send);
	//nhan data ve kiem tra
	Send(data_send);
}
