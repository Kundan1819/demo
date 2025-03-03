#include<iostream>
using namespace std;

class firstPrgm
{
	public: 
	int a;
	void display()
	{
		cout << "The vale of a is " << a << endl;
	}
};

int main() {

	firstPrgm obj; 
	
	obj.a=10;
	obj.display();
	
	return 0;
}
