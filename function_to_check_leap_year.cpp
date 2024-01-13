#include <iostream>

using namespace std;
 

bool checkYear(int year) {



    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

        return true; 

    } else {

        return false; 

    }
}
 

int main() {

    int year = 2000; 
 

    if (checkYear(year)) {

        cout << "Leap Year" << endl;

    } else {

        cout << "Not a Leap Year" << endl;

    }
 

    return 0;
}
