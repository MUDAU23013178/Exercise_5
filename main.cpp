#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1,x2,y1,y2,d,s,x,y;
    cout<<"Calculate the euclidean distance between two points"<<endl;
    cout<<""<<endl;
    cout<<"Enter the value of x1: ";
    cin>>x1;
    cout<<"Enter the value of x2: ";
    cin>>x2;
    cout<<"Enter the value of y1: ";
    cin>>y1;
    cout<<"Enter the value of y2: ";
    cin>>y2;
    x=x1-x2;
    y= y1-y2;
    s=pow(x,2)+ pow(y,2);
    d= sqrt(s);
    cout<<"The distance between point 1 and point 2 is: "<<d;
    return 0;
}
