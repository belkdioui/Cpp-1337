#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("unknown", 100, 50, 20)
{
    std::cout<<"scavtrap constructed"<<std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"scavtrap : "<<name<< "constructor called" <<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	ClapTrap::operator=(obj);
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap copy constructor called on " << obj.Name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"scavtrap destructed"<<std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << "Gate mode!" << std::endl;
}