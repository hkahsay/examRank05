#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
   
}

TargetGenerator::~TargetGenerator() {
    
}

void TargetGenerator:: learnTargetType(ATarget *at_target)
{

    if(at_target)
        arr_ATarget.insert(std::pair<std::string, ATarget*>(at_target->getType(), at_target->clone()));
}

void TargetGenerator:: forgetSpell(const std::string &type)
{
    std::map<std::string, ATarget*> ::iterator it = arr_ATarget.find(type);
    if(it != arr_ATarget.end())
        delete it->second;
    arr_ATarget.erase(type);
}

 ATarget * TargetGenerator:: createTarget(const std::string &type)
{
    ATarget *spell = arr_ATarget[type];
    if(spell)
        return (arr_ATarget[type]);
    return NULL;
}

