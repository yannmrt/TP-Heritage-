#include "LancerDe.h"

LancerDe::LancerDe(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	// On instancie la class dd
	dd de;

	// On vide le score total
	resetTotalScoreButtonClicked();
}

void LancerDe::startDeButtonClicked()
{
	// On lance la fonction lancer le d�
	de->LancerDe();
}

void LancerDe::showValueDeButtonClicked()
{
	// On r�cup�re le resultat du lancer de d�
	QString result = QString::number(de->getResult());

	// On clear la case et on insert le nouveau resultat
	ui.showTextDeValue->clear();
	ui.showTextDeValue->insertPlainText(result);
}

void LancerDe::showTotalScoreButtonClicked()
{
	// On r�cup�re le score total 
	QString totalScore = QString::number(de->getTotalScore());

	// On clear la case et on insert le nouveau score total
	ui.showTextTotalScoreValue->clear();
	ui.showTextTotalScoreValue->insertPlainText(totalScore);
}

void LancerDe::resetTotalScoreButtonClicked()
{
	// On remet � 0 le compteur de score
	de->resetTotalScore();

	// On clear la case et on insert le score � 0
	ui.showTextTotalScoreValue->clear();
	ui.showTextTotalScoreValue->insertPlainText("0");
}
