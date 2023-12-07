#include <string>

class Move
{
private:
    std::string name;
    float damage;
    int cooldown;
public:
    Move(std::string name, float damage, int cooldown);
    ~Move();
};

Move::Move(std::string name, float damage, int cooldown)
{
}

Move::~Move()
{
}
