#ifndef _OSA_CLASS_H_
#define _OSA_CLASS_H_

#include <linux/fs.h>
#include <linux/device/class.h>

/*************************************************************************/
/*                             宏定义                                       */
/*************************************************************************/
#define OSA_CLASS_NAME_NAX_LEN  (16)




/*************************************************************************/
/*                        结构体、数据类型                                       */
/*************************************************************************/
typedef struct class        OSA_class_t;




/*************************************************************************/
/*                             函数声明                                      */
/*************************************************************************/

extern INT32 OSA_class_create(OSA_class_t **ppstClass, const INT8 *name);

extern VOID OSA_class_delete(OSA_class_t **ppstClass);

#endif // _OSA_CLASS_H_