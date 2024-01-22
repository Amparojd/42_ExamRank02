/* 
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int aux = 0;

    while(i <(size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            aux = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = aux;
            i = 0;
        }
        else    
            i++;
    }
}
int	main()
{
	int tab[] = {2,1,4,5,9,5,3};
	int i = 0;

	sort_int_tab(tab, 7);

	while(i < 7)
	{
		printf("%d  / ", tab[i]);
		i++;
	}
	return(0);
}
