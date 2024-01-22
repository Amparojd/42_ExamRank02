// Assignment name  : ft_list_remove_if
// Expected files   : ft_list_remove_if.c
// Allowed functions: free
// --------------------------------------------------------------------------------

// Write a function called ft_list_remove_if that removes from the
// passed list any element the data of which is "equal" to the reference data.

// It will be declared as follows :

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

// cmp takes two void* and returns 0 when both parameters are equal.

// You have to use the ft_list.h file, which will contain:

// $>cat ft_list.h
// typedef struct      s_list
// {
//     struct s_list   *next;
//     void            *data;
// }                   t_list;
// $>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return;
    
    t_list *lst_ptr = *begin_list;

    if(cmp(lst_ptr->data, data_ref) == 0)
    {
        *begin_list = list_ptr->next;
        free(list_ptr);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        list_ptr = *begin_list;
        ft_list_remove_if(&list_ptr->next, data_Ref, cmp);
    }
}
