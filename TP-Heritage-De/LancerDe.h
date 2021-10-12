#include <QtWidgets/QWidget>
#include "ui_LancerDe.h"


#include "dd.h"

// On inclus la dépendance de qDebug
#include <qDebug>


class LancerDe : public QWidget
{
	Q_OBJECT

public:
	LancerDe(QWidget *parent = Q_NULLPTR);

private:
	Ui::LancerDeClass ui;
	dd *de;

public slots:
	void startDeButtonClicked();
	void showValueDeButtonClicked();
	void showTotalScoreButtonClicked();
	void resetTotalScoreButtonClicked();
};
