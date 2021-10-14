#include "LancerDe.h"

LancerDe::LancerDe(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	// On instancie la class dd
	de = new dd();
	dh = new dehisto();

	// On vide le score total
	resetTotalScoreButtonClicked();

	// De base on cache tout les élements
	ui.showTotalScoreButton->setVisible(false);
	ui.resetTotalScoreButton->setVisible(false);
	ui.showTextTotalScoreValue->setVisible(false);
	ui.sendNumberJet->setVisible(false);
	ui.numberJet->setVisible(false);
	ui.showHistorique->setVisible(false);
	ui.tableHistorique->setVisible(false);

	ui.startDeButton->setVisible(false);
	ui.showValueDeButton->setVisible(false);
	ui.showTextDeValue->setVisible(false);

	ui.startDeHistoButton->setVisible(false);
	ui.showTextDeHistoValue->setVisible(false);
	ui.showValueDeHistoButton->setVisible(false);
}

void LancerDe::startDeButtonClicked()
{
	// On lance la fonction lancer le dé
	(*de)++;
}

void LancerDe::showValueDeButtonClicked()
{
	// On récupère le resultat du lancer de dé
	QString result = QString::number(de->getResult());

	// On clear la case et on insert le nouveau resultat
	ui.showTextDeValue->clear();
	ui.showTextDeValue->insertPlainText(result);
}

void LancerDe::showTotalScoreButtonClicked()
{
	// On récupère le score total 
	QString totalScore = QString::number(de->getTotalScore());

	// On clear la case et on insert le nouveau score total
	ui.showTextTotalScoreValue->clear();
	ui.showTextTotalScoreValue->insertPlainText(totalScore);
}

void LancerDe::resetTotalScoreButtonClicked()
{
	// On remet à 0 le compteur de score
	(*de)=0;

	// On clear la case et on insert le score à 0
	ui.showTextTotalScoreValue->clear();
	ui.showTextTotalScoreValue->insertPlainText("0");
}

void LancerDe::startDeHistoButtonClicked()
{
	// On lance la fonction d'envoi du jet
	dh->jet();
}

void LancerDe::showValueDeHistoButtonClicked()
{
	QString result = QString::number(dh->getResult());;
	// On clear la case et on insert le nouveau score total
	ui.showTextDeHistoValue->clear();
	ui.showTextDeHistoValue->insertPlainText(result);
}

void LancerDe::dehistoMenuButtonClicked()
{
	// On cache ce qui n'est pas nécessaire
	ui.showTotalScoreButton->setVisible(false);
	ui.resetTotalScoreButton->setVisible(false);
	ui.showTextTotalScoreValue->setVisible(false);

	ui.startDeButton->setVisible(false);
	ui.showValueDeButton->setVisible(false);
	ui.showTextDeValue->setVisible(false);

	// On affiche ce dont nous avons besoin
	ui.sendNumberJet->setVisible(true);
	ui.numberJet->setVisible(true);
	ui.showHistorique->setVisible(true);
	ui.tableHistorique->setVisible(true);

	ui.startDeHistoButton->setVisible(true);
	ui.showTextDeHistoValue->setVisible(true);
	ui.showValueDeHistoButton->setVisible(true);
	
}

void LancerDe::deMenuButtonClicked()
{
	// On cache ce qui n'est pas nécessaire
	ui.sendNumberJet->setVisible(false);
	ui.numberJet->setVisible(false);
	ui.showHistorique->setVisible(false);
	ui.tableHistorique->setVisible(false);
	ui.startDeHistoButton->setVisible(false);
	ui.showTextDeHistoValue->setVisible(false);
	ui.showValueDeHistoButton->setVisible(false);

	// On affiche ce dont nous avons besoin
	ui.showTotalScoreButton->setVisible(true);
	ui.resetTotalScoreButton->setVisible(true);
	ui.showTextTotalScoreValue->setVisible(true);

	ui.startDeButton->setVisible(true);
	ui.showValueDeButton->setVisible(true);
	ui.showTextDeValue->setVisible(true);

}

void LancerDe::sendNumberJetClicked()
{
	QString nbrLancer = ui.numberJet->text();

	int nbrFinal = nbrLancer.toInt();
	this->nbrFinal = nbrFinal;

	if(nbrFinal == 1) {
		dh->jet();
	}
	else if (nbrFinal > 1) {
		dh->jet(nbrFinal);
	}

}

void LancerDe::showHistoriqueClicked()
{
	if (this->nbrFinal == 1) {

		// On défini les paramètres du tableau
		ui.tableHistorique->setRowCount(this->nbrFinal);
		ui.tableHistorique->setColumnCount(1);

		for (int i = 0; i < 1; i++)
		{

			for (int j = 0; j < 1; j++)
			{
				//Convertir en QString
				int table = dh->getValeurTable(i);

				ui.tableHistorique->setItem(i, j, new QTableWidgetItem(QString::number(table)));
			}
		}
	}
	else if (this->nbrFinal > 1) {

		// On défini les paramètres du tableau
		ui.tableHistorique->setRowCount(this->nbrFinal);
		ui.tableHistorique->setColumnCount(1);

		for (int i = 0; i < this->nbrFinal; i++)
		{
			for (int j = 0; j < 1; j++)
			{
				//Convertir en QString
				int table = dh->getValeurTable(i);

				ui.tableHistorique->setItem(i, j, new QTableWidgetItem(QString::number(table)));
			}
		}
	}
}

