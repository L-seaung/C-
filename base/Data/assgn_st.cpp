#include<iostream>

using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable bouquest = {
        "sunflowers",
        0.20,
        12.49
    };

    inflatable choice;

    cout << "bouquest" << bouquest.name << "for $";
    cout << bouquest.price << endl;
    choice = bouquest;    // assign one structure to another
    cout << choice.price << endl;
    return 0;
}
