
#include <iostream>
using namespace std;


void main()
{
	int a;

	cout << "Enter a number: \n";
	cin >> a;

	cout << " Enter another number: \n";
	int b;
	cin >> b;
	string Sum[5]{ "sum", "Sum", "+", "Addition","addition" };
	string Sub[5]{ "sub","Sub", "-","Subtraction", "subtraction" };
	string Mul[5]{ "Mul","multiply","Multiply","*","mul" };
	string Div[5]{ "division","Division","/","Div","div" };
	string Op;
	bool has_result = false;
	while (has_result == false)
	{
		cout << " Select operation: \n";
		cin >> Op;

		for (int i = 0; i < 5; i++)
		{


			if (Op == Sum[i])
			{
				cout << " the result of " << a << " + " << b << " is " << a + b << "\n";
				has_result = true;
				break;

			}
			else
			{
				if (Op == Sub[i])
				{
					cout << " the result of " << a << " - " << b << " is " << a - b << "\n";
					has_result = true;
					break;
				}
				else
				{
					if (Op == Mul[i])
					{
						cout << " the result of " << a << " * " << b << " is " << a * b << "\n";
						has_result = true;
						break;
					}
					else if (Op == Div[i])
					{
						cout << " the result of " << a << " / " << b << " is " << a / b << "\n";
						has_result = true;
						break;
					}

				}
			}

		}
		if (has_result == false)
			cout << " error input try again \n";



	};

	
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
