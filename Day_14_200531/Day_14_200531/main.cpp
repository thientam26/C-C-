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
	
	char buffer[1024];
	memset(buffer, 0, sizeof(buffer));
	imic.get((char*)"helloWorld.txt", buffer, sizeof(buffer));
	printf("%s\r\n", buffer);
	//char* data = (char*)"xin_chao";
	//imic.put("test.txt", data, strlen(data));
	char* data =(char*) "xin chao";
	imic.put((char*)"test.txt", data, strlen(data));
	return 0;
}