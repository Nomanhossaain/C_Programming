// #include <stdio.h>
// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int *ptr;
//     ptr = &a[0];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", *ptr);
//         ptr++;
//     }
// }

// Swap:
// #include <stdio.h>
// int main()
// {
//     int x = 10, y = 20;
//     int *ptr1, *ptr2;
//     ptr1 = &x;
//     ptr2 = &y;

//     int temp;
//     temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
//     printf("x = %d, ", x);
//     printf("y = %d", y);
// }

// swaping with function:
#include <stdio.h>
void swaping(int *ptr, int *ptr2)
{
    int temp;
    temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int x = 10, y = 20;
    // int *ptr, *ptr2;
    // *ptr = &x;
    // *ptr2 = &y;
    printf("x = %d, y = %d", x, y);
    swaping(&x, &y);
    printf("\nx = %d, y = %d", x, y);
}
