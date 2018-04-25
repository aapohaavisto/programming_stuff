#include <iostream>



class Vector3F{
public:
	float x;
	float y;
	float z;
	Vector3F(float , float , float );

	Vector3F operator+(Vector3F );

	Vector3F operator-(Vector3F );

	Vector3F operator*(float );

	Vector3F operator=(Vector3F );	
};

 Vector3F cross (Vector3F,Vector3F);