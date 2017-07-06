#include<iostream>

using namespace std;

struct inflatable    // structure declaration
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guest = {
        "Glorious gloria",
        1.88,
        29.33
    };

    inflatable pal = {
        "audacious arthur",
        3.12,
        32.99
    };

    cout << "expand your guest list with" << guest.name;
    cout << "and" << pal.name << "!\n";
    cout << "you can have both for $";
    cout << guest.price + pal.price << "!\n";

    return 0;
}
