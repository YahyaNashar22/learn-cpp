#include <iostream>

using namespace std;

int main()
{
    cout << "######## ARREA CALCULATOR ########\n";

    int length = 0, breadth = 0;
    int area = 0, perimeter = 0;

    // inputs
    cout << "Enter length: " << endl;
    cin >> length;

	cout << "Enter breadth: " << endl;
	cin >> breadth;

    // calculate
    area = length * breadth;
    cout << "Area: " << area << endl;

    perimeter = 2 * (length + breadth);
	cout << "Perimeter: " << perimeter << endl;
}
