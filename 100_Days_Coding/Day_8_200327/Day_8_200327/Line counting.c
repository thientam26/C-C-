#include<stdint.h>
#include<stdio.h>
#define MAX_FILE_NAME 100
/*C program to count the number of lines in a text file*/

int main()
{
	FILE* fp;
	int	count = 0; //Line counter (result)
	char filename[MAX_FILE_NAME];
	char c; //To store a character read from file

	// Get file name from user. The file should be 
	// either in current folder or complete path shoud result
	printf("Enter file name:\r\n");
	scanf_s("%s", filename);

	//Open the file
	fp = fopen_s(&stream,filename,"r")

	// Check if file exist
	if (fp == NULL)
	{
		printf("can not open file %s", filename);
		return 0;
	}
	// Extract characters from file and store in character C
	for (c = getc(fp); c != EOF; c = getc(fp))
		if (c == '\n') // Incrementcount if this character in newline
			count = count + 1;
	// Close the file
	fclose(fp);
	printf("The file %s has %d ", filename, count);

	return 0;
}