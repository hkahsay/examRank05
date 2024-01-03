#pragma once

#include <iostream>
#include"ASpell.hpp"
#include"ATarget.hpp"

#include<map>


class SpellBook
{
    private:
        std::string name;
        std::string title;

        SpellBook(SpellBook const &other);
        SpellBook &operator=(SpellBook const &other);
        std::map<std::string, ASpell*> arr_aspell;
    public:
        SpellBook();
        SpellBook(std::string const &name, std::string const &title);
        ~SpellBook();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &title);

        void learnSpell(ASpell *as_pell);
        void forgetSpell(const std::string &name);
        ASpell * createSpell(const std::string &name);
};