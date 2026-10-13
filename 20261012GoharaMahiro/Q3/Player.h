#pragma once

#include "Character.h"

class Player : public Character
{
public:
    Player(const std::string& name) : Character(name)
    {
    }

    void Attack() override
    {
        std::cout << "Œ•‚ÅUŒ‚‚µ‚½I" << std::endl;
    }
};
