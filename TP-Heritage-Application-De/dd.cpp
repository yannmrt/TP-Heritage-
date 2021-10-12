#include "dd.h"

dd::dd(int n)
{
	this->value = n;
}

dd::dd() {
	// On définie les valeurs à 0
	this->value = 0;
	this->totalScore = 0;
	this->result = 0;
}

int dd::LancerDe()
{
	// On incorpore la valeur random dans le resultat
	int random = qrand() % 7;
	result = random;

	// On incorpore la valeur de ce lancer dans le score total
	if (totalScore < 0) {
		totalScore = result;
		this->totalScore = totalScore;
	}
	else {
		totalScore = totalScore + result;
		this->totalScore = totalScore;
	}

	return result;
}

int dd::getTotalScore()
{
	// On retourne le score total
	return this->totalScore;
}

int dd::getResult()
{
	// On retourne le résultat
	return this->result;
}

int dd::resetTotalScore()
{
	// On remet la variable totalScore à 0
	int totalScore = 0;
	this->totalScore = totalScore;
	return totalScore;
}


