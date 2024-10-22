#pragma once
#include "CShape.h"
class CRectangle : public CShape
{
public:
	CRectangle(const sf::Vector2f& leftTopPoint, const sf::Vector2f& rightBottomPoint);

	double GetArea() override;
	double GetPerimeter() override;
	int Draw() override;

private:
	sf::Vector2f m_leftTop;
	sf::Vector2f m_rightBottom;
};

