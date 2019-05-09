#include <iostream>

using namespace std;

int i = 0;
int a = 5;  //egy egész típusú változó
int *b = &a; //egy mutató, ami 'a' memóriacímét kapja meg, tehát 'a'-ra mutat
int &r = a; //r memória cime a értékét kapja meg
int c[] = {0,1,2,3,4}; //tömb
int (&tr)[5] = c;
int *d[5];
int *h ();
int *(*l) ();
int (*v (int c)) (int a, int b);
int (*(*z) (int)) (int, int);

int main()
{
	cout << a << endl;
	cout << *b << endl;
	cout << &r << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << c[i] << endl;;
	}
	cout << (&tr)[i] <<endl;

	return 0;
}
