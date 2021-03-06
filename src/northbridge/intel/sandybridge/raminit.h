/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2010 Google Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef RAMINIT_H
#define RAMINIT_H

#include "pei_data.h"

struct sys_info {
	u8 boot_path;
#define BOOT_PATH_NORMAL	0
#define BOOT_PATH_RESET		1
#define BOOT_PATH_RESUME	2
} __packed;

void sdram_initialize(struct pei_data *pei_data);
void save_mrc_data(struct pei_data *pei_data);
void mainboard_fill_pei_data(struct pei_data *pei_data);
int fixup_sandybridge_errata(void);
void setup_sdram_meminfo(struct pei_data *pei_data);

#endif				/* RAMINIT_H */
