
#include <iostream>
#include <cmath>
#include <cstdio>

#include "macros.h"

using namespace std;

int main()
{
    double x, y, w;

    cout << "Enter x = ";
    cin >> x;

    cout << "Enter y = ";
    cin >> y;

    // Вибір гілки за значенням Z
#if CONDITION(Z)

    cout << "\nFirst branch: 1 <= z < 10" << endl;

    w = SQR(MIN(x + y, x + Z));

#else

    cout << "\nSecond branch: z < 1 or z >= 10" << endl;

    w = MAX(SQR(x), 5 * ABS(y - Z));

#endif

    PRINT_RESULT(w);

    return 0;
}
