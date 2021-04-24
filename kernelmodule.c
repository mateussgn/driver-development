#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int __init init_kernel(void)
{
    printk(KERN_ALERT "BEM VINDO AO kernelmodule\n");
    return 0;
}
 
void __exit exit_kernel(void)
{
    printk(KERN_ALERT "kernelmodule ENCERRADO, ADEUS!\n");
}
 
module_init(init_kernel);
module_exit(exit_kernel);