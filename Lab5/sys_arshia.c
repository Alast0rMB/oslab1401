#include  <stdio.h>
#include  <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
     long int syscall_return_val = syscall(440);
     printf("The output of the arshiamoradi syscall: %ld\n",syscall_return_val);
     return 0;
}
