#include <iostream.h> 

using namespace std;

void echange(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int obj1 = 1;
	int obj2 = 3;
	
	cout << obj1 << obj2 << "\n";
	
	echange(obj1, obj2);
	
	cout << obj1 << obj2 << "\n";
}
