//
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);

int getClosestMed(int rdnum1, int rdnum2, int rdnum3);


int getRandom(void)
{
    return rand() % 100;
}

int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
    double mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;

    double d1 = abs(rdnum1 - mean);
    double d2 = abs(rdnum2 - mean);
    double d3 = abs(rdnum3 - mean);

    if (d1 <= d2 && d1 <= d3)
        return rdnum1;
    else if (d2 <= d1 && d2 <= d3)
        return rdnum2;
    else
        return rdnum3;
}