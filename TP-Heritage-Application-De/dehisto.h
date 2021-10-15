#pragma once
#include "dd.h"

class dehisto : 
	public dd
{
private:
	int tab[7]; // Tableau taille 7 maxi
	int nbrJet = 0;
	int nbVal;

public:
	dehisto();
	void jet();
	void jet(int n);
	int getValeurTable(int i);
};

