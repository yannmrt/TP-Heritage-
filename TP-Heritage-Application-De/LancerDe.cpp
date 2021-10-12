#include "LancerDe.h"

LancerDe::LancerDe(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	// On instancie la class dd
	dd de;

	dehisto deh;

	// On vide le score total
	resetTotalScoreButtonClicked();

	// De base on cache tout les �lements
	ui.showTotalScoreButton->setVisible(false);
	ui.resetTotalScoreButton->setVisible(false);
	ui.showTextTotalScoreValue->setVisible(false);
	ui.showNumberJet->setVisible(false);
	ui.showTextNumberJet->setVisible(false);
	ui.showHistorique->setVisible(false);
	ui.tableHistorique->setVisible(false);

	ui.startDeButton->setVisible(false);
	ui.showValueDeButton->setVisible(false);
	ui.showTextDeValue->setVisible(false);
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

void LancerDe::dehistoMenuButtonClicked()
{
	// On cache ce qui n'est pas n�cessaire
	ui.showTotalScoreButton->setVisible(false);
	ui.resetTotalScoreButton->setVisible(false);
	ui.showTextTotalScoreValue->setVisible(false);

	// On affiche ce dont nous avons besoin
	ui.showNumberJet->setVisible(true);
	ui.showTextNumberJet->setVisible(true);
	ui.showHistorique->setVisible(true);
	ui.tableHistorique->setVisible(true);

	ui.startDeButton->setVisible(true);
	ui.showValueDeButton->setVisible(true);
	ui.showTextDeValue->setVisible(true);
}

void LancerDe::deMenuButtonClicked()
{
	// On cache ce qui n'est pas n�cessaire
	ui.showNumberJet->setVisible(false);
	ui.showTextNumberJet->setVisible(false);
	ui.showHistorique->setVisible(false);
	ui.tableHistorique->setVisible(false);

	// On affiche ce dont nous avons besoin
	ui.showTotalScoreButton->setVisible(true);
	ui.resetTotalScoreButton->setVisible(true);
	ui.showTextTotalScoreValue->setVisible(true);

	ui.startDeButton->setVisible(true);
	ui.showValueDeButton->setVisible(true);
	ui.showTextDeValue->setVisible(true);

}

void LancerDe::showNumberJetButtonClicked()
{
	deh->jet();
}

void LancerDe::showHistoriqueButtonClicked()
{

}
