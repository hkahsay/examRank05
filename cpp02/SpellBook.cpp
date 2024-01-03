#include "SpellBook.hpp"

SpellBook:: SpellBook()
{
    
}
SpellBook::SpellBook(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
}

SpellBook::~SpellBook() {}

std::string const &SpellBook::getName() const { return (this->name);}
std::string const &SpellBook::getTitle() const { return (this->title);}

void SpellBook::setTitle(std::string const &title) { this->title = title;}


void SpellBook:: learnSpell(ASpell *as_pell)
{

    if(as_pell)
        arr_aspell.insert(std::pair<std::string, ASpell*>(as_pell->getName(), as_pell->clone()));
}

void SpellBook:: forgetSpell(const std::string &name)
{
    std::map<std::string, ASpell*> ::iterator it = arr_aspell.find(name);
    if(it != arr_aspell.end())
        delete it->second;
    arr_aspell.erase(name);
}

 ASpell * SpellBook:: createSpell(const std::string &name)
{
    ASpell *spell = arr_aspell[name];
    if(spell)
        return (arr_aspell[name]);
    return NULL;
}

