
//ofstream for writing 

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofs("my.txt",ios::trunc);
    ofs<<"hi"<<endl;
    ofs<<"helloe"<<endl;
    ofs<<"now I am the Hero "<<endl;
    ofs.close();
}*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream writefile("new.txt",ios::trunc);
    writefile<<"hi this is Lakshman "<<endl;
    writefile<<"my registration number is "<<"20MIS0"<<204<<endl;
    writefile<<"I have come to the college for a purpose"<<endl;
    writefile.close();
}
//ifstream for reading 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("Mine.txt");
    if(!infile)
    {
        cout<<"the input file does not exist "<<endl;
        return 1;
    }
    string str;
    int x;
    infile>>str;
    getline(infile, str);
    infile>>x;
    infile.close();
    cout<<str<<" "<<x;
    if(infile.eof())
    {
        cout<<"the end of file reached "<<endl;
    }
    return 0;
}

//serialization for writing a file
#include<iostream>
#include<fstream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs,student &s);
};
ofstream & operator<<(ofstream &ofs,student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
int main()
{
    student s1,s2;
    s1.name="lakshman";
    s1.roll=204;
    s1.branch="software Engineering";
    s2.name="lakshman";
    s2.roll=204;
    s2.branch="software Engineering";
    ofstream ofs("student.txt",ios::trunc);
    // ofs<<s1.name<<endl;
    // ofs<<s1.roll<<endl;
    // ofs<<s1.branch<<endl;
    ofs<<s1;
    ofs<<s2;
    ofs.close();
}

#include<iostream>
#include<fstream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    string branch;
    friend ifstream & operator >>(ifstream & inputfile,student &s);
};
ifstream & operator >>(ifstream &inputfile,student &s)
{
    inputfile>>s.name>>s.roll>>s.branch;
    return inputfile;
}
int main()
{
    student s1,s2;
    ifstream inputfile("students.txt");
    inputfile>>s1;
    cout<<"name"<<s1.name<<endl;
    cout<<"regnum "<<s1.roll<<endl;
    cout<<"branch"<<s1.branch<<endl;
    inputfile>>s2;
    cout<<"name"<<s2.name<<endl;
    cout<<"regnum "<<s2.roll<<endl;
    cout<<"branch"<<s2.branch<<endl;
    
    inputfile.close(); 
}
#include<iostream>
#include<fstream>
using namespace std;
class Student
{
public:
    string name;
    int day;
    string month;
    friend ofstream & operator <<(ofstream &ofs,Student &s);
};
ofstream & operator <<(ofstream &ofs,Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.day<<endl;
    ofs<<s.month<<endl;
    return ofs;
}
int main()
{
    Student s1;
    ofstream ofs("new_file.txt",ios::trunc);
    s1.name="SUN";
    s1.day=1;
    s1.month="April";
    ofs<<s1;
    ofs.close();
    
}*/
//Serialization is a process of string and retrieving state of an object•Class must have a default constructor 
#include<iostream>
#include<fstream>
using namespace std;
class Student
{
public:
    string name;
    int day;
    string month;
    friend ifstream & operator>>(ifstream &ifs,Student &s);

};
ifstream & operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.name>>s.day>>s.month;
    return ifs;
}
int main()
{
    Student s1;
    ifstream ifs("new_file.txt");
    ifs>>s1;
    cout<<"NAME:"<<s1.name<<endl;
    cout<<"day :"<<s1.day<<endl;
    cout<<"month:"<<s1.month<<endl;
    ifs.close();
}