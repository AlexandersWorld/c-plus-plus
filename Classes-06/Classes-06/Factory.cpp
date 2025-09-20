#include "Factory.h"
#include "Warrior.h"
#include "Hunter.h"
#include "Mage.h"
#include "Rogue.h"

std::unique_ptr<BaseRole> GetRole(int classNumber, const String& name)
{
	switch (classNumber)
	{
	case 1: return std::make_unique<Warrior>(name, "Warrior");
	case 2: return std::make_unique<Mage>(name, "Mage");
	case 3: return std::make_unique<Rogue>(name, "Rogue");
	case 4: return std::make_unique<Hunter>(name, "Hunter");
	default: return nullptr;
	}
}