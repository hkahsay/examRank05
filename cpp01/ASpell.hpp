#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;
    public:

        ASpell();
        ASpell(ASpell const &other);
        ASpell &operator=(ASpell const &other);
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();

        std::string const &getName() const;
        std::string const &getEffects() const;
        virtual ASpell* clone() = 0;
        void launch(ATarget const & atarget)const;

};