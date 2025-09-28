#include <iostream>
using namespace std;

int main() {
	int tab[10];
	tab[0] = 1;
	tab[1] = 2;

	cout << *tab << endl;
	cout << *(tab + 1) << endl;

	int *b;
	b = new int;
	cout << *b << endl;
	*b = 3;
	cout << *b << endl;
	cout << b << endl;
	cout << &b << endl;
	cout << &*b;
}