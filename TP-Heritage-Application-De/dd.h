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
	int resetTotalScore();


public:
	dd(int n);
	dd();

	dd operator++(int v);
	dd operator=(int a);

	dd operator<(int b);
	dd operator+=(int c);

	int getTotalScore();
	int getResult();
};

