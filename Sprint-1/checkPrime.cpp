#include <iostream>
using namespace std;

bool checkPrime(int number){
    
    for(int i = 2; i<number; i++){
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cin >> number;
    
    if(checkPrime(number)) cout << number <<" is prime number" << endl;
    
    else cout << "Not Prime Number" << endl;

    return 0;
}