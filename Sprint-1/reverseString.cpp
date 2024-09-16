#include <iostream>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    
    int len = str.length();
    
    int i = 0;
    int j = len -1;
    
  


    while (i<=j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    cout << str << endl;
   
}