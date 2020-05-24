#include <stdio.h> //dung cho ham printf
#include <stdlib.h>
class Phanso
{
public:
	Phanso();
	Phanso(int t, int m);
	~Phanso();
	int tu;
	int mau;
	void rutGOn(); 
	Phanso operator*(Phanso A);
	Phanso operator+(Phanso A);
private:

};

Phanso::Phanso()
{
	printf("ham tao\r\n");
}
Phanso::Phanso(int t, int m)
{
	printf("tu so la:%d\r\n", t);
	printf("mau so la:%d\r\n", m);
}
Phanso::~Phanso()
{
	printf("ham huy\r\n");
}
void Phanso::rutGOn()
{
	int Max = tu;
	int Min = mau;
	int UOCSO;
	if (mau > tu)
	{
		Max = mau;
		Min = tu;
	}
	for (UOCSO = Min; UOCSO > 1; UOCSO--)
	{
		if ((Min % UOCSO == 0) && (Max % UOCSO == 0)) break;
	}
	//printf("%d", UOCSO);
	tu = tu / UOCSO;
	mau = mau / UOCSO;
}
Phanso Phanso::operator*(Phanso A)
{
	Phanso ketQua;
	ketQua.tu = this->tu * A.tu;
	ketQua.mau = this->mau * A.mau;
	return ketQua;
}
Phanso Phanso::operator+(Phanso A)
{
	Phanso ketQua;
	int MSC = this->mau * A.mau;
	ketQua.tu = this->tu * A.mau + this->mau * A.tu;
	ketQua.mau = MSC;
	ketQua.rutGOn();
	return ketQua;
}
void main()
{
	Phanso A;
	A.tu = 1;
	A.mau = 2;
	printf("Phan so la %d/%d\r\n", A.tu, A.mau);
	A.rutGOn();
	printf("Phan so sau rut gon %d/%d\r\n", A.tu, A.mau);
	//Phanso* B = new Phanso;
	Phanso* B = (Phanso*)malloc(sizeof(Phanso));
	B->mau = 4;
	B->tu = 3;
	printf("B: %d/%d\r\n", B->tu,B->mau); // C: malloc, calloc, C++: New
	//free(B);
	Phanso C = A + (*B);
	printf("phep cong %d/%d\r\n",C.tu,C.mau);
	delete B;

	/*Phanso C(5, 7);
	printf(" phan so C : %d/%d\r\n", C.tu, C.mau);*/
}