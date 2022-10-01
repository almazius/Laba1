#pragma once
#include <string>
class Bird
{
private:
	std::string name;
	std::string type;
	int age;
public:
	Bird(std::string Name, std::string Type, int Age=0);
	std::string getName();
	std::string getType();
	int getAge();
	
	void changeName(std::string);
};
