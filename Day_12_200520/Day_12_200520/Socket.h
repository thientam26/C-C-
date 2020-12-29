#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNING
#include <stdio.h>
#include <Ws2tcpip.h>
#include <WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
class Socket
{
	Socket(int port);
	Socket(char* ServerIP, int port);
	int Send(char* data);
	int Recv(char* buff, int size);
	int SendOneByte(char data);
private:
	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;

};