#include<iostream>
using namespace std;

class Rectangle
{
    //constructors
    Rectangle();   //default constructor
    Rectangle(int l,int b);  //parameterized constructor
    Rectangle(Rectangle &r1);  // copy constructor

    //Mutators/setterfunctions
    void setlength();
    void setbreadth();

    //Accessors/getterfunctions
    int getlength();
    int getbreadth();

    //Facilitators
    int area();
    int perimeter();

    //enquiry
    bool isSquare();

    //destructor
    ~Rectangle();
};  

int main()
{
    Rectangle r1;
}