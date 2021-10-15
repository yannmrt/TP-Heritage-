#include "dd.h"

dd::dd(int n)
{
	this->result = n;
}

dd::dd() {
	// On définie les valeurs à 0
	this->totalScore = 0;
}

int dd::LancerDe()
{
	// On incorpore la valeur random dans le resultat
	this->result = QRandomGenerator::global()->bounded(1, 7);

	// On met la valeur du dé dans n
	result += (*this);

	// On incorpore la valeur de ce lancer dans le score total
	if (this->totalScore == 0) {
		this->totalScore = this->result;
	}else if (this->totalScore > 0) {

		int scoreTotal = this->totalScore;
		int nDe = this->result;
		totalScore = scoreTotal + nDe;
		this->totalScore = totalScore;
	}

	return n;
}

int dd::getTotalScore()
{
	// On met le score total dans n
	totalScore < (*this);
	// On retourne le score total
	return this->n;
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


// OPERATEURS
dd dd::operator++(int v)
{
	LancerDe();
	return (*this);
}

dd dd::operator=(int n)
{
	resetTotalScore();
	return (*this);
}

void operator+=(int n, dd & dd)
{
	dd.n = dd.result;
}

void operator<(int n, dd & dd)
{
	dd.n = dd.totalScore;
}
