#pragma once
#include "CShape.h"
#include "CMathShape.h"
#include "CDrawShape.h"
#include <cmath>

const double pi = 3.14;

class CCircle : public CShape
{
public:
	CCircle(const sf::Vector2f& centerPoint, float radius);
	sf::Drawable& GetShape() override;

private:
	sf::CircleShape m_shape;
};