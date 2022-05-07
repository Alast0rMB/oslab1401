#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(arshiamoradi)
{
	printk("\nArshia Moradi\n");
	return 0;
}