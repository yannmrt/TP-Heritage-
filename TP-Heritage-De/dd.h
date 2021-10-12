#include <qDebug>
#include <stdlib.h>

class dd
{
private:
	int value = 0;
	int totalScore = 0;
	int result = 0;

public:
	dd(int n);
	dd();

	int LancerDe();
	int getTotalScore();
	int getResult();
	int resetTotalScore();
};

