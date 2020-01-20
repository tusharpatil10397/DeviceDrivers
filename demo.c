#include<linux/init.h>			//Linux Header Files
#include<linux/module.h>
#include<linux/moduleparam.h>

static char *mystr ="hello";
static int myint = 1234;

module_param(mystr,charp,S_IRUGO);
module_param(myint,int,S_IRUGO);

MODULE_PARM_DESC(myint,"Count of read writes");

int first_module_init(void)
{
	printk(KERN_ALERT "Hey World! What's up? %d \n\n",myint);
	return 0;
}

void first_module_exit(void)
{
	printk(KERN_ALERT "Leaving this World\n\n");
}

module_init(first_module_init);           //Entry Function
module_exit(first_module_exit);           //Exit Function

MODULE_DESCRIPTION("Our first module");
MODULE_AUTHOR("Tushar patil <tusharpatil10397@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_INFO(SupportedChips, "PCA9685, FT232RL");
