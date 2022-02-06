#include <iostream>
using namespace std;

int main(){
    string kata;
    int n, i;
    bool palindrome = true;

    cout << "Aplikasi pengecek kata - kalimat Palindrome atau Bukan Versi 1.0" << endl;

    cout << "Input kata: ";
    getline(cin, kata);
    n = kata.length();

    for(i = 0;i < n; i++){
        if(kata[i] != kata[n-i-1])
        {
            palindrome = false;
            break;
        }
    }

    cout << "Hasilnya: ";
    if(palindrome == true)
        cout << "Merupakan Palindrome, Dikarenakan kata tersebut walau dibolak balik tetap memiliki arti yang sama";
    else
        cout << "Bukan Palindrome, Dikarenakan kata tersebut ketika dibolakk balik tidak memiliki arti yang sama";

    cin.ignore();
    return 0;
}
