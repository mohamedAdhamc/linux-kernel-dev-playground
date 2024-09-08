#include <linux/module.h>
#include <linux/init.h>

// Meta Information *only required one is license*
MODULE_LICENSE("GPL");
MODULE_AUTHOR("MOHAMEDADHAMC");
MODULE_DESCRIPTION("HELLO WORLD KERNEL MODULE");

/**
 *  @brief This function is called when the module is loaded into the kernel
 */
static int __init ModuleInit(void) {
	printk("Hello kernel");
	return 0;//zero as a return means succes, negative for error
}

/**
 * @brief This function is called when the module is removed from the kernel
 */
static void __exit ModuleExit(void) {
	printk("Bye kerenl");
}

module_init(ModuleInit);
module_exit(ModuleExit);
