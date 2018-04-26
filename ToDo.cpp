#include<iostream>
#include <cstdlib>
#include <ctime>
#include "ToDo.h"

using namespace std;
ToDo::ToDo(int len) {
	
		length = len;
		list = new string[length];
}

//add stuff to list
void add(string item) {
	if (next < lenght) {
		list[next] = item;
		next++
	}

}

//finish something in list
void done() {
	next++;
	list[next] = **;
}

//print list
void print() {
	for (int i = 0; i < next; i++) {
		cout << "*" << list[i] << endl;
	}
}