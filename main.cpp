#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h>
#include "Box.h"

int main(int argc, char** argv)
{
    Box b1, b2(3,4,5), b3(7); float res[3];
    res[0] = b1.Objem(); res[1] = b2.Objem(); res[2] = b3.Objem();
    for(int i = 0; i < 3; ++i)
        printf("Об'єм куба b%d = %f\n", i, res[i]);
    return 0;
}
