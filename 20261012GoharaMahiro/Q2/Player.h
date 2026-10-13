#pragma once

#include "Character.h"

class Player : public Character
{
public:
    // コンストラクタ
    Player(const std::string& name) : Character(name)
    {
    }
    // 攻撃処理をオーバーライド
    void Attack() override
    {
        std::cout << "剣で攻撃した！" << std::endl;
    }
};
