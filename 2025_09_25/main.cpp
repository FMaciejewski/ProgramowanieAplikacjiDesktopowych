#include <iostream>
#include "CreateTable.h"
#include "ShowTable.h"
#include "AvgTemperature.h"
using namespace std;

int main() {
	int x = 50;
	int y = 30;
	int z = 27;
	int ***tab = CreateTable(x, y, z);
	//ShowTable(tab, x, y, z);

	Answer answer = AvgTemperature(tab, x, y, z);

	cout << "Maksymalna srednia wartosc to: " << answer.value << " znajduje sie ona na przekroju pionowym: " << answer.axis << " = " << answer.position;
	return 0;
}