#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class DrawShape
{
public:
	virtual void Draw()
	{
	
		cout << "Drawing Shape !" << endl;
		
	}

	
};

class DrawingCircle : public DrawShape 
{
public:
	void Draw()
	{
		cout << "Drawing Circle !" << endl;
	}
	
};

class DrawingRect : public DrawShape 
{
public:
	void Draw()
	{
		cout << "Drawing Rectang!" << endl;
	}
};

class Shape 
{
public:
	Shape()
	{
		DrawShape* drawer = new DrawShape;
	}
	virtual void add_Shape(DrawShape *m_drawer)
	{
		drawer = m_drawer;
	}
	virtual void Draw()
	{
		drawer->Draw();
	}

protected:
	DrawShape *drawer;
};

class CircleShape : public Shape
{

public:
	CircleShape()
	{
		DrawShape* drawer = new DrawingCircle;

	}
	void add_Shape(DrawShape*m_drawer)
	{
		 Shape::add_Shape(m_drawer);
		
	}
	void draw()
	{
		drawer->Draw();
	}

};

class RectShape :public Shape
{

public:
	RectShape()
	{
		Shape::Shape();
	}
	void add_Shape(DrawShape *m_drawer)
	{
		Shape::add_Shape(m_drawer);
	
	}
	void draw()
	{
		drawer->Draw();
	}
};


