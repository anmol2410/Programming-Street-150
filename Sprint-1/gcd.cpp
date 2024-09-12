#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    int b;
    cin >> b;
    
    int min;
    if(a>b){
        min = b;
    }

    else{
        min = a;
    }
    int gcd;
    for (int i = 1; i <= min; i++)
    {   
        if(a % i == 0 && b%i == 0){
            gcd = i ;
        }
    }

    cout << gcd << endl;
    





    return 0;
}