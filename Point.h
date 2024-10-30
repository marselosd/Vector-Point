#ifndef POINT_H
#define POINT_H

#include <iostream>

class Vector;

class Point 
{

private:

	double m_x{};
	double m_y{};
	double m_z{};

public:

	Point(double x, double y, double z);

	void print() const;

	void moveByVector(const Vector& vector);

};

#endif