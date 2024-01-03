#include "ATarget.hpp"

ATarget:: ATarget()
{

}

ATarget:: ATarget(ATarget const &other)
{
    *this = other;
}
ATarget& ATarget:: operator=(ATarget const &other)
{
    if(this != &other)
    {

        this->type = other.type;
    }
    return(*this);
}

ATarget::ATarget(std::string const &type)
{
    this->type = type;
 
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const { return (this->type);}

void ATarget:: getHitBySpell(ASpell const & aspell)const
{
    std::cout<<getType()<< " has been "<<aspell.getEffects()<<"!"<<std::endl;
}
