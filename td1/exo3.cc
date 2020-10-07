#include <cstring> 
#include <iostream>

using namespace std;

void tableauEcriture(int *tab, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		tab[i] = i;
	}
}

void tableauLecture(const int *tab, int taille)
{
	int i;
	for (i = 0; i < taille; i++)
	{
		cout << tab[i] << "\n";
	}
}

int main()
{
	int *tab = new int[15];
	tableauEcriture(tab, 15);
	tableauLecture(tab, 15);

	delete[] tab;
	return 0;
}
