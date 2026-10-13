#pragma once

#include <iostream>
#include <string>

class Character
{
private:
    std::string name;

public:
    Character(const std::string& name) : name(name)
    {
    }

    std::string GetName() const
    {
        return name;
    }

    virtual void Attack()
    {
        std::cout << name << "‚ÌUŒ‚I" << std::endl;
    }

    virtual ~Character() = default;
};
