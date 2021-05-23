#pragma once

#include "User.h"

class Bid
{
private:
    User user;
    float value;
public:
    Bid(User user, float value);
    float GetValue() const;
};
