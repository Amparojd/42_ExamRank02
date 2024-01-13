#include <unistd.h>

int main (int argc, char **argv)
{
    int i = 0;
    int start = 0;
    int end = 0;

    if(argc >= 2)
    {
        while(argv[1][i] && argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        start = i;
        while(argv[1][i] && argv[1][i] != '\t' && argv[1][i] != ' ')
            i++;
        end = i - 1;
        while(argv[1][i] && argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while(argv[1][i])
        {
            while(argv[1][i] && argv[1][i] != '\t' && argv[1][i] != ' ')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            while(argv[1][i] && argv[1][i] == '\t' || argv[1][i] == ' ')
                i++;
            write(1, " ", 1);
        }
        while(start <= end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}