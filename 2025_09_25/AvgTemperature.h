#pragma once

struct Answer
{
	char axis;
	int position;
	float value;
};

Answer AvgTemperature(int*** tab, int x, int y, int z);
