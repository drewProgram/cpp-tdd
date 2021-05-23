#ifndef Bid_h
#define Bid_h
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

#endif /* Bid_h */
