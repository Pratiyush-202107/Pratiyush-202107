/*C++ OOPS Lab 1: Program to generate first n terms of Fibonacci sequence.
Pratiyush Kumar (202107)*/

#include<iostream> //Including the required header files to perform all the necessary operations.
using namespace std;

//Function for printing the fibonacci series upto n terms
void fibonacci_series(int n)
{
    int first_term = 0, second_term = 1; //Declaring and initializing the temporary variables
    if (n < 1) //Condition to return if the input value is less than 1
        return;
    cout << first_term << " ";
    for (int i = 1; i < n; i++) //For loop for printing the fibonacci series till i < n while incrementing i after each loop
    {
        cout << second_term << " ";
        int next_term = first_term + second_term;
        first_term = second_term; //Assigning the value of second term to first and next term to second to carry on the loop
        second_term = next_term;
    }
}

int main() //Main driver code
{
    int n; //Declaring variables
    cout << "Enter the number of terms upto which you want the fibonacci series: ";
    cin >> n; //Taking input values
    cout << "Fibonacci series upto " << n << " terms: ";
    fibonacci_series(n); //Printing the output for fibonacci series upto first n terms
    return 0;
}