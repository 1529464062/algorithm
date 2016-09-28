#pragma once

class MATLAB
{
private:
	int _a;
	int _b;
public:
	MATLAB(void);
	void setA(int a){
		_a=a;
	}
	void setB(int b){
		_b=b;
	}
	int getA(){
		return _a;
	}
	int getB(){
		return _b;
	}
	/*
	*功能：返回两个运算数的加法实例
	*实例：返回 a+b；
	*/
	int Func_GetSum(){
		return _a+_b;
	}
	int Func_GetSum(int a,int b){
		return a+b;	
	}
	float Func_GetSum(float a,float b){
		return a+b;
	}
	int Func_GetSum(int &a,int &b){
		return (int)*a+(int)*b;//取值相加
	}
	int Func_GetSub(int a,int b){
		return a-b;
	}
	float Func_GetSub(float a,float b){
		return a-b;
	}
	int Func_GetRide(int a,int b){
		return a*b;
	}
	float Func_GetRide(float a,float b){
		return a*b;
	}
public:
	~MATLAB(void);
};
