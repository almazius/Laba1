#include "Mammal.h"

Mammal::Mammal(std::string Name, std::string Type, int Age)
{
    this->name = Name;
    this->type = Type;
    this->age = Age;
}

std::string Mammal::getName()
{
    return this->name;
}

std::string Mammal::getType()
{
    return this->type;
}

int Mammal::getAge()
{
    return this->age;
}

void Mammal::changeName(std::string Name)
{
    this->name = Name;
}
