#include <iostream>
#include "AvgTemperature.h"
using namespace std;

Answer AvgTemperature(int*** tab, int x, int y, int z) {
	int sum = 0;
	float avg;
	Answer answer = Answer();
	answer.value = 0;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y;j++) {
			for (int k = 0; k < z; k++) {
				sum += tab[i][j][k];
			}
		}
		avg = float(sum) / (y * z);
		if (avg > answer.value) {
			answer.value = avg;
			answer.axis = 'x';
			answer.position = i;
		}
		sum = 0;
	}

	for (int j = 0; j < y; j++) {
		for (int i = 0; i < x; i++) {
			for (int k = 0; k < z; k++) {
				sum += tab[i][j][k];
			}
		}
		avg = float(sum) / (x * z);
		if (avg > answer.value) {
			answer.value = avg;
			answer.axis = 'y';
			answer.position = j;
		}
		sum = 0;
	}

	return answer;
}