#pragma once

#include <iostream>
#include "Character.h"

class BattleManager
{
public:
    void StartBattle(Character& character)
    {
        std::cout << "戦闘開始！" << std::endl;
        // キャラクター名を表示
        std::cout << character.GetName()<< "のターン！" << std::endl;
        // 攻撃処理を実行
        character.Attack();

        std::cout << "戦闘終了！" << std::endl;
    }
};
