#include<iostream>
using namespace std;

int main() {
    char ch = 'M';
    int i = ch;
    cout << "the ascii code for " << ch << "is" << i << endl;

    cout << "add one to the character code: " << endl;

    ch = ch + 1;
    i = ch;
    cout << "the ascii code for " << ch << "is " <<  i << endl;

    // using the cout.put() menver function to display a char
    cout << "displaying char ch using cout.put(ch):";
    cout.put(ch);

    // using cout.put() to display a char constant
    cout.put('l');

    cout << endl << "Done" << endl;
    return 0;
}
