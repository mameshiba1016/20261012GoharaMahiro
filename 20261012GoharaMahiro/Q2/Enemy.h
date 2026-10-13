#pragma once

#include "Character.h"

class Enemy : public Character
{
public:
    // コンストラクタ
    Enemy(const std::string& name) : Character(name)
    {
    }
    // 攻撃処理をオーバーライド
    void Attack() override
    {
        std::cout << "かみつき攻撃！" << std::endl;
    }
};
