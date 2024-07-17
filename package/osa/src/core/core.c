#include <linux/kernel.h>
#include <linux/module.h>

#include "osa.h"


INT32 OSA_init(VOID);
VOID OSA_exit(VOID);

STATIC VOID OSA_logTest(VOID)
{
    OSA_INFO("Start log module test.");

    OSA_EMERG("");
    OSA_ALERT("");
    OSA_CRIT("");
    OSA_ERROR("");
    OSA_WARN("");
    OSA_NOTICE("");
    OSA_INFO("");
    OSA_DEBUG("");
    OSA_log("");

    return;
}


INT32 OSA_init(VOID)
{
	OSA_INFO("OSA module init.");

	OSA_INFO("Hello World!");

    OSA_logTest();


	return OSA_SOK;
}

VOID OSA_exit(VOID)
{
	OSA_INFO("OSA module exit.");

	return;
}

module_init(OSA_init);
module_exit(OSA_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Guo Hao");
MODULE_DESCRIPTION("OSA Module");
