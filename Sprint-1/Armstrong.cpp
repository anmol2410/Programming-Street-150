#include <bits/stdc++.h>
using namespace std;


int main() {

    int num;
    cin >> num;

    int orginal = num;
    int cnt = num;
    int count = 0;
    int sum = 0;

    while (cnt>0)
    {   

        cnt = cnt / 10;
        count ++;
    }
    
    while (num >0)
    {
        int digit = num % 10;
        sum = pow(digit,count) + sum;
        num = num / 10;
    }

    cout << sum << endl;

     if (orginal == sum){
        cout << "Armstrong " << endl;
    }
    else{
        cout << "Not Armstrong" << endl;
    }
    


    return 0;
}

