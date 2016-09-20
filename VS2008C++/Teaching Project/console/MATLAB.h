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
	int Func_GetSum(int a,int b){
		return a+b;	
	}
	int Func_GetSub(int a,int b){
		return a-b;
	}
public:
	~MATLAB(void);
};
