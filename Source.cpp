#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
float dt_hinhvuong(int a);
float dt_hcn(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	
	system("pause");
	return 0;
}

int hieu(int a,int b)
{
	return (a-b);
	
}
int tong(int a, int b)
{
	return(a+b);
}


int tich(int a,int b)
{
	return a*b;

}

float thuong(int a, int b)
{
	return a/b;
}

float dt_hinhvuong(int a)
{
	return a*a;
}

float tinhDienTichHinhTron (int r)
{
	float pi = 3.14;
	return pi * r * r;
}

float dt_hcn(int a, int b)
{
	
	return a*b;
}