#include <iostream>
#include <random>
using namespace std;

int main()
{
    srand(0);
    for (int i = 0; i < 10; ++i) {
        cout << rand() % 100 << " ";
    }
    cout << endl;
}