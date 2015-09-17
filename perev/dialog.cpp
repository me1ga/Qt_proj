#include <QtWidgets>
#include <QProcess>
#include <QString>
#include <QClipboard>

#include "dialog.h"

Dialog::Dialog(QWidget *parent) : QDialog(parent)
{
    mainLayout = new QVBoxLayout;
    buttonsLayout = new QHBoxLayout;
    textEdit = new QTextEdit;
    cp_button = new QPushButton;
    p_button = new QPushButton;
    clipboard = QApplication::clipboard();

    mainLayout->addWidget(textEdit);
    mainLayout->addLayout(buttonsLayout);
    buttonsLayout->addWidget(cp_button);
    buttonsLayout->addWidget(p_button);

    textEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    cp_button->setText("Взять из буфера");
    p_button->setText("Перевернуть");
    setLayout(mainLayout);
    setWindowTitle("Переворотчик");
    setFixedSize(640, 480);

    connect(cp_button, SIGNAL(clicked()), this, SLOT(cp_frob_clipboard()));
    connect(p_button, SIGNAL(clicked()), this, SLOT(perevorot()));
}

void Dialog::cp_frob_clipboard()
{
    const QMimeData *mimeData = clipboard->mimeData();
    if(mimeData->hasText())
    {
        QString string = clipboard->text();
        for(int i = 0; i < string.size(); i++)
        {
            switch(string.at(i).unicode())
            {
            case 'q':
                string.replace(i, 1, "й");
                break;
            case 'w':
                string.replace(i, 1, "ц");
                break;
            case 'e':
                string.replace(i, 1, "у");
                break;
            case 'r':
                string.replace(i, 1, "к");
                break;
            case 't':
                string.replace(i, 1, "е");
                break;
            case 'y':
                string.replace(i, 1, "н");
                break;
            case 'u':
                string.replace(i, 1, "г");
                break;
            case 'i':
                string.replace(i, 1, "ш");
                break;
            case 'o':
                string.replace(i, 1, "щ");
                break;
            case 'p':
                string.replace(i, 1, "з");
                break;
            case '[':
                string.replace(i, 1, "х");
                break;
            case ']':
                string.replace(i, 1, "ъ");
                break;
            case 'a':
                string.replace(i, 1, "ф");
                break;
            case 's':
                string.replace(i, 1, "ы");
                break;
            case 'd':
                string.replace(i, 1, "в");
                break;
            case 'f':
                string.replace(i, 1, "а");
                break;
            case 'g':
                string.replace(i, 1, "п");
                break;
            case 'h':
                string.replace(i, 1, "р");
                break;
            case 'j':
                string.replace(i, 1, "о");
                break;
            case 'k':
                string.replace(i, 1, "л");
                break;
            case 'l':
                string.replace(i, 1, "д");
                break;
            case ';':
                string.replace(i, 1, "ж");
                break;
            case '\'':
                string.replace(i, 1, "э");
                break;
            case 'z':
                string.replace(i, 1, "я");
                break;
            case 'x':
                string.replace(i, 1, "ч");
                break;
            case 'c':
                string.replace(i, 1, "с");
                break;
            case 'v':
                string.replace(i, 1, "м");
                break;
            case 'b':
                string.replace(i, 1, "и");
                break;
            case 'n':
                string.replace(i, 1, "т");
                break;
            case 'm':
                string.replace(i, 1, "ь");
                break;
            case ',':
                string.replace(i, 1, "б");
                break;
            case '.':
                string.replace(i, 1, "ю");
                break;
            case '/':
                string.replace(i, 1, ".");
                break;
            default:
                break;
            }
        }
        clipboard->clear(QClipboard::Clipboard);
        clipboard->setText(string, QClipboard::Clipboard);
    }
}

void Dialog::perevorot()
{
    QString string = textEdit->toPlainText();
    for(int i = 0; i < string.size(); i++)
    {
        switch(string.at(i).unicode())
        {
        case 'q':
            string.replace(i, 1, "й");
            break;
        case 'w':
            string.replace(i, 1, "ц");
            break;
        case 'e':
            string.replace(i, 1, "у");
            break;
        case 'r':
            string.replace(i, 1, "к");
            break;
        case 't':
            string.replace(i, 1, "е");
            break;
        case 'y':
            string.replace(i, 1, "н");
            break;
        case 'u':
            string.replace(i, 1, "г");
            break;
        case 'i':
            string.replace(i, 1, "ш");
            break;
        case 'o':
            string.replace(i, 1, "щ");
            break;
        case 'p':
            string.replace(i, 1, "з");
            break;
        case '[':
            string.replace(i, 1, "х");
            break;
        case ']':
            string.replace(i, 1, "ъ");
            break;
        case 'a':
            string.replace(i, 1, "ф");
            break;
        case 's':
            string.replace(i, 1, "ы");
            break;
        case 'd':
            string.replace(i, 1, "в");
            break;
        case 'f':
            string.replace(i, 1, "а");
            break;
        case 'g':
            string.replace(i, 1, "п");
            break;
        case 'h':
            string.replace(i, 1, "р");
            break;
        case 'j':
            string.replace(i, 1, "о");
            break;
        case 'k':
            string.replace(i, 1, "л");
            break;
        case 'l':
            string.replace(i, 1, "д");
            break;
        case ';':
            string.replace(i, 1, "ж");
            break;
        case '\'':
            string.replace(i, 1, "э");
            break;
        case 'z':
            string.replace(i, 1, "я");
            break;
        case 'x':
            string.replace(i, 1, "ч");
            break;
        case 'c':
            string.replace(i, 1, "с");
            break;
        case 'v':
            string.replace(i, 1, "м");
            break;
        case 'b':
            string.replace(i, 1, "и");
            break;
        case 'n':
            string.replace(i, 1, "т");
            break;
        case 'm':
            string.replace(i, 1, "ь");
            break;
        case ',':
            string.replace(i, 1, "б");
            break;
        case '.':
            string.replace(i, 1, "ю");
            break;
        case '/':
            string.replace(i, 1, ".");
            break;
        default:
            break;
        }
    }
    textEdit->setText(string);
}
