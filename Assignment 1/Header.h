#include <iostream>
#include <conio.h>

using namespace std;

class Fraction
{
private:
	int tu, mau;
public:
	Fraction();
	Fraction(int tu, int mau);
	float value();
};

Fraction::Fraction()
{
	tu = 0;
	mau = 1;
}
Fraction::Fraction(int t, int m)
{
	tu = t;
	mau = m;
}

float Fraction::value()
{
	return float(tu * 1.0 / mau);
}

template <class T>
class Stack
{
private:
	T* data;
	int size;
	int capacity;
public:

	void init(int m);
	void push(T x);
	void pop();
	T top();
	int check_empty();
	int check_full();
	void empty();
	int getsize();

};
template <class T>
void Stack<T>::init(int m)
{
	data = new T[m];
	size = 0;
	capacity = m;
}
template<class T>
void Stack<T>::push(T x)
{
	if (size >= capacity) cout << "\nStack is full";
	else
	{
		data[size] = x;
		size++;
		cout << "\nPush Sucessfully!";
	}
}
template <class T>
void Stack<T>::pop()
{
	if (size <= 0)
	{
		cout << "\nStack is empty !";
	}
	else
	{
		//data[size-1] = NULL;
		size--;
		cout << "\nPop Sucessfully!";
	}
}
template <class T>
T Stack<T>::top()
{
	if (size == 0)
	{
		cout << "\nStack is empty !";
		return NULL;
	}
	else
		return data[0];
}
template <class T>
int Stack<T> ::check_empty()
{
	if (size == 0)
	{
		return 1;
	}
	return 0;
}
template <class T>
int Stack<T>::check_full()
{
	if (size == capacity)	 return 1;
	return 0;
}
template <class T>
void Stack<T>::empty()
{
	data = NULL;
	size = 0;
}
template <class T>
int Stack<T>::getsize()
{
	return size;
}
