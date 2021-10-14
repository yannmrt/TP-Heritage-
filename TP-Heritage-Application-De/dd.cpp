#include "dd.h"

dd::dd(int n)
{
	this->value = n;
}

dd::dd() {
	// On définie les valeurs à 0
	this->value = 0;
	this->totalScore = 0;
}

dd dd::operator++(int v)
{
	LancerDe();
	return (*this);
}

dd dd::operator=(int a)
{
	resetTotalScore();
	return (*this);
}

int dd::LancerDe()
{
	// On incorpore la valeur random dans le resultat
	this->n = QRandomGenerator::global()->bounded(1, 7);

	// On incorpore la valeur de ce lancer dans le score total
	if (this->totalScore == 0) {
		this->totalScore = this->n;
	}else if (this->totalScore > 0) {

		int scoreTotal = this->totalScore;
		int nDe = this->n;
		totalScore = scoreTotal + nDe;
		this->totalScore = totalScore;
	}

	return n;
}



int dd::getTotalScore()
{
	// On retourne le score total
	return this->totalScore;
}

int dd::getResult()
{
	// On retourne le résultat
	return this->n;
}

int dd::resetTotalScore()
{
	// On remet la variable totalScore à 0
	this->totalScore = 0;
	return totalScore;
}


