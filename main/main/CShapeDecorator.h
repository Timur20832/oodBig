#pragma once
#include "CShape.h";

class CShapeDecorator : public CShape
{
public:
	CShapeDecorator(CShape* shape);
	
	sf::Drawable& GetShape() override;

private:
	CShape* m_shape;
};