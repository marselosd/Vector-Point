#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Point;

class Vector
{

private:

	double m_x{};
	double m_y{};
	double m_z{};

public:

	Vector(double x, double y, double z);

	void print() const;

	friend class Point;
};

#endif