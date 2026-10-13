#include <iostream>
#include "Character.h"

int main()
{
    Character player("Player");
    Character enemy("Enemy");
    Character boss("Boss");

    std::cout << player.GetName() << std::endl;
    std::cout << enemy.GetName() << std::endl;
    std::cout << boss.GetName() << std::endl;

    player.Attack();
    enemy.Attack();
    boss.Attack();

    return 0;
}
