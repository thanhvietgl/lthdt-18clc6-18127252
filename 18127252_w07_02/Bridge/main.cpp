#include "Header.h"

void  main() 
{
	DrawShape* m_a = new DrawingCircle;
	DrawShape* m_b = new DrawingRect;
	DrawShape* m_c = new DrawShape;

	Shape* a = new CircleShape;
	Shape* b = new RectShape;
	Shape* c = new Shape;
	a->add_Shape(m_a);
	b->add_Shape(m_b);
	c->add_Shape(m_c);
	
	a->Draw();
	b->Draw();
	c->Draw();
	
	system("pause");
}