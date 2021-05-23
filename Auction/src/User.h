#ifndef User_h
#define User_h
#include <string>

class User
{
private:
    std::string name;
public:
    User(std::string);
    std::string GetName() const;
};

#endif /* User_h */
