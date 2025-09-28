#include <iostream>
#include "CreateTable.h"
#include <cstdlib>
using namespace std;

int ***CreateTable(int x, int y, int z) {
	srand(time(0));
	int*** tab = new int**[x];
	for (int i = 0; i < x; i++) {
		tab[i] = new int* [y];
		for (int j = 0; j < y;j++) {
			tab[i][j] = new int[z];
			for (int k = 0; k < z; k++) {
				tab[i][j][k] = (rand() % 8) + 18;
			}
		}
	}
	return tab;
}