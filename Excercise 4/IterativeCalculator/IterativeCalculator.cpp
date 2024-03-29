#include <iostream>

long long int IterativeCalculator(  long long int,   long long int);
void TestIterativeCalculator();

long long int IterativeCalculator(  long long int x,   long long int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
     long long int a = 1; 
     long long int b = x;
     long long int c;
    

    for (unsigned long long int i = 2; i <= n; i++)
    {
        c = b - a;
        a = b;
        b = c;

        std::cout << "IterativeCalculator(" << x << ", " << c << ")" << std::endl;
    }

    return c;
}

void TestIterativeCalculator()
{
    std::cout << "===================== TestIterativeCalculator() =====================" << std::endl;

    long long int x, n;

    std::cout << "Enter x: ";
    std::cin >> x;

    do
    {
        std::cout << "Enter n: ";
        std::cin >> n;
    } while (n < 0);

    std::cout << "IterativeCalculator(" << x << ", " << n << ") = " << IterativeCalculator(x, n) << std::endl;
    std::cout << "====================================================================" << std::endl;
}

int main()
{
    TestIterativeCalculator();
    return 0;
}
