// Add.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

/**
*  功能描述:完成两个双精度浮点型的加法运算
*  @param a
*  @param b
*  @return a+b
*/
double Add(double a, double b){
	return a + b;
};
/**
*  功能描述:完成两个单精度浮点型的加法运算
*  @param a
*  @param b
*  @return a+b
*/
double Add(float a, float b){
	return a + b;
};
/**
*  功能描述:完成两个整型的加法运算
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
	cout << "请输入a的值：" << endl;
	cin >> a;
	cout << "请输入b的值：" << endl;
	cin >> b;
	cout << Add(a, b) << endl;
	cout << Add(1,1) << endl;	
	return 0;
}

