#include "../includes/ScavTrap.hpp"

int main() {
    ScavTrap a("Mista");

    a.attack("Broski");
    a.takeDamage(80);
    a.attack("Broski");
    a.guardGate();
    a.beRepaired(20);
    a.takeDamage(39);
    a.beRepaired(9);
    a.takeDamage(10);
    a.beRepaired(50);
    return (0);
}
