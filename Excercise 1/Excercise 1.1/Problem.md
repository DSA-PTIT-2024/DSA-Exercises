# **Bài tập 1**

---

## Bài tập 1.1

* Cho đoạn code sau:

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

> **Yêu cầu:** Hãy tính độ phức tạp thời gian của đoạn code trên và cho biết cách tính. (0,5 điểm)
