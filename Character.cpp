
#include <string>

class Character
{
private:
    std::string name;
    float hp, attackMultiplyer, defense;
public:
    Character(std::string name, float hp, float attackMultiplyer, float defense);
    ~Character();
};

Character::Character(std::string name, float hp, float attackMultiplyer, float defense)
{
    this->name = name;
    this->hp = hp;
    this->attackMultiplyer = attackMultiplyer;
    this->defense = defense;
}

Character::~Character()
{
}
