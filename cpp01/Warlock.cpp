#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
    std::cout << this->name << ": My job here is done!\n";
    std::map<std::string, ASpell *>::iterator it = this->arr_aspell.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->arr_aspell.end();
    while (it != it_end)
    {
        delete it->second;
        ++it;
    }
    this->arr_aspell.clear();
}

std::string const &Warlock::getName() const { return (this->name);}
std::string const &Warlock::getTitle() const { return (this->title);}

void Warlock::setTitle(std::string const &title) { this->title = title;}

void Warlock::introduce() const 
{
     std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock:: learnSpell(ASpell *as_pell)
{

    if(as_pell)
        arr_aspell.insert(std::pair<std::string, ASpell*>(as_pell->getName(), as_pell->clone()));
}

void Warlock:: forgetSpell(std::string name)
{
    std::map<std::string, ASpell*> ::iterator it = arr_aspell.find(name);
    if(it != arr_aspell.end())
        delete it->second;
    arr_aspell.erase(name);
}

void Warlock:: launchSpell(std::string name, ATarget const &at_target)
{
    ASpell *spell = arr_aspell[name];
    if(spell)
        spell->launch(at_target);
}

