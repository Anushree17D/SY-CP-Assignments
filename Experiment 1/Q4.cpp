// Time complexity :- O(n)

#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int base, power;
    cout << "Enter the base: " <<endl; 
    cin >> base;
    cout << "Enter the power: " <<endl; 
    cin >> power;

    cout << "Result: " << pow(base,power) << endl; 
 
    return 0;
}
