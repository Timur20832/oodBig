#include "CTriangle.h"

CTriangle::CTriangle(const sf::Vector2f& vertex1, const sf::Vector2f& vertex2, const sf::Vector2f& vertex3)
{
    m_vertex1 = vertex1;
    m_vertex2 = vertex2;
    m_vertex3 = vertex3;
}

double CTriangle::GetArea()
{

	double halfPerimeter = GetPerimeter() / 2;
	double distanceVertex12 = sqrt(pow((m_vertex2.x - m_vertex1.x), 2) + pow((m_vertex2.y - m_vertex1.y), 2));
	double distanceVertex13 = sqrt(pow((m_vertex3.x - m_vertex1.x), 2) + pow((m_vertex3.y - m_vertex1.y), 2));
	double distanceVertex23 = sqrt(pow((m_vertex3.x - m_vertex2.x), 2) + pow((m_vertex3.y - m_vertex2.y), 2));

	return sqrt(halfPerimeter * (halfPerimeter - distanceVertex12) * (halfPerimeter - distanceVertex12) * (halfPerimeter - distanceVertex12));

    return 0.0;
}

double CTriangle::GetPerimeter()
{
	double distanceVertex12 = sqrt(pow((m_vertex2.x - m_vertex1.x), 2) + pow((m_vertex2.y - m_vertex1.y), 2));
	double distanceVertex13 = sqrt(pow((m_vertex3.x - m_vertex1.x), 2) + pow((m_vertex3.y - m_vertex1.y), 2));
	double distanceVertex23 = sqrt(pow((m_vertex3.x - m_vertex2.x), 2) + pow((m_vertex3.y - m_vertex2.y), 2));

    return distanceVertex12 + distanceVertex13 + distanceVertex23;
}

int CTriangle::Draw()
{
	return 0;
}
