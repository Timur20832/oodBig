#include "CRectangle.h"

//CRectangle::CRectangle(const sf::Vector2f& leftTopPoint, const sf::Vector2f& rightBottomPoint)
//{
//	m_leftTop = leftTopPoint;
//	m_rightBottom = rightBottomPoint;
//}


CRectangle::CRectangle(const sf::Vector2f& leftTopPoint, const sf::Vector2f& rightBottomPoint)
{
	m_leftTop = leftTopPoint;
	m_rightBottom = rightBottomPoint;
}

double CRectangle::GetArea()
{
	return abs(m_rightBottom.x - m_leftTop.x) * abs(m_rightBottom.y - m_leftTop.y);
}

double CRectangle::GetPerimeter()
{
	return (abs(m_rightBottom.x - abs(m_rightBottom.y - m_leftTop.y)) * 2);
}

int CRectangle::Draw()
{
	return 0;
}
