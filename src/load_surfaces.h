#pragma once

#include "decomp/include/PR/ultratypes.h"
#include "libsm64.h"

struct SurfaceObjectTransform
{
    float aPosX, aPosY, aPosZ;
    float aVelX, aVelY, aVelZ;

    s16 aFaceAnglePitch;
    s16 aFaceAngleYaw;
    s16 aFaceAngleRoll;

    s16 aAngleVelPitch;
    s16 aAngleVelYaw;
    s16 aAngleVelRoll;
};

extern struct Surface *loaded_surface_get_at_index( uint32_t index );
extern uint32_t loaded_surface_get_count();

extern void update_dynamic_surface_list( void );
extern void surfaces_load_static_libsm64( const struct SM64Surface *surfaceArray, uint32_t numSurfaces );
extern uint32_t surfaces_load_object( const struct SM64SurfaceObject *surfaceObject );
extern void surface_object_update_transform( uint32_t objId, const struct SM64ObjectTransform *newTransform );
extern void surfaces_unload_object( uint32_t objId );
extern void surfaces_unload_all( void );