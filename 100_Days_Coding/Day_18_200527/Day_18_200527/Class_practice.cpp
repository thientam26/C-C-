#include <iostream>

using namespace std;

class Box
{
public:
	Box();
	~Box();
	double chieudai; // chieu dai cua hop
	double chieurong; // chieu rong cua hop
	double chieucao; // chieu cao cua hop

private:

};

Box::Box()
{
	printf("ham tao\r\n");
}

Box::~Box()
{
	printf("ham huy\r\n");
}
int main()
{
	Box Box1; // Khai bao Box1 co kieu cua Box
	Box Box2; // Khai bao Box2 co kieu cua Box
	double thetich = 0.0; // Luu tru the tich cua box

	// box 1 specification
	Box1.chieucao = 4.5;
	Box1.chieudai = 2.2;
	Box1.chieurong = 1.5;

	// box 2 specification
	Box2.chieucao = 3.2;
	Box2.chieudai = 4.5;
	Box2.chieurong = 2.3;

	// The volumn of box1
	thetich = Box1.chieucao * Box1.chieudai * Box1.chieurong;
	printf("The tich cua Box1 la :%f\r\n", thetich);

	//The volumn of box 2
	thetich = Box2.chieucao * Box2.chieudai * Box2.chieurong;
	printf("The tich cua Box2 la : %f\r\n", thetich);
	return 0;
}