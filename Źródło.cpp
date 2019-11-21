#include <iostream>
#include "Stack.h"

int main()
{
	using namespace std;
	Stack st;				// tworzy pusty stos
	char ch;
	customer po;
	cout << "Nacisnij D,aby wprowadzic deklaracje,\n"
		"P, aby przetworzyc deklaracje lub K, aby zakonczyc.\n";
	while (cin >> ch && toupper(ch) != 'K')
	{

		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'D':
		case 'd':
			cout << "Podaj nazwe klienta: ";
			cin.get(po.fullname, SIZE);
			while (cin.get() != '\n')
				continue;
			cout << "Podaj wartosc zakupow: ";
			while (!(cin >> po.payment))
			{
				cin.clear();
				while (cin.get() != '\n')
					continue;
				cout << "\nblad znaku, wpisz wartosc zakupow ponownie: ";
			}
			if (st.isfull())
				cout << "Stos pelen\n";
			else
				st.push(po);
			break;
		case 'p':
		case 'P':
			if (st.isempty())
				cout << "Stos pusty\n";
			else
			{
				st.pop(po);
				cout << "Klient " << po.fullname << "Zaplacil: " << po.payment << "/n";

			}
			break;
		}


		cout << "Nacisnij D,aby wprowadzic deklaracje,\n"
			"P, aby przetworzyc deklaracje lub K, aby zakonczyc.\n";
	}
		cout << "laczna suma transakcji: " << st.Suma() << endl;
	cout << "Fajrant!!\n";

	cin.get();
	cin.get();

	return 0;

}