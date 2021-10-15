#pragma once
#include <qDebug>
#include <stdlib.h>
#include <QRandomGenerator>


class dd
{

friend void operator+=(int n, dd &dd);
friend void operator<(int n, dd &dd);

private:
	int totalScore;
	int result = 0;
	
	// news int
	int n;

	// Functions
	int LancerDe();
	int resetTotalScore();


public:
	dd(int n);
	dd();

	dd operator++(int v);
	dd operator=(int n);

	int getTotalScore();
	int getResult();
};
