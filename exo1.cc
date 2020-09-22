#include <cstring> 
#include <iostream>

using namespace std;

void question_b()
{
	const char * tab1[3] = {"truc", "machin", "bidule"};
	char **tab2 = new char*[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		tab2[i] = new char[strlen(tab1[i])+1];
		strcpy(tab2[i], tab1[i]);
		cout << tab2[i] << endl;
	}
	
	for (i = 0; i < 3; i++)
	{
		delete[] tab2[i];
	}
	delete[] tab2;
}

int main()
{
	question_b();
	return 0;
	
}
