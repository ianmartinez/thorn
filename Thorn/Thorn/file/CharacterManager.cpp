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
