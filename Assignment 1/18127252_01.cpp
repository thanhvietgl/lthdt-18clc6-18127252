#include "Header.h"

void main()
{
	string tl;
	do
	{
		int n;
		cout << "\n1.Stack of integer !";
		cout << "\n2.Stack of float-pointer !";
		cout << "\n3.Stack of Fraction !";
		cout << "\nYour choice: ";
		cin >> n;
		int capacity;
		int sum;
		switch (n)
		{
		case 1:

			Stack<int> a;
			cout << "\nInput capacity of Stack: "; cin >> capacity;
			a.init(capacity);
			cout << "\nInput the number of integer need Push: "; cin >> sum;
			for (int i = 0; i < sum; i++)
			{
				int x;
				cout << "\nInput integer: "; cin >> x;
				a.push(x);
			}
			a.pop();
			cout << "\nThe integer top of Stack: " << a.top();
			if (a.check_empty() == 1)
				cout << "\nStack is empty !";
			else cout << "\nStack is not empty!";
			if (a.check_full() == 1)
				cout << "\nStack is full !";
			else cout << "\nStack is not full!";
			cout << "\nSize of element of Stack: " << a.getsize();
			a.empty();
			break;
		case 2:

			Stack<float> b;
			cout << "\nInput capacity of Stack: "; cin >> capacity;
			b.init(capacity);
			cout << "\nInput the number of float need Push: "; cin >> sum;
			for (int i = 0; i < sum; i++)
			{
				float x;
				cout << "\nInput float: "; cin >> x;
				b.push(x);
			}
			b.pop();
			cout << "\nThe float top of Stack: " << a.top();
			if (b.check_empty() == 1)
				cout << "\nStack is empty !";
			else cout << "\nStack is not empty!";
			if (b.check_full() == 1)
				cout << "\nStack is full !";
			else cout << "\nStack is not full!";
			cout << "\nSize of element of Stack: " << b.getsize();
			b.empty();
			break;
		case 3:

			Stack<Fraction> c;
			cout << "\nInput capacity of Stack: "; cin >> capacity;
			c.init(capacity);
			cout << "\nInput the number of Fraction need Push: "; cin >> sum;
			for (int i = 0; i < sum; i++)
			{

				int tu, mau;
				cout << "\nInput tu: "; cin >> tu;
				cout << "\nInput mau: "; cin >> mau;
				Fraction x(tu, mau);
				c.push(x);
			}
			c.pop();
			cout << "\nThe float top of Stack: " << a.top();
			if (c.check_empty() == 1)
				cout << "\nStack is empty !";
			else cout << "\nStack is not empty!";
			if (c.check_full() == 1)
				cout << "\nStack is full !";
			else cout << "\nStack is not full!";
			cout << "\nSize of element of Stack: " << c.getsize();
			c.empty();
			break;
		}
		cout << "\nDo you want to continue ?(Yes/No): "; cin >> tl;
	} while (tl == "Yes");
	if (tl == "No") cout << "\n finish!";
	_getch();
	
}