#include<linux/init.h>			//Linux Header Files
#include<linux/module.h>

int first_module_init(void)
{
	printk(KERN_ALERT "Hey World! What's up?\n\n");
	return 0;
}

void first_module_exit(void)
{
	printk(KERN_ALERT "Leaving this World\n\n");
}

module_init(first_module_init);           //Entry Function
module_exit(first_module_exit);           //Exit Function
