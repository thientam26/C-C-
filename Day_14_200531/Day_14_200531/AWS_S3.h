#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Socket.h"
#include<stdint.h>
class AWS_S3: private Socket
{
public:
	//connect to Amazon
	AWS_S3();
	void get(char* nameFile, char* buff, int buffLen);
	void put(char* nameFile, char* data, int dataLen);
	void putFile(char* nameFile); 
	void getFile(char* nameFile);
};
