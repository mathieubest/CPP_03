#include "../includes/FragTrap.hpp"

int main() {
    FragTrap a("Mista");

    a.attack("Broski");
    a.attack("Broski");
    a.highFivesGuys();
    a.beRepaired(20);
    a.takeDamage(10);
    for (int i = 0; i < 100; i++) {
        a.attack("Sam");
    }
    a.beRepaired(5);
    return (0);
}
