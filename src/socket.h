/*
 * This file is part of project l3roamd. It's copyrighted by the contributors
 * recorded in the version control history of the file, available from
 * its original location https://github.com/freifunk-gluon/l3roamd.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */
#pragma once

#include <inttypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>

#define LINEBUFFER_SIZE 1024

enum socket_command {
	ADD_MESHIF,
	DEL_MESHIF,
	GET_MESHIFS,
	SET_VERBOSITY
};

typedef struct {
	int fd;
	char *path;
} socket_ctx;

void socket_init(socket_ctx *ctx, char *path);
void socket_handle_in(socket_ctx *ctx);
