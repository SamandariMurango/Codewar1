#include <iostream>
using namespace std;

int main(void)
{

  //Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

//solution:
//  1. Assume the number is not signed 

unsigned int a;

cout << "Enter a number:  " ;
cin >> a;

if (a % 2 == 0)
{
  cout << "it is an even number";

}
else 
{
  cout << " it is an odd number";

}




}