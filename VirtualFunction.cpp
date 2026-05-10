#include<iostream>
using namespace std ;
class baseclass
{   public:
    int b;
    virtual void display()
    {
        cout<<b<<" Hey there welcome to base class"<<endl;
    }

};
class derivedclass : public baseclass // Inheriting from baseclass
{
    public:
    int d;
    void display()
    {
        cout<<d<<" Hey there welcome to derived class"<<endl;
    }    
};
int main()
{
    baseclass*base_class_pointer;
    baseclass base_obj;
    derivedclass*derived_class_pointer;
    derivedclass derived_obj;

    base_class_pointer = &derived_obj;
    base_class_pointer->display();

    return 0;
}