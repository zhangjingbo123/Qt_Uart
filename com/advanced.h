#ifndef ADVANCED_H
#define ADVANCED_H

#include <QDialog>
#include <QMainWindow>
struct ComPara_t
{
    int QiOuCheck;
    int Datenum;
    float StopFlag;
};
namespace Ui {
class Advanced;
}

class Advanced : public QDialog
{
    Q_OBJECT

public:
    explicit Advanced(QWidget *parent = 0);
    ~Advanced();
    void SetComPara(struct ComPara_t);

public slots:
   void on_Allow_clicked();
   void on_Cancel_clicked();

private:
    Ui::Advanced *ui;

signals:
    void onAllowToChange(struct ComPara_t);
};

#endif // ADVANCED_H
