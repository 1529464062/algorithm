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
	*���ܣ����������������ļӷ�ʵ��
	*ʵ�������� a+b��
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
		return (int)*a+(int)*b;//ȡֵ���
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
