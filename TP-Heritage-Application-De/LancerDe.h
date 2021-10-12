#include "dd.h"

// On inclus la dépendance de qDebug
#include <qDebug>

#include <QtWidgets/QMainWindow>
#include "ui_LancerDe.h"

class LancerDe : public QMainWindow
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
