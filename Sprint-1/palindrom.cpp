#include <bits/stdc++.h>
using namespace std;

int main() {

// int num;
// cin >> num;

// int rev = 0;
// int orginal = num;
// int rem;
// int i = 0;

//     while (num>0)
//     {
//         rem = num % 10;
//         rev = (rev * 10) + rem;
//         i++;
//         num = num/10;
//     }
//     cout << rev << endl;

//     if (orginal == rev){
//         cout << "Palindrom " << endl;
//     }
//     else{
//         cout << "Not Palindrom" << endl;
//     }
    










// remove duplicate in sorted array
// three sum problem
// move zeroes to end
// 





    // String is plaindrom or not.

    string str;
    getline(cin, str);
    string orginal = str;
    int len = str.length();
    
    int i = 0;
    int j = len -1;
    
    // char d;
    // cin >> d;
    // for(int i = 0;i<len;i++){
    //     if(str[i] == d){
    //         str.erase(i);
    //     }
    // }


    while (i<=j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
     if (orginal == str){
        cout << "Palindrom " << endl;
    }
    else{
        cout << "Not Palindrom" << endl;
    }
   
    
  
    

    return 0;
}