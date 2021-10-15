#include "dehisto.h"

dehisto::dehisto()
{
	nbVal = 0;
}

void dehisto::jet()
{
	//Tir de dé
	int a = 0;
	dd::operator++(a);

	tab[0] = this->getResult();

	//for (int i = 0; tab[i] != 0; i++) {
	//	tab[i] = this->getResult();
	//}

	qDebug() << tab[0];
}

void dehisto::jet(int n)
{
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		dd::operator++(a);

		tab[i] = this->getResult();
		qDebug() << tab[i];
	}

	/*dd::operator++(i);

	int n;
	n += (*this);

	if (nbVal < 7)
	{
		tab[nbVal++] = n;
	}
	else
	{
		for (int i = 0; i < 7 - 1; i++)
		{
			tab[i] = tab[i + 1];
		}

		tab[6] = n;
	}*/
}

int dehisto::getValeurTable(int i)
{
	// On retourne le tableau
	return this->tab[i];
}