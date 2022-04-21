#pragma once
#ifndef VECTORS_H
#define VECTORS_H

#include <iostream>
#include <string>

using namespace std;
class Vectors {

	double x;
	double y;
	double z;

public:
	void gets();

	void module();

	void sum(Vectors n1);

	void scalar(Vectors n2);

	void vector(Vectors n3);
};



#endif