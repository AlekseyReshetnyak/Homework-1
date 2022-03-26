#include "Head.h"

int main()
{
	n = count();
	cout << n << endl;
	Complex* arr = new Complex[n];
	for (int i = 0; i < n; i++) arr[i] = { 0, 0 };
	schet(arr);
	for (int i = 0; i < n; i++) {
		string c = (arr[i].im < 0) ? "" : "+";
		cout << arr[i].re << c << arr[i].im << 'i' << endl;
	}
	Complex max = maximum(arr, n);
	string c = (max.im < 0) ? "" : "+";
	cout << "max = " << max.re << c << max.im << 'i' << endl;
}