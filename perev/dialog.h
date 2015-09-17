#ifndef DIALOG
#define DIALOG


#include <QDialog>
#include <QQueue>

class QVBoxLayout;
class QHBoxLayout;
class QPushButton;
class QTextEdit;
class QClipboard;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);

private slots:
    void perevorot();
    void cp_frob_clipboard();

private:
    QVBoxLayout *mainLayout;
    QHBoxLayout *buttonsLayout;
    QTextEdit *textEdit;
    QPushButton *cp_button;
    QPushButton *p_button;
    QClipboard *clipboard;

};


#endif // DIALOG

