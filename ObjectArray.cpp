#include<iostream>
using namespace std;
class student
{
    string name ;
    int semester1, semester2;
    public:
    void sem1(int a1,int a2,int a3)
    {
        semester1 = a1+a2+a3;
    }
    void sem2(int b1 ,int b2 , int b3)
    {
        semester2 = b1+b2+b3;
    }
    void display(int ch)
    {
        int choice = ch;
        switch(choice)
        {
            case 1:
            cout<<"Your Semester-1 score is:"<<semester1<<endl;
            break;
            case 2:
            cout<<"Your Semester-2 Score is:"<<semester2<<endl;
            break;
        }
    }
};
int main()
{
    student d[3];
    int check;
    d[0].sem1(45,55,95),
    d[0].sem2(89,98,99);
    cout<<"Enter your choice (choose from 1 or 2):";
    cin>>check;
    if(check == 1)
    {
        d[0].display(1);
    }
    else
    d[0].display(2);
    
}