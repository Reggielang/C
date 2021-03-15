#pragma once
#ifndef CUBOID_H_
#define CUBOID_H_


class Cuboid
{
private:
	double length_;
	double width_;
	double hight_;
public:
	Cuboid(double length, double width, double hight);
	Cuboid();
	~Cuboid();
	double volume() { return length_*width_*hight_; }
	int compare(Cuboid &c);



};




#endif // !CUBOID_H_






