#include "../includes/FragTrap.hpp"

int main() {
    FragTrap a("Mista");

    a.attack("Broski");
    a.takeDamage(80);
    a.attack("Broski");
    a.highFivesGuys();
    a.beRepaired(20);
    a.takeDamage(39);
    a.beRepaired(9);
    a.takeDamage(10);
    a.beRepaired(50);
    return (0);
}
