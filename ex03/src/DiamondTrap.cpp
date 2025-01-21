#include "../includes/DiamondTrap.hpp"
#include "../includes/ClapTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_trap") {
    this->_Name = "default";
    this->_hitPoint = FragTrap::_hitPoint;
    this->_Energy = ScavTrap::_Energy;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << _Name << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_trap") {
    this->_Name = name;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_Energy = ScavTrap::_Energy;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamongTrap " << _Name << " created with the parameterized constructor." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {

}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}