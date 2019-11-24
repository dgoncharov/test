#include "ctest.h"

int main(int argc, char* argv[])
{
    int x = 1, y = 2;
    ASSERT(x == y);
    ASSERT(x == y, "x is not equal to y\n");
    ASSERT(x == y, "%s: x=%d, y=%d\n", argv[0], x, y);
    ASSERT(x == y, "x=%d, y=%d %d %d %d\n",  x, y, 1, 2, 3);
    ASSERT(x == y, "");
    return status;
}
