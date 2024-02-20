#include <iostream>

using namespace std;

// Khai báo mảng c để lưu kết quả sau khi merge
int* c;

void Merge(int* a, int al, int am, int ar);
void MergeSort(int* a, int al, int ar);

// Merge function. Đây là hàm merge 2 mảng con đã được sắp xếp thành một mảng lớn đã được sắp xếp.
// a: mảng cần sắp xếp
// al: chỉ số bắt đầu của mảng cần sắp xếp
// am: chỉ số giữa của mảng cần sắp xếp
// ar: chỉ số cuối của mảng cần sắp xếp
// Hàm cần phân tích độ phức tạp thời gian
void Merge(int* a, int al, int am, int ar)
{
    int i = al, j = am + 1, k; // Thực hiện tuần tự, thời gian thực hiện là O(max(1, 1, 1)) = O(1)

    for (k = al; k <= ar; ++k) // Vòng lặp: Mất O(ar - al + 1) thời gian
    {
        if (i > am) // Mất O(1) thời gian
        {
            c[k] = a[j++]; // Mất O(1) thời gian
            continue;
        } // => Tổng cộng mất O(max(1,1)) = O(1) thời gian

        if (j > ar) // Mất O(1) thời gian
        {
            c[k] = a[i++]; // Mất O(1) thời gian
            continue;
        } // => Tổng cộng mất O(max(1,1)) = O(1) thời gian

        if (a[i] < a[j]) // Mất O(1) thời gian
        {
            c[k] = a[i++]; // Mất O(1) thời gian
        }                  // => Tổng cộng mất O(max(1,1)) = O(1) thời gian
        else
        {
            c[k] = a[j++]; // Mất O(1) thời gian
        }                  // => Tổng cộng mất O(max(1,1)) = O(1) thời gian

        // Thân vòng lặp thực hiện tuần tự, thời gian thực hiện là O(max(1, 1, 1)) = O(1)
    }
    // => Tổng cộng mất O(ar - al + 1) * O(1) = O(ar - al + 1) thời gian

    for (k = al; k <= ar; ++k) // Vòng lặp: Mất O(ar - al + 1) thời gian
    {
        a[k] = c[k]; // Mất O(1) thời gian
    }                // => Tổng cộng mất O(ar - al + 1) * O(1) = O(ar - al + 1) thời gian

    // Cả hàm Merge mất O(max(O(ar - al + 1), O(ar - al + 1))) = O(ar - al + 1) thời gian
}

// MergeSort function. Đây là hàm sắp xếp mảng a từ chỉ số al đến chỉ số ar.
// a: mảng cần sắp xếp
// al: chỉ số bắt đầu của mảng cần sắp xếp
// ar: chỉ số cuối của mảng cần sắp xếp

void MergeSort(int* a, int al, int ar)
{
    if (al < ar)
    {
        int am = (al + ar) / 2;
        MergeSort(a, al, am);
        MergeSort(a, am + 1, ar);
        Merge(a, al, am, ar);
    }
}
int main()
{

    int a[] = {5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    c = new int[n];
    MergeSort(a, 0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] c;
    return 0;
}