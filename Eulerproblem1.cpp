/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
Author Michael Nguyen
Using C++ to solve Euler problem 1:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.


*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int SumOfTotal = 0;
    int i;
    
    
    for ( i = 1; i < 1000; i++) {
    if (((i % 3) == 0) || ((i % 5) == 0)) {
        SumOfTotal += i;
    }
}
      
    cout<<"The Result is: "<<SumOfTotal<<endl;

    return 0;
}



