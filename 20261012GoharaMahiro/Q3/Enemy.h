#pragma once

#include "Character.h"

class Enemy : public Character
{
public:
    Enemy(const std::string& name) : Character(name)
    {
    }

    void Attack() override
    {
        std::cout << "‚©‚Ý‚Â‚«UŒ‚I" << std::endl;
    }
};
