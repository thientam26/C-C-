#include<stdio.h>
#include<stdint.h>
typedef char* string;
int strFind(string strSrc, string strFind);
int count_str(char* msg);


void main()
{
	char* data = "HTTP1.1 200 OK \r\n{\"Fan\":\"on\",\r\n\"Light\":\"off\",\r\n\"Motor\":\"on\"}";
	printf("%s\r\n", data);
	printf("%d\r\n", count_str(data));
	printf("%d\r\n", strFind(data, "Fan"));

}

int strFind(string strScr, string strFind)
{
	int i = 0;
	for (i = 0; i < (count_str(strScr) - count_str(strFind)); i++)
	{
		int j = 0; //global variable of 1st for
		for (int j = 0; j < count_str(strFind); j++) //local variable of 2nd for
		{
			if (strFind[j] != strScr[i + j])
				break;
		}
		if (j == count_str(strFind)) break;
			   
	}
	if (i == (count_str(strScr) - count_str(strFind))) return -1;
	return i;
}

int count_str(char* msg)
{
	int i = 0;
	for (i = 0; *(msg + i) != '\0'; i++);
	return i;
}

//int strLen(string str);
//{
//	while(
//}