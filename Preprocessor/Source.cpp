#include <iostream>
#include <algorithm>
using namespace std;

/*#define PI 3.14
#define forever while(true)
#define begin {
#define end }

#define MSG "Hello World!\n"\
			"Bye world!"

#define mult(a, b) (a * b)
#define crtarr(t, n, l) t n[l]*/
/*#define D 10
#if D < 5
void func(int n) {
	cout << n << endl;
}
#elif D < 15
bool func(int n) {
	return n;
}

#else
int func(int n) {
	return n * n;
}
#endif*/

/*#define P 5
#ifndef O

#endif*/

#define T 10

#ifndef T
#error "T должно существовать"
#else
const int h = T;
#endif


int main() {
	setlocale(LC_ALL, "Russian");
	/*cout << PI << endl;
	int m = PI * 2;*/
	/*int i = 0;
	forever{
		cout << i << endl;
		if (i >= 10)
			break;
		i++;
	}*/
	/*#define N 10
	cout << "N = " << N << endl;
	#undef N
	#define N 15
	cout << "N = " << N << endl;
	#undef forever
	// forever cout << "HI\n"; // не работает, т.к. forever удалЄн*/
	/*cout << MSG << endl;

	cout << "¬ведите два числа: ";
	int x, y;
	cin >> x >> y;
	cout << x << " * " << y << " = " << mult(x, y) << endl;*/
	/*crtarr(int, z1, 10);
	for (int i = 0; i < 10; i++){
		z1[i] = i + 10;
		cout << z1[i] << " ";
	}*/

	system("cls");
	
	
	return 0;
}