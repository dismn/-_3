#pragma once

#include  <iostream>
using namespace std;

class Complex
{
	
public:
	double real;
	double imagine;
	Complex()//����������� �� ������������
	{

	}
	

	Complex (double r, double i)//����������� �����������

	{
		

		real = r;
		imagine = i;

	}
	Complex Read();
	void Display();

	Complex Add(Complex M);
	Complex Sub(Complex M);
	Complex Mul(Complex M);
	Complex Div(Complex M);
	void Conj();

};