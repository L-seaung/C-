#include<iostream>
#include<cstring>    // for the strlen() function

using namespace std;

int main(){
    const int Size = 15;
    char name1[Size];    // empty array
    char name2[Size] = "C++ ow boy";    // initialized array
    // Note some implementations may require the static keyword
    // to initailize the arrary name2

    cout << "Howdy I'm " << name2;
    cout << "! what's your name?\n";
    cout << strlen(name1) << "letters and is stored\n";
    cout << "Your initial is " << name1[0] << "\n";
    name2[3] = '\0';    // set to null character
    cout << "Here are the first 3 characters of my name";
    cout << name2 << endl;
    return 0;
}
