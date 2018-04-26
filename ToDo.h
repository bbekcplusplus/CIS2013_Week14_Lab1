#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class ToDo {
private:
	string *list;
	int length = 0;
	int next = 0;
public:
	//Create list of length len
	ToDo(int len);
	
	//add stuff to list
	void add(string item);
	
	//finish something in list
	void done();
	
	//print list
	void print();

};