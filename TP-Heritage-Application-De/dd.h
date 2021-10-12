#pragma once
#include <qDebug>
#include <stdlib.h>

class dd
{
private:
	int value;
	int totalScore;
	int result;

public:
	dd(int n);
	dd();

	int LancerDe();
	int getTotalScore();
	int getResult();
	int resetTotalScore();
};

