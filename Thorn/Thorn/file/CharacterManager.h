#ifndef CHARACTERMANAGER_H
#define CHARACTERMANAGER_H

#include <vector>
#include <QString>
#include <QStringList>
#include <QFrame>
#include <QPushButton>
#include <Widgets/FlowLayout.h>

using namespace std;

enum InsertionType {
    NormalInsertion, // Insert without any modification
    DiacriticInsertion, // Check for the placeholder '◌' and remove it before insertion
    BracketInsertion // Insert and set the cursor at the placeholder '◌''s position between the 'brackets'
};

struct Character {
    QString Tooltip;
    QString Value;
    InsertionType InsertAs;
};

class CharacterManager
{
public:
    CharacterManager();
    void GenerateButtons(vector<Character> Characters, QFrame* Frame, QWidget* ParentContainer);

    vector<Character> StandardDiacritics;

    vector<Character> IPAConsonants;
    vector<Character> IPAAffricates;
    vector<Character> IPAVowels;
    vector<Character> IPADiacritics;
    vector<Character> IPASuprasegmentals;
    vector<Character> IPATones;

    /* Extended:
     *      Characters beyond the basic keyboards of
     *      languages with these alphabets */
    vector<Character> ExtendedLatin;
    vector<Character> ExtendedCyrillic;
    vector<Character> ExtendedGreek;

    /* Scripts:
     *      Characters from ancient languages and
     *      languages that do not have keyboards
     *      in most operating systems,
     *      but have decent font representation
     *      I.E. Germanic runes.
     *      Scripts commented out sadly don't have decent
     *      enough font support cross platform. */
    // vector<Character> ScriptCarian; // https://en.wikipedia.org/wiki/Carian_(Unicode_block)
    vector<Character> ScriptCoptic; // https://en.wikipedia.org/wiki/Coptic_alphabet
    // vector<Character> ScriptOldItalic; // https://en.wikipedia.org/wiki/Old_Italic_script#Etruscan_alphabet
    // vector<Character> ScriptGlagolitic; // https://en.wikipedia.org/wiki/Glagolitic_script
    // vector<Character> ScriptGothic; // https://en.wikipedia.org/wiki/Gothic_alphabet
    // vector<Character> ScriptLydian; // https://en.wikipedia.org/wiki/Lydian_alphabet
    // vector<Character> ScriptLycian; // https://en.wikipedia.org/wiki/Lycian_alphabet
    // vector<Character> ScriptOgham; // https://en.wikipedia.org/wiki/Ogham
    // vector<Character> ScriptOldTurkic; // https://en.wikipedia.org/wiki/Old_Turkic_alphabet
    // vector<Character> ScriptOsage; // https://en.wikipedia.org/wiki/Osage_alphabet
    // vector<Character> ScriptOsmanya; // https://en.wikipedia.org/wiki/Osmanya_alphabet
    vector<Character> ScriptElderFuthark; // https://en.wikipedia.org/wiki/Elder_Futhark
    // vector<Character> ScriptPhoenician; // https://en.wikipedia.org/wiki/Phoenician_alphabet
    // vector<Character> ScriptSouthArabian; // https://en.wikipedia.org/wiki/Ancient_South_Arabian_script


    vector<Character> GetCharactersFromResource(QString ResourceName);
    void InitCharacterVector(vector<Character>* ChacacterVector, QString INIFile, QString Group, InsertionType InsertAs);
};

#endif // CHARACTERMANAGER_H
