#ifndef CHARACTERMANAGER_H
#define CHARACTERMANAGER_H


#include <QString>
#include <QStringList>

class CharacterManager
{
public:
    CharacterManager();
    QStringList Consonants;
    /* Extended:
     *      Characters beyond the basic keyboards of
     *      languages with these alphabets */
    QStringList ExtendedLatin;
    QStringList ExtendedCyrillic;
    QStringList ExtendedGreek;

    /* Scripts:
     *      Characters from ancient languages and
     *      languages that do not have keyboards
     *      in most operating systems,
     *      but have decent font representation
     *      I.E. FUTHARK runes or Carian */
    QStringList ScriptCarian; // https://en.wikipedia.org/wiki/Carian_(Unicode_block)
    QStringList ScriptCoptic; // https://en.wikipedia.org/wiki/Coptic_alphabet
    QStringList ScriptOldItalic; // https://en.wikipedia.org/wiki/Old_Italic_script#Etruscan_alphabet
    QStringList ScriptGlagolitic; // https://en.wikipedia.org/wiki/Glagolitic_script
    QStringList ScriptGothic; // https://en.wikipedia.org/wiki/Gothic_alphabet
    QStringList ScriptLydian; // https://en.wikipedia.org/wiki/Lydian_alphabet
    QStringList ScriptLycian; // https://en.wikipedia.org/wiki/Lycian_alphabet
    QStringList ScriptOgham; // https://en.wikipedia.org/wiki/Ogham
    QStringList ScriptOldTurkic; // https://en.wikipedia.org/wiki/Old_Turkic_alphabet
    QStringList ScriptOsage; // https://en.wikipedia.org/wiki/Osage_alphabet
    QStringList ScriptOsmanya; // https://en.wikipedia.org/wiki/Osmanya_alphabet
    QStringList ScriptRunic; // https://en.wikipedia.org/wiki/Runes



    QStringList GetCharactersFromResource(QString ResourceName);
};

#endif // CHARACTERMANAGER_H
