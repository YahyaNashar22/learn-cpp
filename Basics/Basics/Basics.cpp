#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "You are " << age << " years old." << endl;

	int x = 3;
	int y = x++;
	int z = ++x;
	cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
}
