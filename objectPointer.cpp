#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int marks ;

    public:
    void set()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }
    void print(void)
    {
        cout<<"Name: "<<name<<endl<<"Marks: "<<marks;
    }

};
int main()
{
    int n ;
    cout<<"Enter the number of students: ";
    cin>>n;
    student*students[n]; // Dynamically allocate memory

    for(int i = 0 ; i<n ; i++)
    {
        students[i] = new student();
        cout << "\nStudent " << i + 1 << endl;

        students[i]->set();
    }
      cout << "\n--- Student Records ---\n";

    // Access objects using pointers
    for(int i = 0; i < n; i++) {
        students[i]->print();
    }

    // Free memory
    for(int i = 0; i < n; i++) {
        delete students[i];
    }

    return 0;
}
