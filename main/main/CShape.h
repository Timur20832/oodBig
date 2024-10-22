#pragma once
#include "string"
#include "sstream"
#include <iomanip>
#include "cmath"
#include <SFML/Graphics.hpp>
class CShape
{
public:
	virtual sf::Drawable& GetShape() = 0;
	virtual ~CShape() = default;
};

