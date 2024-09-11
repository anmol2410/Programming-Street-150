#include <iostream>
using namespace std;

void leapYear(int year){
    if(year % 4 == 0 && year%100 !=0 || year%400==0) {
        cout << "Leap Year" << endl;
    }
    else{
        cout << " not leap year" << endl;
    }
}

int main(){
    int year;
    cin >> year;

    leapYear(year);
    
   

    return 0;
}