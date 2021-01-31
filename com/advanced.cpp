#include "advanced.h"
#include "ui_advanced.h"
#include <QDebug>

Advanced::Advanced(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Advanced)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowCloseButtonHint&~Qt::WindowContextHelpButtonHint);
}

Advanced::~Advanced()
{

    delete ui;
}

void Advanced::on_Allow_clicked()
{
   ComPara_t compara;
   compara.QiOuCheck = ui->CheckFlag->currentText().toInt();
   compara.StopFlag = ui -> stopselect ->currentText().toFloat();
   compara.Datenum = ui ->DataNum ->currentText().toInt();
   emit onAllowToChange(compara);
   accept();
}

void Advanced::on_Cancel_clicked()
{
   accept();
}

void Advanced::SetComPara(ComPara_t compara)
{
    if(compara.StopFlag == 1)
        ui->stopselect->setCurrentIndex(0);
    else if(compara.StopFlag == 1.5)
        ui->stopselect->setCurrentIndex(1);
    else if(compara.StopFlag == 2)
        ui->stopselect->setCurrentIndex(2);
}
