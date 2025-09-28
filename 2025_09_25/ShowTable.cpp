#include <iostream>
#include "ShowTable.h"
using namespace std;

void ShowTable(int*** tab, int x, int y, int z)
{
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y;j++) {
			for (int k = 0; k < z; k++) {
				cout << tab[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}
}
