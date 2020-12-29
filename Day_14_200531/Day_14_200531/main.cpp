#include "Socket.h"
#include "AWS_S3.h"

int main()
{
	AWS_S3 imic;
	//char buffer[1024];
	//memset(buffer, 0, sizeof(buffer));
	//imic.get((char*)"data.txt", buffer, sizeof(buffer));
	//printf("%s", buffer);
	char* data = (char*)"xin chao";
	imic.put((char*)"data2.txt", data, strlen(data));

	return 0;
}
//int main()
//{
//	Socket test((char*)"192.168.0.102", 23);
//	test.Send((char*)"hello sunday\r\n");
//	char buff[1024];
//	memset(buff, 0, 1024);
//	test.Recv(buff, sizeof(buff));
//	printf("gia tri cua buff la: %s", buff);
//	return 0;
//}

//int main()
//{
//	AWS_S3 imic;
//	//socket imic2(9);
//	char buffer[1024];
//	memset(buffer, 0, sizeof(buffer));
//	//imic.get((char*)"cpp.jpg", buffer, sizeof(buffer));
//	//printf("%s\r\n", buffer);
//	//char* data = (char*)"xin_chao";
//	//imic.put((char*)"test.txt", data, strlen(data));
//	//char* data =(char*) "hello sunday";
//	//imic.put((char*)"check.txt", data, strlen(data));
//
//
//	imic.getfile((char*)"data.txt");
//
//	//return 0;
////socket server(1234);
//}

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

//}