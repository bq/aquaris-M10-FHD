#include <asm/uaccess.h>


#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/err.h>
#include "mtk_thermal_typedefs.h"

/************************************/
/* Definition */
/************************************/
unsigned long (*mtk_thermal_get_gpu_loading_fp)(void) = NULL;
/*EXPORT_SYMBOL(mtk_thermal_get_gpu_loading_fp);*/

/* Init */
static int __init mtk_thermal_platform_init(void)
{
		int err = 0;
		return err;
}

/* Exit */
static void __exit mtk_thermal_platform_exit(void)
{

}


/*********************************************/
/* Export Interface*/
/*********************************************/


module_init(mtk_thermal_platform_init);
module_exit(mtk_thermal_platform_exit);


