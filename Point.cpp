#include "Point.h"
#include "Vector.h"

Point::Point(double x, double y, double z)
	: m_x{ x }
	, m_y{ y }
	, m_z{ z }
{
}

void Point::print() const
{
	std::cout << "Point(" << m_x << "," << m_y << "," << m_z << ")" << '\n';
}

void Point::moveByVector(const Vector& vector)
{
	m_x += vector.m_x;
	m_y += vector.m_y;
	m_z += vector.m_z;
}