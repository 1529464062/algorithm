// Add.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

/**
*  ��������:�������˫���ȸ����͵ļӷ�����
*  @param a
*  @param b
*  @return a+b
*/
double Add(double a, double b){
	return a + b;
};
/**
*  ��������:������������ȸ����͵ļӷ�����
*  @param a
*  @param b
*  @return a+b
*/
double Add(float a, float b){
	return a + b;
};
/**
*  ��������:����������͵ļӷ�����
*  @param a
*  @param b
*  @return a+b
*/
double Add(int a, int b){
	return a + b;
};
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "123" << "147" << endl;
	double a, b;
	cout << "������a��ֵ��" << endl;
	cin >> a;
	cout << "������b��ֵ��" << endl;
	cin >> b;
	cout << Add(a, b) << endl;
	cout << Add(1,1) << endl;	
	return 0;
}

