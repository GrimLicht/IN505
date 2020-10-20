#include <iostream>

class Segment
{
	private : 
		Point a, b;

	public :
		Segment();
		Segment(int nax, int nay, int nbx, int nby);
		Segment(Point na, Point nb);
		~Segment();

		int longueur();
		bool estVertical();
		bool estHorizontal();
		bool estDiagonal();
}