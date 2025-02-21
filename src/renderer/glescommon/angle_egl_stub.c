/*
 * This software is licensed under the terms of the MIT License.
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2019, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2019, Andrei Alexeyev <akari@taisei-project.org>.
 */

#include "taisei.h"

#include "angle_egl.h"
#include "util.h"

SDL_GLContext gles_create_context_angle(SDL_Window *window, int major, int minor, bool webgl) {
	log_fatal("Built without custom ANGLE EGL code path");
}
