#include "Socket.h"
#include <math.h>
Socket::Socket(int port)
{
	printf("Initialising Winsock...\r\n");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf(" Failed.Error Code : %d\r\n", WSAGetLastError());
	}

	printf(" Initialised.\r\n");

	//Create a socket
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d\r\n", WSAGetLastError());
	}
	else
	{
		printf(" Socket created.\r\n");
		server.sin_addr.s_addr = htonl(INADDR_ANY);
		server.sin_family = AF_INET;
		server.sin_port = htons(port);
		bind(s, (struct sockaddr*) & server, sizeof(struct sockaddr));
	}
}


Socket::Socket(char* ServerIP, int port)
{
	printf("Initialising Winsock...\r\n");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf(" Failed.Error Code : %d\r\n", WSAGetLastError());
	}

	printf(" Initialised.\r\n");

	//Create a socket
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d\r\n", WSAGetLastError());
	}
	else
	{
		printf(" Socket created.\r\n");

		server.sin_addr.s_addr = inet_addr(ServerIP);

		server.sin_family = AF_INET;
		server.sin_port = htons(port);

		//Connect to remote server
		if (connect(s, (struct sockaddr*) & server, sizeof(server)), 0)
		{
			printf("connect error\r\n");
		}

		printf("Connected\r\n");
	}
}

int Socket::Send(char* data)
{
	int size = 0;
	while (data[size++] != '\0');
	return send(s, data, size - 1, 0);
}

int Socket::Recv(char* buff, int size)
{
	return recv(s, buff, size, 0);
}

int Socket::SendOneByte(char data)
{
	return send(s, &data, 1, 0);
}

int Socket::stringLen(char* string)
{
	int len = 0;
	while (string[len++] != '\0');
	return len - 1;
}

//int Socket::strFind(string strSrc, string strFind)
//{
//	int i = 0;
//	for (int i = 0; i < (stringLen(strSrc) - stringLen(strFind)); i++)
//	{
//		int j = 0;
//		for (int j = 0; j < stringLen(strFind);j++) 
//		{
//			if (strFind[j] != strSrc[i + j])
//				break;
//		}
//		if (j == stringLen(strFind)) break;
//	}
//	if (i == (stringLen(strFind) - stringLen(strSrc))) return -1;
//	return i;
//}
//
//int Socket::Get_Content_Len(char* data)
//{
//	char* strfind = (char*)"Content-Length:";
//	int str_len = stringLen(data);
//	int postion = strFind(data, strfind);
//	//for (int i = 0;)
//}

int Socket::Get_Content_Len(char* header)
{
	int i = 0;
	char* findString = (char*)"Content-Length: ";
	for (i = 0; i < (stringLen(header) - stringLen(findString)); i++)
	{
		int j = 0;
		for (j = 0; j < stringLen(findString); j++)
		{
			if (findString[j] != header[i + j])
			{
				break;
			}
		}
		if (j >= stringLen(findString))
		{
			break;
		}
	}

	char lenString[16];
	char cnt = 0;
	memset(lenString, 0, sizeof(lenString));

	for (int k = i + stringLen(findString); k < stringLen(header); k++)
	{
		if (header[k] == '\r') break;
		lenString[cnt++] = header[k];
	}

	printf("Length: %s\r\n", lenString);

	int lenInt = 0;

	for (int i = 0; i < stringLen(lenString); i++)
	{
		lenInt += (lenString[i] - 48) * pow(10, stringLen(lenString) - i - 1);
	}
	printf("Content-Length: %d\r\n", lenInt);

	return lenInt;
}

void Socket::waiting_data()
{
	//adrlen: con tro - tra ve 1 socket tra ve
}