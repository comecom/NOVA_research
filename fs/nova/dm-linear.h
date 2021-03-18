#ifndef __DM_LINEAR_H
#define __DM_LINEAR_H

#include "nova.h"
#include "super.h"

#define number_of_devices 2
typedef struct _nvmm_info
{
    void *virt_addr;
    const char *host;
    long size;
    struct dax_device *dax_dev;
    pfn_t __pfn_t;
}dm_nvmm_info;

dm_nvmm_info *multi_pm[number_of_devices];

void nova_get_multi_nvmm_info(struct super_block *sb, struct nova_sb_info *sbi);
u64 nova_get_addr_off_for_NUMA(struct nova_sb_info *sbi, void *addr);
void *nova_get_block_for_NUMA(struct super_block *sb, u64 block);
//int nova_get_file_loc(struct nova_inode *pi);

#endif
