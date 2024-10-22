#include "CCircle.h"

CCircle::CCircle(const sf::Vector2f& centerPoint, float radius)
{
	m_shape.setPosition(centerPoint.x - radius, centerPoint.y - radius);
	m_shape.setFillColor(sf::Color::Magenta);
}

sf::Drawable& CCircle::GetShape()
{
	return m_shape;
}
