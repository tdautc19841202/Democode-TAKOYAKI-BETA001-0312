#ifndef CEVA_LINKDRV_SHARED_PROCESS_PROTECTED_DB_DEF_H_
#define CEVA_LINKDRV_SHARED_PROCESS_PROTECTED_DB_DEF_H_

#define PROTECTED_MEM_DB_FILENAME "/dev/protected_mem_db"


#define CEVALINK_MAX_CLIENT		(0x10)

typedef struct {
	int client_list[CEVALINK_MAX_CLIENT];
} ceva_linkdrv_shared_process_protected_db;

#define IOC_CEVADRV_PROTMEM_MAGIC    (0xFB)

#define IOC_CEVADRV_PROTMEM_LOCK     _IOW(IOC_CEVADRV_PROTMEM_MAGIC,   1, int)
#define IOC_CEVADRV_PROTMEM_UNLOCK   _IOW(IOC_CEVADRV_PROTMEM_MAGIC,   2, int)

#define IOC_CEVADRV_PROTMEM_MAXNR    2

#endif /* CEVA_LINKDRV_SHARED_PROCESS_PROTECTED_DB_DEF_H_ */
