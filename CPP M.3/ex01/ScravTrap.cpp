#include "ScravTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("unknown", 100, 50, 20)
{
    std::cout<<"scavtrap constructed"<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"scavtrap destructed"<<std::endl;
}