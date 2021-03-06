/*
 *                                Copyright (C) 2015 by Rafael Santiago
 *
 * This is a free software. You can redistribute it and/or modify under
 * the terms of the GNU General Public License version 2.
 *
 */
#ifndef _PIG_PIGSTY_H
#define _PIG_PIGSTY_H 1

#include "types.h"

pigsty_entry_ctx *load_pigsty_data_from_file(pigsty_entry_ctx *entry, const char *filepath);

int verify_ipv4_addr(const char *buffer);

#endif
