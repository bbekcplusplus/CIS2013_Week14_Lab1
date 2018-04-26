#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	chatr next = 'y';

	while (next != 'n')
	{
		cout << "Add to list(a)" << endl;
		cout << "Done list item(d)" << endl;
		cout << "Print list(p)" << endl;
		cout << "Exit list app(x)" << endl;
		cout << "What do you want to do?" << endl;
		cin >> next;
		switch (next)
		{
		case'a':
			//add stuff to list
			break;
		case'd':
			//finish something in list
			break;
		case'p':
			//print list
			break;
		case 'n':
			//All done with to do list
		}
	}
	return 0;
}