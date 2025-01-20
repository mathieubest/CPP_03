#include "../includes/FragTrap.hpp"
#include "../includes/ColorCodes.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->_hitPoint = 100;
    this->_Energy = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << _Name << " created." << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (this->_Energy <= 0 || this->_hitPoint <= 0) {
        std::cout << BOLD_RED << "FragTrap " << _Name << " can't attack... Out of energy or hit points... Needs to be repaired!" << RESET << std::endl;
    } else {
        this->_Energy--;
        std::cout << "FragTrap " << _Name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! "<< BOLD_BLUE << "Energy level: " << this->_Energy << RESET << std::endl;
    }
}


FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _Name << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _Name << " requested a Positive High Five Guys." << std::endl;
}

