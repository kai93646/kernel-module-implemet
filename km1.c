#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("113522106");
MODULE_DESCRIPTION("A simple Hello World module");

static int __init hello_init(void) {
        printk(KERN_INFO "Hello, world!\n");
        return 0;
}
static void __exit hello_exit(void) {
        printk(KERN_INFO "Goodbye, world!\n");
}

module_init(hello_init);
module_exit(hello_exit);