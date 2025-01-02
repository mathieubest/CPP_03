#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : Name(name), hitPoint(10), Energy(10), attackDamage(0) {
    std::cout << "ClapTrap " << Name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->Energy <= 0 || this->hitPoint <= 0) {
        std::cout << "ClapTrap " << Name << " can't attack... Out of energy or hit points... Needs to be repaired!" << std::endl;
    } else {
        this->Energy--;
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << this->attackDamage << " points of damage! Energy level: " << this->Energy << std::endl;
        // std::cout << "Energy level: " << this->Energy << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->hitPoint -= amount;
    std::cout << "ClapTrap " << this->Name << " took " << amount << " damage! Health is now at " << this->hitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->Energy <= 0 || this->hitPoint <= 0) {
        std::cout << "ClapTrap " << Name << " has no more energy or hit points to get repaired..." << std::endl;
    } else {
        this->hitPoint += amount;
        this->Energy--;
        std::cout << "ClapTrap " << Name << " got a reparation kit of " << amount << " hit points. Health is now at " << this->hitPoint << ". Energy level: " << this->Energy << std::endl; 
    }
}