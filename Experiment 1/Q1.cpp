// Time complexity :- O(n)

#include <iostream>
using namespace std;
#include <sstream>
 
int main(){
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);


    stringstream ss(str);
    string wrd;
    int c = 0;

    while (ss >> wrd){
        c++;
    }

    cout << "The number of words in the string u entered is: " << c << endl;
 
    return 0;
}
