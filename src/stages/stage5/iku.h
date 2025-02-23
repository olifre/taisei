/*
 * This software is licensed under the terms of the MIT License.
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2019, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2019, Andrei Alexeyev <akari@taisei-project.org>.
 */

#pragma once
#include "taisei.h"

#include "boss.h"

DEFINE_ENTITY_TYPE(IkuSlave, {
	struct {
		Sprite *lightning0, *lightning1, *cloud, *dot;
	} sprites;

	cmplx pos;
	int spawn_time;
	Color color;
	cmplxf scale;

	COEVENTS_ARRAY(
		despawned,
		killed,
		collision
	) events;
});

DECLARE_EXTERN_TASK(iku_slave_move, {
	BoxedIkuSlave slave;
	MoveParams move;
});

DECLARE_EXTERN_TASK(iku_induction_bullet, {
	BoxedProjectile p;
	cmplx radial_vel;
	cmplx angular_vel;
	bool inverted;
});

DECLARE_EXTERN_TASK(iku_spawn_clouds);

void stage5_init_iku_slave(IkuSlave *slave, cmplx pos);
void iku_lightning_particle(cmplx);

Boss *stage5_spawn_iku(cmplx pos);
IkuSlave *stage5_midboss_slave(cmplx pos);

int iku_induction_bullet(Projectile*, int);

