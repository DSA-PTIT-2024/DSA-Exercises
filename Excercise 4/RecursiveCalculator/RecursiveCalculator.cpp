#include <iostream>

long long int RecursiveCalculator(long long int, long long int);
void TestRecursiveCalculator();

long long int RecursiveCalculator(long long int x, long long int n)
{

    std::cout << "RecursiveCalculator(" << x << ", " << n << ")" << std::endl;

    if (n == 0)
        return 1;
    if (n == 1)
        return x;

    return RecursiveCalculator(x, n - 1) - RecursiveCalculator(x, n - 2);
}

void TestRecursiveCalculator()
{
    std::cout << "===================== TestRecursiveCalculator() =====================" << std::endl;

    long long int x, n;

    std::cout << "Enter x: ";
    std::cin >> x;

    do
    {
        std::cout << "Enter n: ";
        std::cin >> n;
    } while (n < 0);

    std::cout << "RecursiveCalculator(" << x << ", " << n << ") = " << RecursiveCalculator(x, n) << std::endl;
    std::cout << "====================================================================" << std::endl;
}

int main()
{
    TestRecursiveCalculator();
    return 0;
}
