#include <iostream>
using namespace std;

void swapTwoNumbers(int &a,int &b){
    a = a +b;
    b = a-b;
    a = a-b;

    cout << a << " " << b << endl;

}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i =0;i<n;i++) {
        cin >> arr[i];
    }
   

    for (int  i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i+1],arr[i]);
        }
    }

    for (int  i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    



}