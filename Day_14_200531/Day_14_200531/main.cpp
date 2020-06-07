#include "Socket.h"
#include "AWS_S3.h"
//int main()
//{
//	socket test((char*)"192.168.1.26", 23);
//	test.send((char*)"hello sunday\r\n");
//	char buff[1024];
//	memset(buff, 0, 1024);
//	test.recv(buff, sizeof(buff));
//	printf("gia tri cua buff la: %s", buff);
//	return 0;
//}

int main()
{
	AWS_S3 imic;
	//Socket imic2(9);
	char buffer[1024];
	memset(buffer, 0, sizeof(buffer));
	//imic.get((char*)"Cpp.jpg", buffer, sizeof(buffer));
	//printf("%s\r\n", buffer);
	//char* data = (char*)"xin_chao";
	//imic.put((char*)"test.txt", data, strlen(data));
	//char* data =(char*) "Hello Sunday";
	//imic.put((char*)"check.txt", data, strlen(data));
	

	imic.getFile((char*)"Cpp.jpg");

	//return 0;
//ocket server(1234);

//while (1)
//{
//	char data[1024];
//	memset(data, 0, sizeof(data));
//	server.waiting_data(data, sizeof(data));
//	printf("%f", data);
//	for (int i = 3; i < stringLen(data); i++);
//	{
//		if (data[i] == 'F' && data[i - 1] == 'F' && data[i - 2] == '0')
//		{
//			imic.put((char*)"helloworld.txt",(char*)"LED_OFF",7);
//				break;
//		}
//		else if (data[i] == "N" && data[i - 1] == "0")
//		{
//			imic.put((char*)"helloworld.txt", (char*) "LED_ON", 6);
//			break;
//		}
//	}
//}

}