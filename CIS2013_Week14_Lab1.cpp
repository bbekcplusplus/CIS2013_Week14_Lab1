#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	char next = 'y';
	int len = 0;

	cout << "How long do yoy want your list" << endl;
	cin >> len;

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
			list.add("something");
			break;
		case'd':
			//finish something in list
			list.done();
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