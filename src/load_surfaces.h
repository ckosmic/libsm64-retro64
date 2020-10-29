#pragma once

#include "decomp/include/types.h"
#include "libsm64.h"

extern uint32_t loaded_surface_iter_group_count( void );
extern uint32_t loaded_surface_iter_group_size( uint32_t groupIndex );
extern struct Surface *loaded_surface_iter_get_at_index( uint32_t groupIndex, uint32_t surfaceIndex );

extern void update_dynamic_surface_list( void );
extern void surfaces_load_static_libsm64( const struct SM64Surface *surfaceArray, uint32_t numSurfaces );
extern uint32_t surfaces_load_object( const struct SM64SurfaceObject *surfaceObject );
extern void surface_object_update_transform( uint32_t objId, const struct SM64ObjectTransform *newTransform );
extern void surfaces_unload_object( uint32_t objId );
extern void surfaces_unload_all( void );