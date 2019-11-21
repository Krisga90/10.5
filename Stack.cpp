


#include <cstring>
#include "Stack.h"


Stack::Stack()
{
	top = 0;
}
bool Stack::isempty() const
{
	return top == 0;
}
bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const customer & cust)
{
	if (top < MAX)
	{
		customers[top].payment = cust.payment;
		strcpy_s(customers[top].fullname, SIZE, cust.fullname);

		customers[top].fullname[SIZE - 1] = '\0';
		top++;
		return true;
	}
	else
		return false;
}
bool Stack::pop(customer & cust)
{
	if (top > 0)
	{
		cust.payment = customers[--top].payment;
		suma += customers[top].payment;
		strcpy_s(cust.fullname, SIZE, customers[top].fullname);
		return true;
	}
	else
		return false;
}

double Stack::Suma()
{
	double a = suma;
	return a;
}

Stack::~Stack()
{
}
