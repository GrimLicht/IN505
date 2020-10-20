#include <iostream>

class Point
{
    private :
        int x, y;

    public : 
        Point();
        Point(int nx, int ny);//Point(int nx, int ny) : x(nx), y(ny)  {}
        ~Point();

        int getx();
        int gety();
        void afficher();
        void cloner(const Point& p);
}