#include <stdio.h>

void print_first_sentence(void)
{
	printf("You're beat! and yet, you must allow,\n");
}

void print_second_sentence(void)
{
    printf("I bore my house upon my back!\n");
}

void __attribute__((constructor)) run_before_main()
{
    print_first_sentence();
    print_second_sentence();
}
