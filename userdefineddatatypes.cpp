#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;
    float cgpa;
    Student(string n,int r,int c)
    {
        name=n;
        roll_no=r;
        cgpa=c;
    }
};
class Cars
{
    public:
    string name;
    int price;
    int seats;
    //string type;
};
void show(Cars c)
{
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
}
void change(Cars &c)
{
    c.name="audi";
}
int main()
{
    Student s1("Nikhil Rawat",47,8.5);
    cout<<s1.name<<" "<<s1.roll_no<<" "<<s1.cgpa;
    Cars c1;
    c1.name="mercedes";
    c1.price=200000;
    c1.seats=5;
    
    // Cars c2;
    // c1.name="toyota fortuner";
    // c1.price=500000;
    // c1.seats=8;
    // show(c1);
    // change(c1);
    // show(c1);
    //show(c2);
}