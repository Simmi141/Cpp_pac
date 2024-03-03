#include <iostream>  
using namespace std;  
class Note  
{  
// declare a static data member  
static int num;  
  
public:  
// create static member function  
static int func ()  
{  
return num;  
}  
};  
// initialize the static data member using the class name and the scope resolution operator  
int Note :: num = 5;   
  
int main ()  
{  
// access static member function using the class name and the scope resolution  
cout << " The value of the num is: " << Note:: func () << endl;  
return 0;  
}   
