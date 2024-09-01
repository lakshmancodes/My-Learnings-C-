
//This is called runtime polymorhism, same thing in java it is called as  "dynamic method dispatch"


#include <iostream>
using namespace std;

class car
{
public:
    virtual void start()=0;
    // {
    //     cout << "car started " << endl;
    // }
};
class innova : public car
{
public:
    void start()
    {
        cout << "Innova started !" << endl;
    }
};
class swift : public car
{
public:
    void start()
    {
        cout << "Swift started !" << endl;
    }
};

int main()
{
    car *p = new innova();
    p->start();
    p = new swift();
    p->start();
}