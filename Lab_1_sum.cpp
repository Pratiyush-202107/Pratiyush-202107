/*C++ OOPS Lab 1: Program to find the sum of individual digits of a positive integer.
Pratiyush Kumar (202107)*/

#include<iostream> //Including the required header files to perform all the necessary operations.
using namespace std;

//Function to find the sum of digits of any positive integer.
void sum_of_digits(int num)
{
    int sum = 0; //Declaring and initializing the temporary variable
    while (num != 0) //Condition until which the mentioned operations to be carried on.
    {
        sum = sum + num%10; //Adding the remainder left after dividing the variable num by 10 and then assigning the obtained value to sum.
        num = num/10; //Dividing the variable num by 10 and assigning the new value to the same. Since the num variable is int, it won't include the decimal part.
    }
    cout << sum;
}

//Main driver code
int main()
{
    int num; //Declaring variables
    cout << "Enter any positive integer: ";
    cin >> num; //Taking input values.
    cout << "Sum of the individual digits of a positive number: ";
    sum_of_digits(num);
    return 0;
}