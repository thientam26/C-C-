#include "Socket.h"
#include "stdio.h"

void Socket_Init(char* ip_server, u_short port)
{
	printf("Initialising Winsock...\r\n");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf(" Failed.Error Code : %d\r\n", WSAGetLastError());
		return 1;
	}

	printf(" Initialised.\r\n");

	//Create a socket
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d\r\n", WSAGetLastError());
	}

	printf(" Socket created.\r\n");

	server.sin_addr.s_addr = inet_addr(ip_server);

	server.sin_family = AF_INET;
	server.sin_port = htons(port);

	//Connect to remote server
	if (connect(s, (struct sockaddr*) & server, sizeof(server)), 0)
	{
		printf("connect error\r\n");
		return 1;
	}

	printf("Connected\r\n");
}

void Socket_Server_Init(u_short port)
{
	printf("Initialising Winsock... \r\n");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf(" Failed.Error Code : % d \r\n", WSAGetLastError());
		return 1;
	}

	printf(" Initialised.\r\n");

	//Create a socket
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : % d", WSAGetLastError());
	}

	printf(" Socket created.\r\n");

	server.sin_addr.s_addr = htonl(INADDR_ANY);
	server.sin_family = AF_INET;
	server.sin_port = htons(port);

	bind(s, (struct sockaddr*) & server, sizeof(struct sockaddr));

	listen(s, 5);

	struct sockaddr_in dest;
	socklen_t socksize = sizeof(struct sockaddr_in);
	int consocket = accept(s, (struct sockaddr*) & dest, &socksize);
	char* msg = "Hello World !\r\n";
	while (consocket)
	{
		printf("Incoming connection from %s - sending welcome\r\n", inet_ntoa(dest.sin_addr));
		send(consocket, msg, strlen(msg), 0);
		close(consocket);
		consocket = accept(s, (struct sockaddr*) & dest, &socksize);
	}
}

int Socket_Send(char* data, uint16_t size)
{
	return send(s, data, size, 0);
}

int Socket_Recv(char* src, uint16_t size)
{
	return recv(s, src, size, 0);
}

void Get_Data_AWS(char* data, int size)
{
	char temp[1024]; // vi tri ko co du lieu la ki tu rac - dummy
	memset(temp,0, sizeof(temp));
	char* data_send = "GET /helloWorld.txt HTTP/1.1\r\nHost: imic-backet-s3.s3-ap-southeast-1.amazonaws.com\r\n\r\n";
	memset(data, 0, size);
	Socket_Init("52.219.128.223", 80);
	Socket_Send(data_send, stringLen(data_send));
	Socket_Recv(data, size);
	Socket_Recv(temp, 1024);
	printf("%s", data);
	printf("%s\r\n", temp);
}

int stringLen(char* string)
{
	int len = 0;
	while (string[len++] != 0);
	return len - 1;
}
void Get_Content_Len(char* data)
{
	int len_str = stringLen(data);
	for (int i = 0; i < len_str; i++)
	{
		for(int j=0;j<)
	}
}
void Get_Img_AWS(char* image)
{
	char temp[1024]; // vi tri ko co du lieu la ki tu rac - dummy
	memset(temp, 0, sizeof(temp));
	char* data_send = "GET /C-programming.png HTTP/1.1\r\nHost: imic-backet-s3.s3-ap-southeast-1.amazonaws.com\r\n\r\n";
	/*memset(data, 0, size);*/
	Socket_Init("52.219.128.223", 80);
	Socket_Send(data_send, stringLen(data_send));
	Socket_Recv(temp, 1024);
	printf("%s\r\n", temp);
	int contentLen = Get_Content_Len(temp);
	FILE* imgFile = fopen(imgFile, "w+b");
	char data_img_char = 0;
	for (size_t i = 0; i < contentLen; i++);
	{
		Socket_recv(&data_img_char, sizeof(data_img_char));
		fputc(data_img_char, imgFile);
	}
	fclose(imgFile);
}