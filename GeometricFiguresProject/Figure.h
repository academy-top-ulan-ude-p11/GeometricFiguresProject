#pragma once
#include <vector>

class Figure
{
protected:
	int x;
	int y;
public:
	Figure(int x = 0, int y = 0) : x{ x }, y{ y } {}

	virtual double Perimeter() = 0;
	virtual double Square() = 0;
};

class Circle : public Figure
{
	const double PI = 3.14156;
	int radius;
public:
	Circle(int x, int y, int radius) : Figure(x, y), radius{ radius } {}
	double Perimeter() override
	{
		return 2 * PI * radius;
	}
	double Square() override
	{
		return radius * radius * PI;
	}
};

class Rectangle : public Figure
{
	int width;
	int height;
public:
	Rectangle(int x, int y, int width, int height)
		: Figure(x, y), width{ width }, height{ height } {}
	double Perimeter() override
	{
		return 2 * (width + height);
	}
	double Square() override
	{
		return width * height;
	}
};

class ComplexFigure : public Figure
{
	std::vector<Figure*> figures;
public:
	ComplexFigure() {}
	void Add(Figure* figure)
	{
		figures.push_back(figure);
	}
	double Perimeter() override
	{
		double result{};
		for (int i = 0; i < figures.size(); i++)
			result += figures[i]->Perimeter();
		return result;
	}

	double Square() override
	{
		double result{};
		for (int i = 0; i < figures.size(); i++)
			result += figures[i]->Square();
		return result;
	}
};
