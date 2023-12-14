#include <unistd.h>


int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == '_')
            {
                if(argv[1][i + 1] >= 'a' && argv[1][i] <= 'z')
                {
                    i++;
                    argv[1][i] -= 32;
                }
                else
                    i++;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
