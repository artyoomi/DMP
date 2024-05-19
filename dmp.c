#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/bio.h>
#include <linux/device-mapper.h>

struct dmp {
    struct dm_dev *dev;
    sector_t start;  
};


MODULE_AUTHOR("Artyom Ivanov <zuodleq@gmail.com>");
MODULE_DESCRIPTION("Device mapper statistics module");
MODULE_LICENCE("GPL");
