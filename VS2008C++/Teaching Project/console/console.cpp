// console.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "MATLAB.h"
#include <iostream>
using namespace std;
int main(){
	//cout << "234"<<endl;
	//char a;
	//cin>>a;
	//cout << a<<endl;
	//int c=10;
	//int d=20;
	MATLAB matlab;
	//int sum = matlab.Func_GetSum(c,d);
	//float _sum = matlab.Func_GetSum((float)2.22,(float)3.33);
	//matlab.setA(123);
	//matlab.setB(234);
	//int sum2=matlab.Func_GetSum();
	//cout<<_sum<<endl;
	//cout<<sum<<endl;
	//cout<<sum2<<endl;
	//matlab.setA(123);
	//cout<<"a="<<matlab.getA()<<endl;
	int _a =23;//�������_a��ֵ
	int a=&_a;//ȡ_a��ַ��ֵ��a
	int _b=34;//����_b��ֵ
	int b=&_b;//ȡ_b��ַ
	cout<<"a+b="<<matlab.Func_GetSum(a,b);
	//http://www.cnblogs.com/alephsoul-alephsoul/archive/2012/10/10/2719192.html �ο��ļ�
	return 0;
}