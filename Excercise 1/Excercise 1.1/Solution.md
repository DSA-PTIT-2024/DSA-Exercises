# Bài tập 1

---

## Bài tập 1.1

```c++
void Merge(int* a, int al, int am, int ar)
{
    int i = al, j = am + 1, k; 

    for (k = al; k <= ar; ++k) 
    {
        if (i > am)
        { 
            c[k] = a[j++]; 
            continue;
        } 

        if (j > ar) 
        {
            c[k] = a[i++]; 
            continue;
        } 

        if (a[i] < a[j]) 
        {
            c[k] = a[i++]; 
        }                  
        else
        {
            c[k] = a[j++]; 
        }
    }

    for (k = al; k <= ar; ++k) 
    {
        a[k] = c[k]; 
    }
}
```

### ***Phân tích***

* **Kích thước dữ liệu đầu vào**: n.

#### **Khối code (1)**

```c++
    int i = al, j = am + 1, k;
```

* Thực hiện tuần tự, Thực hiện tuần tự, thời gian thực hiện là ***O(max(1, 1, 1)) = O(1)***.

#### **Khối code (2)**

```c++
for (k = al; k <= ar; ++k)
{
    // body
}
```

* Thời gian kiểm tra điều kiện, tăng biến **k** lên một đơn vị mất ***O(1)***.

* Xét đoạn code thân vòng lặp ta có:

```c++
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
```

* Suy ra, thân vòng lặp thực hiện tuần tự, thời gian thực hiện là ***O(max(1, 1, 1)) = O(1)***

* Vậy, xét trên toàn bộ vòng lặp, số lần lặp là **ar - al + 1**, suy ra độ phức tạp thời gian của toàn bộ vòng lặp này là ***O(ar-al+1)***.

#### **Khối code (3)**

```c++
for (k = al; k <= ar; ++k) 
{
    a[k] = c[k]; 
}
```

* Thời gian kiểm tra điều kiện, tăng biến **k** lên một đơn vị mất ***O(1)***.

* Phần thân vòng lặp:

```c++
a[k] = c[k] // Độ phức tạp thời gian là O(1).
```

* Do vòng lặp có **ar-al+1** lần lặp nên, độ phức tạp thời gian của toàn bộ vòng lặp là ***O(ar-al+1)***.

> ### Tổng kết
>
> * Xét toàn bộ hàm, [khối code (1)](#khối-code-1), [khối code (2)](#khối-code-2), [khối code (3)](#khối-code-3) thực hiện tuần tự, nên độ phức tạp thời gian được tính bằng: ***O(max(O(1), O(ar - al + 1), O(ar - al + 1))) = O(ar - al + 1)***
>
> * Áp dụng quy tắc bỏ hằng số, giả sử ar-al = n, khi đó độ phức tạp thời gian của hàm cần tìm là: **O(n)**.
