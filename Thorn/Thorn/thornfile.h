#ifndef THORNFILE_H
#define THORNFILE_H
#include <vector>
#include <QString>
using namespace std;

struct DictionaryWord
{
    QString Section,
    Key,
    Pronunciation,
    Definition;
};

class ThornFile
{
public:
    ThornFile();
    vector<QString> Pages;
    vector<DictionaryWord> Dictionary;
    vector<QString> Characters;
};

#endif // THORNFILE_H
