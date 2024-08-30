// #include <stdio.h>
// void TechVidvan()
// {
//     int var = 25;
//     int *pt;
//     pt = &var;
//     printf("Address is: %p \n", pt);      //Address is: 0x16b25727c
//     printf("Value is: %d \n", *pt);        //Value is : 25
// }
// int main()
// {
//     TechVidvan();
// }
#include <stdio.h>

int main()
{
    int val = 10;
    int *point;
    point = &val;
    printf("TechVidvan Tutorial: Declare a pointer in C!\n\n");
    printf("Value is: %d\n", *point);
    printf("Memory address is: %p\n", point);
    // Value is : 10 Memory address is : 0x16d68b28c
}