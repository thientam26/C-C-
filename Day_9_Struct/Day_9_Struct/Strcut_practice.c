#include<stdint.h>
#include<stdio.h>
#pragma pack(push)
#pragma pack(1)
typedef struct human1
{
	char name[1024];
	int day;
	int month;
	int year;
	long salary;
}human;

int main()
{
	//struct human human1; /*Khai bao nguoi thu 1*/
	//struct human human2; /*Khai bao nguoi thu 2*/
	//struct human human3; /*Khai bao nguoi thu 3*/
	human person[3];

	///*Nguoi 1*/
	//human1.name = "Nguyen Van A";
	//human1.day = 01;
	//human1.month = 8;
	//human1.year = 1999;
	//human1.salary = 1500000;
	//
	///*Nguoi 2*/
	//human2.name = "Nguyen Van B";
	//human2.day = 05;
	//human2.month = 8;
	//human2.year = 1997;
	//human2.salary = 2000000;

	///*Nguoi 3*/
	//human3.name = "Nguyen Van C";
	//human3.day = 01;
	//human3.month = 8;
	//human3.year = 1998;
	//human3.salary = 1000000;

	fgets(person[0].name, sizeof(person[0].name),stdin);
	fgets(&(person[0].day), sizeof(person[0].day), stdin);
	fgets(&(person[0].month), sizeof(person[0].month), stdin);
	fgets(&(person[0].year), sizeof(person[0].year), stdin);
	fgets(&(person[0].salary), sizeof(person[0].salary), stdin);

	//printf("Personal Information\r\n");
	///*printf("%s\ %d/%d/%d\ %d\r\n", human1.name, human1.day, human1.month, human1.year, human1.salary);
	//printf("%s\ %d/%d/%d\ %d\r\n", human2.name, human2.day, human2.month, human2.year, human2.salary);
	//printf("%s\ %d/%d/%d\ %d\r\n", human3.name, human3.day, human3.month, human3.year, human3.salary);*/
	printf("%s\ %d/%d/%d\ %d\r\n", person[0].name, person[0].day, person[0].month, person[0].year, person[0].salary);

}