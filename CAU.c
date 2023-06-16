#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursive_func(int n)
{
    int p = 0;
    int q = 1;
    int fib;
    for (int i = 0; i<n; i++)
    {
        if(i == 0){
            printf("%d", p);
        }
        else if(i == 1){
            printf("%d", q);
        }
        else{
            fib = p + q;
            printf("%d", fib);
            p = q;
            q = fib;
        }
    }
}
in branch b
int main(void)
{
    int num, result;
    scanf("%d", num);
    result = recursive_func(num);

    printf("%d th Fibonacci number = %d\n", num, result);

    return 0;
}