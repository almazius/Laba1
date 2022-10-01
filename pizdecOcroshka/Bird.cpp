#include "Bird.h"

Bird::Bird(std::string Name, std::string Type, int Age)
{
    name = Name;
    type = Type;
    age = Age;
}

std::string Bird::getName()
{
    return this->name;
}

std::string Bird::getType()
{
    return this->type;
}

int Bird::getAge()
{
    return this->age;
}

void Bird::changeName(std::string Name)
{
    name = Name;
}
