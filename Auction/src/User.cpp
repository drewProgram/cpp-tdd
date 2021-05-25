#include "User.h"

User::User(std::string name) : name(name)
{
}

std::string User::GetName() const
{
    return name;
}
