#pragma once
#include <string>

class Mammal {
private:
	std::string name;
	std::string type;
	int age;
public:
	Mammal(std::string Name, std::string Type, int Age = 0);
	std::string getName();
	std::string getType();
	int getAge();

	void changeName(std::string);
};
