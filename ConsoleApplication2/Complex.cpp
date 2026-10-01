#include "Complex.h"
#include <iostream>
#include<cmath>
using namespace std;

	void complex::init(double f, double s)
	{
		this->first = f;
		this->second = s;


	}

	void complex::Read()
	{
		double f, s;
		cout << "Enter the first number: "<<endl;
		cin >> f;
		cout << endl;
		this->first = f;
		cout << "Enter the second number: "<<endl;
		cin >> s;
		cout << endl;
		this->second = s;
	}
	void complex::Display()
	{
		cout << pow(this->first,this->second) << endl;
	}
	complex complex::Pow(complex N)
	{
		complex result;
		result.first = pow(this->first, N.first) - pow(this->second, N.second);
		result.second = pow(this->first, N.second) + pow(this->second, N.first);
		return result;
	}

