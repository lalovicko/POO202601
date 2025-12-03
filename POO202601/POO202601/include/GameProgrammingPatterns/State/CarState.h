#pragma once
class CarState
{
public:
	CarState()  = default; 
	~CarState() = default;

	virtual void Accelerate() = 0;
	virtual void Break() = 0;


};

