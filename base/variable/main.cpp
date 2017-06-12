#include<iostream>
using namespace std

int main(){
    int carrots;
    cout << "how many carrots do you have?" << end;
    cin >> carrots;
    cout << "here are tow more.";
    carrots = carrots + 2;
    // the next line concatenates output
    cout << "now you have" << carrots << "carrots." << endl;
    return 0;
}
