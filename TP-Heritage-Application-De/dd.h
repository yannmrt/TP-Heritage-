#pragma once
#include <qDebug>
#include <stdlib.h>
#include <QRandomGenerator>


class dd
{
private:
	int value;
	int totalScore;
	int result;
	
	// news int
	int n;

	// Functions
	int LancerDe();


public:
	dd(int n);
	dd();

	dd operator++(int v);
	dd operator=(int a);

	int getTotalScore();
	int getResult();
	int resetTotalScore();
};

