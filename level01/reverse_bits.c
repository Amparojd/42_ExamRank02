// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100

#include <stdio.h>
#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
    int i = 7;
    unsigned char res = 0;

    while(i >= 0)
    {
        res = (octet & 1) | (res << 1);
        octet = octet >> 1;
        i--;
    }
    return(res);
}

void	print_bits(unsigned char octet)
{
   int i = 8;

   while (i--)
   {
        if (octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
   }
}



int main(void)
{
    print_bits(3);
    printf("\n");
    print_bits(reverse_bits(3));
}