#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("GLEB KOROBEYNIKOV");

static int __init module_load(void)
{
	printk(KERN_INFO "Hello World!\n");
	return 0;
}

static void __exit module_upload(void)
{
	printk(KERN_INFO "Bye!\n");
}

module_init(module_load);
module_exit(module_upload);
