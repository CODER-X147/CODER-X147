#include<iostream>
using namespace std;

class base
{
    public:
        string b1;
        base(string val) {b1 = val ;}
         base() {} 
        virtual void display()
        {
            cout << b1 << endl;
        }
};

class base1 : public base
{
    public:
        string b2;
        // ✅ FIX 1: Constructor to initialize member variable b2
        base1(string val) { b2 = val; }

        void display() override          // 'override' makes intent clear
        {
            cout << b2 << endl;
        }
};

class base2 : public base
{
    public:
        string b3;
        // ✅ FIX 1: Constructor to initialize member variable b3
        base2(string val) { b3 = val; }

        void display() override
        {
            cout << b3 << endl;
        }
};

int main()
{
    // ✅ FIX 1: Pass values directly to object constructors
    base  obj1("hello");
    base1 obj2("beautiful");
    base2 obj3("world");

    base* pointer[3];
    pointer[0] = &obj1;
    pointer[1] = &obj2;
    pointer[2] = &obj3;

    // ✅ FIX 2: Call display() on BOTH pointers to demonstrate polymorphism
    pointer[0]->display();
    pointer[1]->display();   // Output: beautiful
    pointer[2]->display();   // Output: world

    return 0;
}