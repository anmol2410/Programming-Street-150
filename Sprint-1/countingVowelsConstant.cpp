#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    int vowels  = 0;
    int constonant = 0;

    for (int i = 0; i < n; i++)
    {   
        if(isalpha(s[i])){
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') vowels ++;
            else constonant++;
        }
        
    }

    cout << "Constonant: " << constonant << endl;
    cout << "Vowels: " << vowels << endl;
    

    return 0;
}