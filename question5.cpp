#include<iostream>
using namespace std;
    // Area of a  Rectangle
    int rectangle_area(int length, int width)
    {
       int area_rectangle=length*width; 
       return area_rectangle;
    }
    // Area of a  Triangle
    int triangle_area(int base, int height)
    {
       int area_triangle=0.5*base*height; 
       return area_triangle;
    }
    // Area of a  Circle
    int circle_area(int radius)
    {
        int area_circle=3.142*radius*radius;
        return area_circle;
    }
int main() 
{
    char selection;
        cout<<"\n Menu";
        cout<<"\n===================";
        cout<<"\n R - Rectangle Area";
        cout<<"\n T - Triangle Area";
        cout<<"\n C - Circle Area";
        cout<<"\n X - Exit";
        cout<<"\n Enter selection: ";
    cin>>selection;
    switch (selection)
    {
    case 'R':
        double length, width, area_Rectangle;
        cout<< "Please input the length of the rectangle"<<endl;
        cin>>length;
        cout<< "Please input the width of the rectangle"<<endl;
        cin>>width;
        area_Rectangle=rectangle_area(length,width);
        cout<<"The area of the rectangle is: "<<area_Rectangle<<endl;
        break;
    case 'T':
        double base, height, area_Triangle;
        cout<< "Please input the base of the triangle"<<endl;
        cin>>base;
        cout<< "Please input the height of the triangle"<<endl;
        cin>>height;
        area_Triangle=triangle_area(base,height);
        cout<<"The area of the triangle: "<<area_Triangle<<endl;
        break;
    case 'C':
        double radius, area_Circle;
        cout<< "Please input the radius of the circle"<<endl;
        cin>>radius;
        area_Circle=circle_area(radius);
        cout<<"The area of the circle is: "<<area_Circle<<endl;
        break;
    case 'X':
        cout<<"Bye"<<endl;
        break;
    default:
        cout<<"Please choose a valid input"<<endl;
        break;
    }

}
    
    