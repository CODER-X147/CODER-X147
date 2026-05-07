#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    int rollno;
    char grade;
    public:
    void input(string a ,int b ,char c)
    {
        name = a;
        rollno =b;
        grade = c;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Grade:"<<grade<<endl;
    }
};
int main()
{
    student ram;
    ram.input("Ram Singh", 1 , 'A');
    ram.display();
    return 0;
}
