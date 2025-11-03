#pragma once
class Producto;

class Builder
{
public:
	Builder()=default;
	~Builder()=default;

	virtual void BuildPartA() = 0;
	virtual void BuildPartB() = 0;
	virtual Producto* GetProducto() = 0;
private:

};

