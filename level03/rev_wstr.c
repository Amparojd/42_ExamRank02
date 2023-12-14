#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int start;

    i = 0;
    start = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
            i++;
        i--;
        while (i >= 0)
        {
            while (i >= 0 && argv[1][i] != ' ')
                i--;
            start = i - 1;
            i++;
            while (argv[1][i] && argv[1][i] != ' ')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            if (start > 0)
                write(1, " ", 1);
            i = start;
        }
    }
    write(1, "\n", 1);
}