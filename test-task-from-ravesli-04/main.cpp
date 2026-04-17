// When developing the game, we decided it should include monsters,
// because everyone loves fighting monsters.
// Declare a structure that represents your monster.
// Monsters can be of different types: ogre, goblin, skeleton, orc, and troll.
// If your compiler supports C++11, use enum classes;
// if not, use standard enumerations.

// Each monster must also have a name (use std::string)
// and a health value, which represents how much damage it can take before dying.
// Write a function printMonster() that prints all members of the structure.
// Declare monsters of type goblin and orc,
// initialize them using a list of initializers,
// and pass them to the printMonster() function.

// Example of your program’s output:

// This Goblin is named John and has 170 health.
// This Orc is named James and has 35 health.

#include <iostream>
#include <string>

enum class Monster_types {
	OGRE,
	ORC,
	GOBLIN,
	SKELETON,
	TROLL,
};

struct Monster {
	Monster_types type;
	std::string name;
	int health;
};

void print_monster(Monster monster) {
	std::string type;

	switch (monster.type) {
	case Monster_types::OGRE :
		type = "Ogre";
		
		break;
	case Monster_types::ORC :
		type = "Orc";
		
		break;
	case Monster_types::GOBLIN :
		type = "Goblin";
		
		break;
	case Monster_types::SKELETON :
		type = "Skeleton";
		
		break;
	case Monster_types::TROLL :
		type = "Troll";
		
		break;
	default:
		type = "Unknown monster";
		break;
	}

	std::cout << "This " << type << " is named " << monster.name << " and has " << monster.health << " health." << std::endl;
}

int main() {
	Monster goblin = { .type = Monster_types::GOBLIN, .name = "John", .health = 170 };
	Monster orc = { .type = Monster_types::ORC, .name = "James", .health = 35 };

	print_monster(goblin);
	print_monster(orc);
}