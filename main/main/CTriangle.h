#pragma once
#include "CShape.h"
class CTriangle : public CShape
{
public:
	CTriangle(const sf::Vector2f& vertex1, const sf::Vector2f& vertex2, const sf::Vector2f& vertex3);

	double GetArea() override;
	double GetPerimeter() override;
	int Draw() override;

private:
	sf::Vector2f m_vertex1;
	sf::Vector2f m_vertex2;
	sf::Vector2f m_vertex3;
};

