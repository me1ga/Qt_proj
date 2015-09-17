#ifndef DIALOG
#define DIALOG


#include <QDialog>
#include <QQueue>

class QVBoxLayout;
class QPushButton;
class QTextEdit;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);

private slots:
    void perevorot();

private:
    QVBoxLayout *mainLayout;
    QTextEdit *textEdit;
    QPushButton *button;

};


#endif // DIALOG

