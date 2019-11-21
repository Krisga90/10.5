#pragma once
#ifndef STACK_H_
#define STACK_H_

const int SIZE = 35;

struct customer
{
	char fullname[SIZE];
	double payment;
};


class Stack
{
	enum { START=0, MAX = 10 };
	customer customers[MAX];
	int top;
	double suma = START;
public:
	Stack();
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const customer & item);
	bool pop(customer & item);
	double Suma();
};

#endif // !1