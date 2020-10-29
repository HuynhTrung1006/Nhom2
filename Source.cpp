#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
float tinhChuViHcn(int a,int b);
float tinhChuViHinhVuong(int a);
float tinhChuViHinhTron (int r);
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
float tinhChuViHcn(int a,int b)
{
	return (a+b)*2;
	
}
float tinhChuViHinhVuong(int a){
	return a*4;
}

float tinhChuViHinhTron (int r)
{
	float pi = 3.14;
	float cvht = pi * 2 * r;
	return cvht;
}