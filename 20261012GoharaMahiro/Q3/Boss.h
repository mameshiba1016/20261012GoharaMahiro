#pragma once

#include "Character.h"

class Boss : public Character
{
public:
    Boss(const std::string& name) : Character(name)
    {
    }

    void Attack() override
    {
        std::cout << "‹­—Í‚È•KŽE‹Z‚ð•ú‚Á‚½I" << std::endl;
    }
};
