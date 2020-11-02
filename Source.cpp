#include <iostream>
#include <stdlid.h>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
float Chuvihinhvuong(int a);
float tinhChuViHcn(int a,int b);
float tinhChuViHinhVuong(int a);
float tinhChuViHinhTron (int r);
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


float Chuvihinhvuong(int a){
	return a*4;
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

bool Phepcongrandom(){
	int a = 0+rand()%(100+1-0);
	int b = 0+rand()%(100+1-0);
	int c;
	cout << "a=" << a;
	cout << "b=" << b;
	cout << "ket qua :";
	cin >> c;
	if(c==a+b)
		return true;
	return false;
}

bool Pheptrurandom(){
	int a = 0+rand()%(100+1-0);
	int b = 0+rand()%(100+1-0);
	int c;
	cout << "a=" << a;
	cout << "b=" << b;
	cout << "ket qua :";
	cin >> c;
	if(c==a-b)
		return true;
	return false;
}