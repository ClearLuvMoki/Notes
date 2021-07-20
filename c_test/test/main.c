#include <stdio.h>
int main()
{
    void inv(int *a, int n);
    int a[10]= {1, 2, 3, 4, 5, 6,7 ,8 ,9 ,10}, i;
    printf("输出换顺序之前的数组:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    inv(a, 10);
    printf("输出换顺序之后的数组:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}

void inv(int *arr, int n)
{
    int temp, i , j, m=(n-1)/2;
    for (i = 0; i < m; i++){
        j = n-1-i;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
