#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int n;
    cin >> n;
    int c = a + b;
    cout << a << " " << b << " ";
    for (int i = 0; i < n-2; i++)
    {
        a = b;
        b = c;

        if(c>n) break;
        cout <<  c << " ";
        c = a + b;

        

    }
    
    

    return 0;
}