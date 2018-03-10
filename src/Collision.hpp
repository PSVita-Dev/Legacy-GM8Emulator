#ifndef _A_COLLISION_HPP_
#define _A_COLLISION_HPP_
struct Instance;

// Should always be called before accessing an instance's bbox variables.
void RefreshInstanceBbox(Instance* i);

// Checks for collision between two instances
bool CollisionCheck(Instance* i1, Instance* i2);

#endif