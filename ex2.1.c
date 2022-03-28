#include <stdio.h>
void printUnsignedRange(size_t bytes)
{
        int bits = 8*bytes;
        unsigned int to = ((1 << (bits-1)) - 1) + (1 << (bits-1)) ;

        printf(" range is from %u to %u \n", 0, to);
}
void printSignedRange(size_t bytes)
{
int bits = 8*bytes;
int from = -(1 << (bits-1));
int to = (1 << (bits-1)) - 1;
printf(" range is from %d to %d\n", from, to);
}

int main()
{
        printf("signed char: ");
        printSignedRange(sizeof(char));
        printf("unsigned char: ");
        printUnsignedRange(sizeof(unsigned char));
        printf("signed int: ");
        printSignedRange(sizeof(int));
        printf("unsigned int: ");
        printUnsignedRange(sizeof(unsigned int));
        printf("signed short int: ");
        printSignedRange(sizeof(short int));
        printf("unsigned short int: ");
        printUnsignedRange(sizeof(unsigned short int));
        return 0;
}

	
