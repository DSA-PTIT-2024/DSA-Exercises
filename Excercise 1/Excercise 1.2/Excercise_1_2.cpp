#include <iostream>

using namespace std;

int main()
{
    for (int i = -1000; i <= 1000; i++)
    {
        if (((i - 10) * (i - 10)) > 25)
        {
            cout << i << ' ' << endl;
        }
    }
    return 0;
}
