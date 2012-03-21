#ifndef __VM_SWAP_H
#define __VM_SWAP_H

#include "vm/frame.h"
#include "devices/block.h"

struct swap_slt{
	struct frame * frame;
	block_sector_t swap_addr;

	struct hash_elem hash_elem;
	struct list_elem list_elem;
};

void swap_init(void);
void swap_load(void *, struct swap_slt*);
void swap_store(struct swap_slt *);
void swap_free(struct swap_slt *);
struct swap_slt * swap_slot(struct frame *);

#endif /* vm/swap.h */