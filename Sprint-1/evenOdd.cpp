#include <iostream>
using namespace std;

string checkEvenOdd(int number){
    if(number % 2 == 0) return "Even";
    
    return "Odd";
}

int main(){
    int number;
    cin >> number;
    cout << number << " is "<<checkEvenOdd(number) <<" number.";

    return 0;
}