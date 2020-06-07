#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma once
#include <stdio.h>
#include "stdint.h"
#include "Winsock2.h";
#include "Ws2tcpip.h"
#pragma comment(lib,"ws2_32.lib") //Winsock Library


class Socket
{
public:
	Socket(int port);
	Socket(char* ServerIP, int port);
	int Send(char* data);
	int Recv(char* buff, int size);
	int SendOneByte(char data);
	int stringLen(char* string);
	typedef char* string;
	int strFind(string strSrc, string strFind);
	int Get_Content_Len(char* data);
	void waiting_data();
private:
	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;
};
// bind: dinh danh cho may tinh mo port


