void putnbr(int num)
{
    char write_num;

    if(num > 9)
        putnbr(num / 10);
    write_num = num % 10 + '0';
    write(1, &write_num, 1);
}

int main(int argc, char **argv)
{
    (void) argv;
    putnbr(argc -1);
    write(1, "\n", 1);
}