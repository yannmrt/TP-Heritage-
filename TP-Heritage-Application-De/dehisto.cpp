#include "dehisto.h"

dehisto::dehisto()
{

}

void dehisto::jet()
{
	this->LancerDe();
	tab[0] = this->getResult();
	qDebug() << tab[0];
}

void dehisto::jet(int n)
{
	for (int i = 0; i < n; i++)
	{
		//Tir de dé
		this->LancerDe();

		//Afficher chaque tir dans tableau
		tab[i] = this->getResult();
		qDebug() << tab[i];
	}
}

int dehisto::getValeurTable(int i)
{
	return this->tab[i];
}