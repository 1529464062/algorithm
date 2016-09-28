// console.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MATLAB.h"
#include <iostream>
using namespace std;
int main(){
	cout << "234"<<endl;
	char a;
	cin>>a;
	cout << a<<endl;
	int c=10;
	int d=20;
	MATLAB matlab;
	int sum = matlab.Func_GetSum(c,d);
	float _sum = matlab.Func_GetSum((float)2.22,(float)3.33);
	matlab.setA(123);
	matlab.setB(234);
	int sum2=matlab.Func_GetSum();
	cout<<_sum<<endl;
	cout<<sum<<endl;
	cout<<sum2<<endl;
	matlab.setA(123);
	cout<<"a="<<matlab.getA()<<endl;
	cin>>a;
	return 0;
}