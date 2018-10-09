#include "CharacterManager.h"
#include <QSettings>
#include <QTextStream>

CharacterManager::CharacterManager()
{
    InitCharacterVector(&StandardDiacritics, ":/characters/Characters/Diacritics.ini", "Diacritics", DiacriticInsertion);
}

void CharacterManager::InitCharacterVector(vector<Character>* ChacacterVector, QString INIFile, QString Group, InsertionType InsertAs) {
    QTextStream out(stdout);

    QSettings diacriticsINI(INIFile, QSettings::IniFormat);
    diacriticsINI.setIniCodec("UTF-8");
    diacriticsINI.beginGroup(Group);

     foreach (const QString &key, diacriticsINI.childKeys()) {
         const Character c = {key, diacriticsINI.value(key).toString(), InsertAs};
         ChacacterVector->push_back(c);
     }

     diacriticsINI.endGroup();

     foreach(Character c, StandardDiacritics)
         out << c.Tooltip << "=" << c.Value << endl;
}


void CharacterManager::GenerateButtons(vector<Character> Characters, QFrame* Frame, QWidget* ParentContainer) {
    const int padding = 5;
    FlowLayout* Flow = new FlowLayout(0, padding, padding);
    int max_height = 0;

    foreach(Character c, Characters) {
        QPushButton* btn = new QPushButton(c.Value);
        btn->sizePolicy().setHorizontalPolicy(QSizePolicy::Maximum);
        btn->setToolTip(c.Tooltip);

        QFont font;
        font.setBold(true);
        font.setPixelSize(38);
        btn->setFont(font);

        QFontMetrics met = QFontMetrics(btn->font());
        btn->setMaximumWidth(met.width(btn->text()) * 3);
        Flow->addWidget(btn);

        max_height = std::max(max_height, met.height());
    }

    ParentContainer->setMinimumHeight(max_height*4 + 2*padding);

    if(Frame->layout())
        delete Frame->layout();

    Frame->setLayout(Flow);
}
