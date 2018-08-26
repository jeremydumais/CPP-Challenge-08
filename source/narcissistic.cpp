#include "..\include\narcissistic.h"
#include <algorithm>

using namespace std;

bool narcissisticHelper::isNarcissisticNumber(unsigned p_number)
{
    if (p_number == 0)
        return false;
    else if (p_number <= 9)
        return true;
    unsigned char units = p_number % 10;
    unsigned char tens {0};
    unsigned char hundreds {0};

    if (p_number > 9)
        tens = (p_number/10) % 10;
    if (p_number > 99)
        hundreds = (p_number/100) % 10;

    return (pow(units,3) + pow(tens,3) + pow(hundreds,3) == p_number);
}
