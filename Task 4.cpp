////Name: abdullah kaleem 
////roll no. L1f26bscs0098
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int number, factorial, counter;
//	counter = 1;
//	factorial = 1;
//
//	cout << "Enter n(0-12): ";
//	cin >> number;
//
//	if (number >= 0)
//	{
//		if(number <= 12)
//		{
//			while (counter <= number)
//			{
//				factorial = factorial * counter;
//
//				counter++;
//			}
//			cout << "Factorial of " << number << " = " << factorial << endl;
//
//		}
//		else {
//
//			cout << "Too large: enter 12 or less" << endl;
//
//		}
//	}
//	else {
//
//		cout << "Invalid: n cannot be negative" << endl;
//
//
//	}
//
//	int exponent, base,power, counter_2;
//	counter_2 = 1;
//
//	cout << "Enter Base: ";
//	cin >> base;
//
//	cout << "Enter Exponent: ";
//	cin >> exponent;
//
//	if (exponent > 0)
//	{
//
//		while (counter_2 <= exponent)
//		{
//
//			power = base * counter_2;
//			counter_2++;
//		}
//		cout << base << " raised to " << exponent << " = " << power << endl;
//	}
//	else {
//
//		cout << "Invalid exponent: " << endl;
//	}
//	return 0;
//}