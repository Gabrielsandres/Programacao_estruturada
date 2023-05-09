
#include<stdio.h>
int main()
{
    struct facil
    {
    int num;
    int ch;
    };

    struct facil xx1;
    struct facil xx2;
    
    xx1.num=2;
    xx1.ch='Z';
    xx2.num=3;
    xx2.ch='Y';

    printf("\nxx1.num = %d, xx1.ch = =%c\n", xx1.num, xx1.ch);
    printf("\nxx2.num = %d, xx2.ch = =%c\n\n", xx2.num, xx2.ch);
    
    
    
    return 0;
}



