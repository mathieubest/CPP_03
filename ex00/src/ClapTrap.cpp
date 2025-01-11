#include "../includes/ClapTrap.hpp"
#include "../includes/ColorCodes.hpp"
#include "../includes/Emojis.hpp"

ClapTrap::ClapTrap(const std::string& name) : _Name(name), _hitPoint(10), _Energy(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _Name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _Name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_Energy > 0 && this->_hitPoint > 0) {
        this->_Energy--;
        std::cout << SWORD << " ClapTrap " << _Name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    } else if (this->_Energy <= 0) {
        std::cout << RED << "ClapTrap " << _Name << " can't attack... Out of energy." << RESET << std::endl;
    } else {
        std::cout << RED << "ClapTrap " << _Name << " can't attack... Health is at 0." << RESET << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hitPoint -= amount;
    std::cout << EXPLOSION << " ClapTrap " << this->_Name << " took " << amount << " damage!" << std::endl << "\tHealth: " << this->_hitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_Energy > 0 && this->_hitPoint > 0) {
        this->_hitPoint += amount;
        this->_Energy--;
        std::cout << HEART << " ClapTrap " << _Name << " got a reparation kit of " << amount << " hit points." << std::endl << "\tHealth: " << this->_hitPoint << ". Energy: " << this->_Energy << std::endl; 
    } else if (this->_Energy <= 0) {
        std::cout << RED << "ClapTrap " << _Name << " can't be repaired... Out of energy." << RESET << std::endl;
    } else {
        std::cout << RED << "ClapTrap " << _Name << " can't be repaired... No more health." << RESET << std::endl;
    }
}