#pragma once
#include <iostream>

namespace tgc {
	const std::string TIER[] = { "D", "C","B" ,"A" ,"S" ,"SS" };
	class _Item {
	private:
		std::string _name = "---";
		std::string _tier = TIER[0];
	protected:
	public:
		_Item();
		std::string getName() const;
		std::string getTier() const;
		void print();
	};
}

tgc::_Item::_Item()
{
	srand(time(0));
	_tier = TIER[rand() % 6];
	_name = rand() % 6 + 'a';
}

std::string tgc::_Item::getName() const
{
	return _name;
}
 
std::string tgc::_Item::getTier() const
{
	return _tier;
}

void tgc::_Item::print()
{
	std::cout << "Name: " << _name << " Tier: " << _tier << "\n";
}
