#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"

int main()
{
    // オブジェクト生成
    Player player("Player");
    Enemy enemy("Enemy");
    Boss boss("Boss");
    // プレイヤーの攻撃
    std::cout << player.GetName() << "：";
    player.Attack();
    // 敵の攻撃
    std::cout << enemy.GetName() << "：";
    enemy.Attack();
    // ボスの攻撃
    std::cout << boss.GetName() << "：";
    boss.Attack();

    return 0;
}
