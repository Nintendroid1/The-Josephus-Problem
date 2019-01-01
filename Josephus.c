#include <stdio.h>

int main()
{
    //https://www.youtube.com/watch?v=uCsD3ZGzMgE 
    int prisoners = 100;
    int josephus = ((prisoners^msb(prisoners))<<1) | 0x1;//73
    
    printf("Surviving position out of %d prisoners is %d", prisoners, josephus);

    return 0;
}

int msb(int digit) {
    int mask = digit;
    mask |= (mask >>  1);
    mask |= (mask >>  2);
    mask |= (mask >>  4);
    mask |= (mask >>  8);
    mask |= (mask >> 16);
    mask |= (mask >> 32);
    return mask - (mask >> 1);
}