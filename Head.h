#ifndef C_COMPLEX
#define C_COMPLEX

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

static int n = 0;
int count();
typedef struct Complex {
	double re = 0;
	double im = 0;

	Complex summa(Complex n1);
	Complex minus(Complex n1);
	Complex multiply(Complex n1);
	Complex divide(Complex n1);
	void abs();
};

void schet(Complex* arr);
Complex maximum(Complex* arr, int n);

#endif
