#include<iostream>
using namespace std;
class person
{
    private:
    int age;
    string name;

    public:
    void set(int age , string name)
  /*  {
       age = age; 
       name = name;
    }*/
/*C++ Prefrence rule: local variable > global variable
  according to this rule the local variable age & name is give first preference
  and assigned to itself, hence output some garbage value*/    

    {
        this->age = age;
        this->name = name ;
    }
    /*The following issue is solved using a special pointer called This pointer ->
    This-> is a local object pointer that stores the address of the calling object*/
    
    void print()
    {
        cout<<"age:"<<age<<endl;
        cout<<"name:"<<name<<endl;
    }
};
int main()
{
    person a;
    a.set(50,"Harry");
    a.print();
    return 0;
}