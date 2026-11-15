////Name: abdullah kaleem 
////roll no. L1f26bscs0098
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int  number, temp, digit, digitCount, digitSum, evenCount, oddCount;
//	oddCount = evenCount = digitCount = digitSum = 0;
//
//	cout << "Enter a positive number: ";
//	cin >> number;
//
//
//
//	if (number > 0)
//	{
//		temp = number;
//
//		while (temp > 0)
//		{
//			digit = temp % 10;
//
//			digitCount++;
//			digitSum = digit + digitSum;
//
//			if (digit % 2 == 0)
//			{
//
//				evenCount++;
//
//			}
//			else {
//
//				oddCount++;
//
//			}
//
//			temp = temp / 10;
//
//
//
//
//		}
//
//		cout << "Number: " << number << endl;
//		cout << "Number of Digits: " << digitCount << endl;
//		cout << "Sum of Digits: " << digitSum << endl;
//		cout << "Even Digits: " << evenCount << endl;
//		cout << "Odd Digits: " << oddCount << endl;
//
//
//
//	}
//	else {
//
//		cout << "Invalid Number" << endl;
//
//	}
//	return 0;
//}