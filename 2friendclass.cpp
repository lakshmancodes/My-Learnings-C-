#include <iostream>
using namespace std;

class nesttt
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend void fun1(); // use of this line will allow the private and protected memebers to it's inherited classes
};
void fun1()
{
    nesttt obj;
    obj.a = 10; // so it can be used
    obj.b = 20; // it can be used since the use of the friend function
    obj.c = 100;
}
class bcd;
class abc
{
private:
    int as;

protected:
    int sa;

public:
    int sas;
    friend class bcd;
};

class bcd
{
public:
    abc das;
    void fun()
    {
        das.as = 10;
        das.sa = 100;
        das.sas = 1000;
    }
};
int main()
{
}