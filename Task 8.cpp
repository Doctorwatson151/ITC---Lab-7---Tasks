//Name: abdullah kaleem 
//roll no. L1f26bscs0098
#include <iostream>

using namespace std;

int main()
{

    int number, divisor, divisorCount;
    divisor = 2;
    divisorCount = 0;

    cout << "Enter a number to check: ";
    cin >> number;

    if (number <= 1) {
        cout << "Invalid: enter a number greater than 1" << endl;
    }
    else {
        // while loop from 2 up to number - 1 (without using break)
        while (divisor < number) {
            if (number % divisor == 0) {
                divisorCount++;
            }
            divisor++;
        }

        if (divisorCount == 0) {
            cout << number << " is a prime number" << endl;
        }
        else {
            cout << number << " is not a prime number" << endl;
            cout << "Divisors between 2 and " << (number - 1) << ": " << divisorCount << endl;
        }
    }


    int terms, first, second, next, counter;
    first = 0;
    second = 1;
    counter = 0;

    cout << "Enter number of Fibonacci terms: ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Invalid number of terms" << endl;
    }
    else {
        cout << "Fibonacci series: ";
        while (counter < terms) {
            cout << first << " ";
            next = first + second;
            first = second;
            second = next;
            counter++;
        }
        cout << endl;
    }

    return 0;
}
