#pragma once
#include "dd.h"

class dehisto : 
	public dd
{
private:
	int tab[7];
	int nbrJet = 0;

public:
	dehisto();
	void jet();
	void jet(int n);
};

