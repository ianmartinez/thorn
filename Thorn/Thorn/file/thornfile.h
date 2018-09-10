#ifndef THORNFILE_H
#define THORNFILE_H

/* The internal representation of a Thorn Project and the
 * methods to manipulate it. */

#include <vector>
#include <QString>
using namespace std;

struct DictionaryWord
{
    QString Subject,
    Key,
    Pronunciation,
    Definition;
};

struct Page
{
    QString Section,
    Markup;
};

class ThornFile
{
public:
    ThornFile();
    vector<Page> Pages;
    vector<DictionaryWord> Dictionary;
    vector<QString> Characters;
};

#endif // THORNFILE_H
