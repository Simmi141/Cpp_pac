#include<iostream>
using namespace std;
class BoxClass {
public:
	static int count;
	BoxClass(double l = 2.0, double b = 2.0, double h = 2.0) {
		cout << "Class constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		count++;
	}
	double getVolume() {
		return length * breadth * height;
	}
	static int getCount() {
		return count;
	}
private:
	double length;     
	double breadth;    
	double height;     
};
int BoxClass::count = 0;
int main(void) {
	cout << "Inital value of count is : " << BoxClass::getCount() << endl;
	BoxClass Box1(3.2, 1.4, 1.8);    
	BoxClass Box2(7.5, 4.0, 4.0);   
	cout << "Final value of count is : " << BoxClass::getCount() << endl;
	return 0;
}
