// C++ program to demonstrate output iterator
#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	// Def vector
	vector<int>v1 = { 1, 4, 9, 16 };

	// Declaring an iterator
	vector<int>::iterator i1;

	for (i1=v1.begin();i1!=v1.end();++i1) {
		// Assigning elements using iterator
		*i1 = 1;
	}
	
	// v1 becomes 1 1 1 1 1
	return 0;

}
