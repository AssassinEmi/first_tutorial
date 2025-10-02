// Tutorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath> // For M_PI
#include <iomanip>

using namespace std;

void Tutorial();


int main()
{   
   

    Tutorial();
    
    
}

 void Tutorial()
{
	//1) 5+5
	cout << 5 + 5 << "\n";

	//2) different outputs
	cout << 355 / 113 << "\n";

	cout << 355.0f / 113.0f << "\n";

	//3)Different operations
	cout << 503 * 92 << "\n";
	int number = 1;
	cout << number << "," << number + 1 << "," << number + 2 << "," << number + 3 << "," << number + 4 << "," << number + 5 << "," << number + 6 << "," << number + 7 << "," << number + 8 << "," << number + 9 << "\n";
	int num, factorial = 1;
	cin >> num;
	for (int i = num; i >= 1; i--)
	{
		factorial = factorial * i;

	}
	cout << factorial << endl;

	for (int i = 0; i <= 10; i++)
	{
		cout << i << " x 6 = " << i * 6 << endl;
	}
	cout << " ((919 * -1)-6)/2.56 is " << ((919 * -1) - 6) / 2.56 << "\n";

	cout << "The mean of 15,25,30 and 20 is " << (15.0f + 25.0f + 30.0f + 20.0f) / 4.0f << "\n";

	cout << "1/2 + 3/4 is 5/4 or 1 1/4 \n";
	

	cout << "73 at the power of 2, 3 or 4?? \n";
	
	int fun = 0;

	cin >> fun;
	
	if (fun == 2)
	{
		int result = 73 * 73;
		cout << "the result of 73 at the power of 2 is " << result << endl;
	}
	else if (fun == 3)
	{
		int result = 73 * 73 * 73;
		cout << "the result of 73 at the power of 3 is " << result << endl;
	}
	else if (fun == 4)
	{
		int result =73 * 73 * 73 * 73;
		cout << "the result of 73 at the power of 4 is " << result << endl;
	}
	else
	{
		cout << "wrong input buddy\n";
	}
	cout << "P = " << 10.0f + (20.0f - 10.0f) * 0.35f<< endl;

	cout << " 43% of 18 is " << 18.0f / 100.0f * 43.0f << endl;

	double degrees = 0;
	cin >> degrees;

	double radians = degrees * M_PI / 180.0;

	cout << "65 degrees = " << radians << "radians\n";







}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
