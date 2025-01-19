#include<iostream>
#include<fstream>
using namespace std;

class Student
{
private:
    /* data */
    int scholar_number;
    string  name;
    char gender;
    int age;

public:
    void getinput()
    {
        cout<<"scholar_number : ";
        cin>>scholar_number;
        cout<<endl<<"Name : ";
        cin>>name;
        cout<<endl<<"gender : ";
        cin>>gender;
        cout<<endl<<"Age : ";
        cin>>age;
        cout<<endl;
    }
    void getoutput()
    {
        cout<<"scholar_number : "<<scholar_number<<endl;
        cout<<endl<<"Name : "<<name<<endl;
        cout<<endl<<"gender : "<<gender<<endl;
        cout<<endl<<"Age : "<<age<<endl;
    }
};


int main()
{
    ofstream File("newfile.txt");
    File<<"My name is yagyesh goyal."<<endl;
    Student s1;
    s1.getinput();
    s1.getoutput();
    File << s1.getoutput()<<endl;
    File.close();

    return 0;
}