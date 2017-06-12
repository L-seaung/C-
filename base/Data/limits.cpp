#include<iostream>
#include<climits>   // use limits. for older systems
using namespace std;

// short 16
// int 16
// long 32 and int
// long long 64 and long
// climits define char const
// CHAR_BIT----->char position
// CHAR_MAX----->char max value
// CHAR_MIN----->char min value
// SCHAR_MAX---->signed char max value
// SCHAR_MIN---->signed char min value
// UCHAR_MAX---->unsigned char max value
// SHRT_MAX----->short max value
// SHRT_MIN----->short min value
// USHRT_MAX---->unsigned short max value
// INT_MAX------>int max value
//INT_MIN------>int min value
//UINT_MAX----->unsigned uint max value
//LONG_MAX----->long max value
//LONG_MIN----->long min value
//UNLONG_MAX--->unsigned long max value
//LLONG_MAX---->long long max value
//LLONG_MIN---->long long min value
//ULLONG_MAX--->unsigned long long max value
//

int main() {
    int n_int = INT_MAX;    // initialze n_int to max int value
    short n_short = SHRT_MAX;    // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //  sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << "byters." << endl;
    cout << "short is " << sizeof n_short << "byters." << endl;
    cout << "long is " << sizeof n_long << "byters." << endl;
    cout << "long long is " << sizeof n_llong << "byters." << endl;
    cout << endl;

    cout << "Maximun values:" << endl;
    cout << "int:" << n_int << endl;
    cout << "short:" << n_short << endl;
    cout << "long :" << n_long << endl;
    cout << "long long:" << n_llong << endl << endl;

    cout << "Minimum int value = " << INI_MIN << endl;
    cout << "bytes per byte = " << CHAR_BIT << endl;

    int chest = 42; //decimal integer literal    
    int waist = 0x42;   //hexadecimal integer literal
    int inseam = 042;   //octal interger literal
    cout << "chest = " << chest << "{42 in decimal}\n";
    cout << "waist = " << waist << "{0x42 in hex\n}";
    cout << "inseam = " << inseam << "{042 in octal}\n";
    return 0;
}
