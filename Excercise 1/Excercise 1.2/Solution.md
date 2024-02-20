# Bài tập 1

---

## Bài tập 1.2

Cho bất phương trình sau: (x-10)^2^ > 25, với điều kiện -1000 $\leq$ x $\leq$ 1000

### 1. Viết chương trình

```c++
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
```

### 2. Phân tích độ phức tạp của chương trình

#### **Xét khối code:**

```c++
for (int i = -1000; i <= 1000; i++)
{
    // Body
}
```

* Thời gian khai báo, khởi tạo, kiểm tra điều kiện lặp, tăng biến **i** lên một đơn vị mất ***O(1)***.

* Xét thân vòng lặp:

  * Xét khối code:

    ```c++
    if (((i - 10) * (i - 10)) > 25) // Kiểm tra điều kiện, thực hiện tuần tự mất O(1)
    {

        cout << i << ' ' << endl; // Thời gian thực hiên là O(1);
    } // Độ phức tạp bằng O(max(1,1)) = O(1)
    ```

    * Vậy, phần thân vòng lặp có độ phức tạp thời gian là ***O(1)***

* Do vòng lặp có 1000-(-1000)+1 = 2001 lần lặp nên độ phức của toàn bộ vòng lặp bằng ***O(2001 * 1) = O(2001)***.

> #### Tổng kết
>
> * Độ phức tạp thời gian của lời giải là ***O(2001)***
