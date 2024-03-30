# **Bài tập 4**

---

## Tính hàm P~n~(x) đệ quy

```c++
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
    

    for (long long int i = 2; i <= n; i++)
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
```

## Phân tích độ phức tạp

```c++
long long int IterativeCalculator(  long long int x,   long long int n)
{
    if (n == 0)
        return 1; // Độ phức tạp: O(1)
    
    if (n == 1)
        return x; // Độ phức tạp: O(1)

     long long int a = 1; // Độ phức tạp: O(1)
     long long int b = x; // Độ phức tạp: O(1)
     long long int c; // Độ phức tạp: O(1)
    

    for (long long int i = 2; i <= n; i++) // Khởi tạo: O(1)
    {
        c = b - a; // Độ phức tạp: O(1)
        a = b; // Độ phức tạp: O(1)
        b = c; // Độ phức tạp: O(1)

        std::cout << "IterativeCalculator(" << x << ", " << c << ")" << std::endl; // Độ phức tạp: O(1)
    } // Vòng lặp có n - 1 lần lặp, mỗi lần lặp có độ phức tạp O(1), nên độ phức tạp của vòng lặp là O(n)

    return c; // Độ phức tạp: O(1)
} // Độ phức tạp: O(1) + O(1) + O(1) + O(1) + O(1) + O(1) + O(1) + O(n) + O(1) = O(max(1, 1, 1, 1, 1, 1, 1, n, 1)) = O(n)
```

> ***Kết luận:*** Độ phức tạp của hàm `IterativeCalculator(long long int x, long long int n)` là O(n).
