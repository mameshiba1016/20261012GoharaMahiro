#pragma once

#include <iostream>
#include <string>

class Character
{
private:
    std::string name;

public:
    // コンストラクタ
    Character(const std::string& name) : name(name)
    {
    }
    // 名前を取得
    std::string GetName() const
    {
        return name;
    }
    // 攻撃処理
    virtual void Attack()
    {
        std::cout << name << "の攻撃！" << std::endl;
    }
    // 仮想デストラクタ
    virtual ~Character() = default;
};
