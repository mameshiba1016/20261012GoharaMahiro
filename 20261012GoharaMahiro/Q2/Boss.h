#pragma once

#include "Character.h"

class Boss : public Character
{
public:
    // コンストラクタ
    Boss(const std::string& name) : Character(name)
    {
    }
    // 攻撃処理をオーバーライド
    void Attack() override
    {
        std::cout << "強力な必殺技を放った！" << std::endl;
    }
};
