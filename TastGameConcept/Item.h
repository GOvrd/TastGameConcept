#pragma once
#include <iostream>

namespace tgc {

	class _Item {
	private:
		std::string _name = "";
		std::string _tier = "D";
	protected:
	public:
		_Item() {};
		std::string getName() const;
		std::string getTier() const;
	};
}

std::string tgc::_Item::getName() const
{
	return _name;
}
 
std::string tgc::_Item::getTier() const
{
	return _tier;
}
