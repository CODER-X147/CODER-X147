#include<iostream>
#include<windows.h>
using namespace std;
class Temperature
{
    int fahrenheit,celsius ;
    
    public:
    void set(int f)
    {
        fahrenheit = f ;
    }
    void FAHRENHEITtoCELSIUS( int f )
    {
       celsius = (f-32)/1.8;
       cout<<f<<"°F = "<<celsius<<"°C";
    }
    
};
int main()
{
    SetConsoleOutputCP(CP_UTF8); //Set console to UTF-8 (code page 65001)
    Temperature converter;
    int f ;
    cout<<"Enter the Temperature in Fahrenheit :";
    cin>>f;
    converter.FAHRENHEITtoCELSIUS(f);

}