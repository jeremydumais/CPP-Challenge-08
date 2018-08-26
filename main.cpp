#include <iostream>
#include <conio.h>
#include "include/narcissistic.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Armstrong numbers with three digits" << endl;
    unsigned narcissisticNumberCount {0};
    for(unsigned i=1;i<=999;i++)
    {
        if (narcissisticHelper::isNarcissisticNumber(i))
        {
            if (narcissisticNumberCount > 0)
                cout << ", ";
            cout << i;
            narcissisticNumberCount++;
        }
    }
    cout << endl;

    cout << "Press any key to continue... " << endl;
    getch();
    return 0;
}