#include<iostream>
using namespace std;

void simon(int); // function prototype for simon()

int main() {
    simon(3); //call the simon() function
    cout << "pick an integer:";
    int count;
    cin >> count;
    simon(count); // call it again
    cout << "Done!" << end;
    return 0;
}

void simon(int n){  //define the simon() function
    cout << "Simon says touch toes" << n << "times." << endl;
    // void functions don't need return statements.
}
