#include <iostream>

using namespace std;

int main()
{
    cout << "Variable Swapper!" << endl;

    int a = 20, b = 10;

    int temp;

	cout << "Before swapping: a = " << a << ", b = " << b << endl;

	// Swap using a temporary variable
	temp = a;
	a = b;
	b = temp;

	cout << "After swapping: a = " << a << ", b = " << b << endl;

	// Swap without using a temporary variable
	a = 20; b = 10; // Reset values
	cout << "Before swapping: a = " << a << ", b = " << b << endl;
	a = a + b; // Step 1: a now contains the sum of both numbers
	b = a - b; // Step 2: b now contains the original value of a
	a = a - b; // Step 3: a now contains the original value of b
	cout << "After swapping without temp variable: a = " << a << ", b = " << b << endl;
	return 0;
}



