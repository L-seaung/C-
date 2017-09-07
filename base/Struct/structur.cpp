#include<iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",
        1.88,
        29.99
    };

    inflatable pal =
    {
        "audacious arthur",
        3.12,
        32.99
    }

    cout << "expand your guest list with " << guest.name;
    cout << "and" << pal.name << "|\n";
    // pal.name is the name member of the pal variable
    cout << "you can have both for $";
    cout << guest.price + pal.price << "| \n";
    return 0;
}
