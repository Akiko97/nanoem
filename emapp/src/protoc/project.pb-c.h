/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: project.proto */

#ifndef PROTOBUF_C_project_2eproto__INCLUDED
#define PROTOBUF_C_project_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1005000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "common.pb-c.h"

typedef struct Nanoem__Project__URI Nanoem__Project__URI;
typedef struct Nanoem__Project__Confirmation Nanoem__Project__Confirmation;
typedef struct Nanoem__Project__Audio Nanoem__Project__Audio;
typedef struct Nanoem__Project__Video Nanoem__Project__Video;
typedef struct Nanoem__Project__PhysicSimulation Nanoem__Project__PhysicSimulation;
typedef struct Nanoem__Project__ProjectiveShadow Nanoem__Project__ProjectiveShadow;
typedef struct Nanoem__Project__SelfShadow Nanoem__Project__SelfShadow;
typedef struct Nanoem__Project__Grid Nanoem__Project__Grid;
typedef struct Nanoem__Project__Screen Nanoem__Project__Screen;
typedef struct Nanoem__Project__Timeline Nanoem__Project__Timeline;
typedef struct Nanoem__Project__Camera Nanoem__Project__Camera;
typedef struct Nanoem__Project__Light Nanoem__Project__Light;
typedef struct Nanoem__Project__Motion Nanoem__Project__Motion;
typedef struct Nanoem__Project__Motion__Camera Nanoem__Project__Motion__Camera;
typedef struct Nanoem__Project__Motion__Light Nanoem__Project__Motion__Light;
typedef struct Nanoem__Project__Motion__SelfShadow Nanoem__Project__Motion__SelfShadow;
typedef struct Nanoem__Project__Motion__Model Nanoem__Project__Motion__Model;
typedef struct Nanoem__Project__Motion__Accessory Nanoem__Project__Motion__Accessory;
typedef struct Nanoem__Project__MaterialEffectAttachment Nanoem__Project__MaterialEffectAttachment;
typedef struct Nanoem__Project__Accessory Nanoem__Project__Accessory;
typedef struct Nanoem__Project__Model Nanoem__Project__Model;
typedef struct Nanoem__Project__OffscreenRenderTargetEffect Nanoem__Project__OffscreenRenderTargetEffect;
typedef struct Nanoem__Project__OffscreenRenderTargetEffect__Attachment Nanoem__Project__OffscreenRenderTargetEffect__Attachment;
typedef struct Nanoem__Project__Project Nanoem__Project__Project;


/* --- enums --- */


/* --- messages --- */

struct  Nanoem__Project__URI
{
  ProtobufCMessage base;
  char *absolute_path;
  char *fragment;
  char *relative_path;
};
#define NANOEM__PROJECT__URI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__uri__descriptor) \
, NULL, NULL, NULL }


struct  Nanoem__Project__Confirmation
{
  ProtobufCMessage base;
  protobuf_c_boolean enabled_if_dirty_bone_keyframes_found;
  protobuf_c_boolean enabled_if_dirty_camera_keyframes_found;
  protobuf_c_boolean enabled_if_dirty_light_keyframes_found;
  protobuf_c_boolean enabled_if_dirty_model_keyframes_found;
  protobuf_c_boolean enabled_if_dirty_morph_keyframes_found;
};
#define NANOEM__PROJECT__CONFIRMATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__confirmation__descriptor) \
, 0, 0, 0, 0, 0 }


struct  Nanoem__Project__Audio
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  float volume;
  Nanoem__Project__URI *file_uri;
  protobuf_c_boolean has_file_checksum;
  ProtobufCBinaryData file_checksum;
};
#define NANOEM__PROJECT__AUDIO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__audio__descriptor) \
, 0,NULL, 0, NULL, 0, {0,NULL} }


struct  Nanoem__Project__Video
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  Nanoem__Common__Point *offset;
  Nanoem__Common__Size *size;
  float scale_factor;
  Nanoem__Project__URI *file_uri;
  protobuf_c_boolean has_file_checksum;
  ProtobufCBinaryData file_checksum;
};
#define NANOEM__PROJECT__VIDEO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__video__descriptor) \
, 0,NULL, NULL, NULL, 0, NULL, 0, {0,NULL} }


struct  Nanoem__Project__PhysicSimulation
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  protobuf_c_boolean enabled;
  int32_t debug;
  protobuf_c_boolean has_time_step_factor;
  float time_step_factor;
  protobuf_c_boolean has_acceleration;
  float acceleration;
  Nanoem__Common__Vector3 *direction;
  protobuf_c_boolean has_noise;
  float noise;
  protobuf_c_boolean has_is_noise_enabled;
  protobuf_c_boolean is_noise_enabled;
  protobuf_c_boolean has_is_ground_enabled;
  protobuf_c_boolean is_ground_enabled;
  protobuf_c_boolean has_mode;
  int32_t mode;
};
#define NANOEM__PROJECT__PHYSIC_SIMULATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__physic_simulation__descriptor) \
, 0,NULL, 0, 0, 0, 0, 0, 0, NULL, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  Nanoem__Project__ProjectiveShadow
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  protobuf_c_boolean enabled;
};
#define NANOEM__PROJECT__PROJECTIVE_SHADOW__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__projective_shadow__descriptor) \
, 0,NULL, 0 }


struct  Nanoem__Project__SelfShadow
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  protobuf_c_boolean enabled;
  Nanoem__Common__Size *size;
  float distance;
  int32_t mode;
};
#define NANOEM__PROJECT__SELF_SHADOW__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__self_shadow__descriptor) \
, 0,NULL, 0, NULL, 0, 0 }


struct  Nanoem__Project__Grid
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  protobuf_c_boolean visible;
  float opacity;
  Nanoem__Common__Size *cell;
};
#define NANOEM__PROJECT__GRID__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__grid__descriptor) \
, 0,NULL, 0, 0, NULL }


struct  Nanoem__Project__Screen
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  Nanoem__Common__Rect *viewport;
  Nanoem__Common__Color *color;
  int32_t samples;
  protobuf_c_boolean has_is_transparent_enabled;
  protobuf_c_boolean is_transparent_enabled;
};
#define NANOEM__PROJECT__SCREEN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__screen__descriptor) \
, 0,NULL, NULL, NULL, 0, 0, 0 }


struct  Nanoem__Project__Timeline
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  double duration;
  double current_frame_index;
  float fps;
  protobuf_c_boolean is_loop_enabled;
  protobuf_c_boolean has_frame_index_from;
  double frame_index_from;
  protobuf_c_boolean has_frame_index_to;
  double frame_index_to;
};
#define NANOEM__PROJECT__TIMELINE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__timeline__descriptor) \
, 0,NULL, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  Nanoem__Project__Camera
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  Nanoem__Common__Vector3 *angle;
  Nanoem__Common__Vector3 *look_at;
  float distance;
  float fov;
  protobuf_c_boolean is_perspective;
  protobuf_c_boolean is_shared;
};
#define NANOEM__PROJECT__CAMERA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__camera__descriptor) \
, 0,NULL, NULL, NULL, 0, 0, 0, 0 }


struct  Nanoem__Project__Light
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  Nanoem__Common__Color *color;
  Nanoem__Common__Vector3 *direction;
  char *motion_path;
  Nanoem__Project__ProjectiveShadow *projective_shadow;
  Nanoem__Project__SelfShadow *self_shadow;
};
#define NANOEM__PROJECT__LIGHT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__light__descriptor) \
, 0,NULL, NULL, NULL, NULL, NULL, NULL }


struct  Nanoem__Project__Motion__Camera
{
  ProtobufCMessage base;
  protobuf_c_boolean has_payload;
  ProtobufCBinaryData payload;
  protobuf_c_boolean has_angle_x_axis_correction;
  protobuf_c_boolean angle_x_axis_correction;
};
#define NANOEM__PROJECT__MOTION__CAMERA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__motion__camera__descriptor) \
, 0, {0,NULL}, 0, 0 }


struct  Nanoem__Project__Motion__Light
{
  ProtobufCMessage base;
  protobuf_c_boolean has_payload;
  ProtobufCBinaryData payload;
};
#define NANOEM__PROJECT__MOTION__LIGHT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__motion__light__descriptor) \
, 0, {0,NULL} }


struct  Nanoem__Project__Motion__SelfShadow
{
  ProtobufCMessage base;
  protobuf_c_boolean has_payload;
  ProtobufCBinaryData payload;
};
#define NANOEM__PROJECT__MOTION__SELF_SHADOW__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__motion__self_shadow__descriptor) \
, 0, {0,NULL} }


struct  Nanoem__Project__Motion__Model
{
  ProtobufCMessage base;
  uint32_t model_handle;
  protobuf_c_boolean has_payload;
  ProtobufCBinaryData payload;
};
#define NANOEM__PROJECT__MOTION__MODEL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__motion__model__descriptor) \
, 0, 0, {0,NULL} }


struct  Nanoem__Project__Motion__Accessory
{
  ProtobufCMessage base;
  uint32_t accessory_handle;
  protobuf_c_boolean has_payload;
  ProtobufCBinaryData payload;
};
#define NANOEM__PROJECT__MOTION__ACCESSORY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__motion__accessory__descriptor) \
, 0, 0, {0,NULL} }


typedef enum {
  NANOEM__PROJECT__MOTION__TYPE__NOT_SET = 0,
  NANOEM__PROJECT__MOTION__TYPE_CAMERA = 6,
  NANOEM__PROJECT__MOTION__TYPE_LIGHT = 7,
  NANOEM__PROJECT__MOTION__TYPE_SELF_SHADOW = 8,
  NANOEM__PROJECT__MOTION__TYPE_MODEL = 9,
  NANOEM__PROJECT__MOTION__TYPE_ACCESSORY = 10
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(NANOEM__PROJECT__MOTION__TYPE__CASE)
} Nanoem__Project__Motion__TypeCase;

struct  Nanoem__Project__Motion
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  char *target;
  char *path_for_legacy_compatibility;
  protobuf_c_boolean has_motion_handle;
  uint32_t motion_handle;
  Nanoem__Project__URI *file_uri;
  Nanoem__Project__Motion__TypeCase type_case;
  union {
    Nanoem__Project__Motion__Camera *camera;
    Nanoem__Project__Motion__Light *light;
    Nanoem__Project__Motion__SelfShadow *self_shadow;
    Nanoem__Project__Motion__Model *model;
    Nanoem__Project__Motion__Accessory *accessory;
  };
};
#define NANOEM__PROJECT__MOTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__motion__descriptor) \
, 0,NULL, NULL, NULL, 0, 0, NULL, NANOEM__PROJECT__MOTION__TYPE__NOT_SET, {0} }


struct  Nanoem__Project__MaterialEffectAttachment
{
  ProtobufCMessage base;
  uint32_t offset;
  char *path_for_legacy_compatibility;
  Nanoem__Project__URI *file_uri;
  protobuf_c_boolean has_file_checksum;
  ProtobufCBinaryData file_checksum;
};
#define NANOEM__PROJECT__MATERIAL_EFFECT_ATTACHMENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__material_effect_attachment__descriptor) \
, 0, NULL, NULL, 0, {0,NULL} }


struct  Nanoem__Project__Accessory
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  char *name;
  char *path_for_legacy_compatibility;
  protobuf_c_boolean is_active;
  int32_t draw_order_index;
  size_t n_include_paths;
  char **include_paths;
  protobuf_c_boolean has_accessory_handle;
  uint32_t accessory_handle;
  size_t n_material_effect_attachments;
  Nanoem__Project__MaterialEffectAttachment **material_effect_attachments;
  Nanoem__Project__URI *file_uri;
  protobuf_c_boolean has_file_checksum;
  ProtobufCBinaryData file_checksum;
};
#define NANOEM__PROJECT__ACCESSORY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__accessory__descriptor) \
, 0,NULL, NULL, NULL, 0, 0, 0,NULL, 0, 0, 0,NULL, NULL, 0, {0,NULL} }


struct  Nanoem__Project__Model
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  char *name;
  char *path_for_legacy_compatibility;
  protobuf_c_boolean is_active;
  int32_t draw_order_index;
  int32_t transform_order_index;
  size_t n_include_paths;
  char **include_paths;
  protobuf_c_boolean has_model_handle;
  uint32_t model_handle;
  size_t n_material_effect_attachments;
  Nanoem__Project__MaterialEffectAttachment **material_effect_attachments;
  Nanoem__Project__URI *file_uri;
  protobuf_c_boolean has_file_checksum;
  ProtobufCBinaryData file_checksum;
};
#define NANOEM__PROJECT__MODEL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__model__descriptor) \
, 0,NULL, NULL, NULL, 0, 0, 0, 0,NULL, 0, 0, 0,NULL, NULL, 0, {0,NULL} }


struct  Nanoem__Project__OffscreenRenderTargetEffect__Attachment
{
  ProtobufCMessage base;
  uint32_t handle;
  char *path;
  size_t n_include_paths;
  char **include_paths;
  Nanoem__Project__URI *file_uri;
  protobuf_c_boolean has_file_checksum;
  ProtobufCBinaryData file_checksum;
  protobuf_c_boolean has_enabled;
  protobuf_c_boolean enabled;
};
#define NANOEM__PROJECT__OFFSCREEN_RENDER_TARGET_EFFECT__ATTACHMENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__offscreen_render_target_effect__attachment__descriptor) \
, 0, NULL, 0,NULL, NULL, 0, {0,NULL}, 0, 0 }


struct  Nanoem__Project__OffscreenRenderTargetEffect
{
  ProtobufCMessage base;
  char *name;
  protobuf_c_boolean has_owner_handle;
  uint32_t owner_handle;
  size_t n_attachments;
  Nanoem__Project__OffscreenRenderTargetEffect__Attachment **attachments;
};
#define NANOEM__PROJECT__OFFSCREEN_RENDER_TARGET_EFFECT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__offscreen_render_target_effect__descriptor) \
, NULL, 0, 0, 0,NULL }


struct  Nanoem__Project__Project
{
  ProtobufCMessage base;
  size_t n_annotations;
  Nanoem__Common__Annotation **annotations;
  size_t n_accessories;
  Nanoem__Project__Accessory **accessories;
  size_t n_models;
  Nanoem__Project__Model **models;
  size_t n_motions;
  Nanoem__Project__Motion **motions;
  Nanoem__Common__Language language;
  Nanoem__Project__Screen *screen;
  Nanoem__Project__Timeline *timeline;
  Nanoem__Project__Audio *audio;
  Nanoem__Project__Camera *camera;
  Nanoem__Project__Grid *grid;
  Nanoem__Project__Light *light;
  Nanoem__Project__PhysicSimulation *physics_simulation;
  Nanoem__Project__Confirmation *confirmation;
  int32_t axis_type;
  int32_t draw_type;
  int32_t editing_mode;
  int32_t transform_type;
  protobuf_c_boolean is_vertex_shader_skinning_enabled;
  protobuf_c_boolean is_compute_shader_skinning_enabled;
  protobuf_c_boolean is_effect_plugin_enabled;
  protobuf_c_boolean is_multiple_bone_selection_enabled;
  protobuf_c_boolean is_motion_merge_enabled;
  size_t n_offscreen_render_target_effects;
  Nanoem__Project__OffscreenRenderTargetEffect **offscreen_render_target_effects;
  Nanoem__Project__Video *video;
};
#define NANOEM__PROJECT__PROJECT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nanoem__project__project__descriptor) \
, 0,NULL, 0,NULL, 0,NULL, 0,NULL, NANOEM__COMMON__LANGUAGE__LC_UNKNOWN, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL, NULL }


/* Nanoem__Project__URI methods */
void   nanoem__project__uri__init
                     (Nanoem__Project__URI         *message);
size_t nanoem__project__uri__get_packed_size
                     (const Nanoem__Project__URI   *message);
size_t nanoem__project__uri__pack
                     (const Nanoem__Project__URI   *message,
                      uint8_t             *out);
size_t nanoem__project__uri__pack_to_buffer
                     (const Nanoem__Project__URI   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__URI *
       nanoem__project__uri__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__uri__free_unpacked
                     (Nanoem__Project__URI *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Confirmation methods */
void   nanoem__project__confirmation__init
                     (Nanoem__Project__Confirmation         *message);
size_t nanoem__project__confirmation__get_packed_size
                     (const Nanoem__Project__Confirmation   *message);
size_t nanoem__project__confirmation__pack
                     (const Nanoem__Project__Confirmation   *message,
                      uint8_t             *out);
size_t nanoem__project__confirmation__pack_to_buffer
                     (const Nanoem__Project__Confirmation   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Confirmation *
       nanoem__project__confirmation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__confirmation__free_unpacked
                     (Nanoem__Project__Confirmation *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Audio methods */
void   nanoem__project__audio__init
                     (Nanoem__Project__Audio         *message);
size_t nanoem__project__audio__get_packed_size
                     (const Nanoem__Project__Audio   *message);
size_t nanoem__project__audio__pack
                     (const Nanoem__Project__Audio   *message,
                      uint8_t             *out);
size_t nanoem__project__audio__pack_to_buffer
                     (const Nanoem__Project__Audio   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Audio *
       nanoem__project__audio__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__audio__free_unpacked
                     (Nanoem__Project__Audio *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Video methods */
void   nanoem__project__video__init
                     (Nanoem__Project__Video         *message);
size_t nanoem__project__video__get_packed_size
                     (const Nanoem__Project__Video   *message);
size_t nanoem__project__video__pack
                     (const Nanoem__Project__Video   *message,
                      uint8_t             *out);
size_t nanoem__project__video__pack_to_buffer
                     (const Nanoem__Project__Video   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Video *
       nanoem__project__video__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__video__free_unpacked
                     (Nanoem__Project__Video *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__PhysicSimulation methods */
void   nanoem__project__physic_simulation__init
                     (Nanoem__Project__PhysicSimulation         *message);
size_t nanoem__project__physic_simulation__get_packed_size
                     (const Nanoem__Project__PhysicSimulation   *message);
size_t nanoem__project__physic_simulation__pack
                     (const Nanoem__Project__PhysicSimulation   *message,
                      uint8_t             *out);
size_t nanoem__project__physic_simulation__pack_to_buffer
                     (const Nanoem__Project__PhysicSimulation   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__PhysicSimulation *
       nanoem__project__physic_simulation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__physic_simulation__free_unpacked
                     (Nanoem__Project__PhysicSimulation *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__ProjectiveShadow methods */
void   nanoem__project__projective_shadow__init
                     (Nanoem__Project__ProjectiveShadow         *message);
size_t nanoem__project__projective_shadow__get_packed_size
                     (const Nanoem__Project__ProjectiveShadow   *message);
size_t nanoem__project__projective_shadow__pack
                     (const Nanoem__Project__ProjectiveShadow   *message,
                      uint8_t             *out);
size_t nanoem__project__projective_shadow__pack_to_buffer
                     (const Nanoem__Project__ProjectiveShadow   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__ProjectiveShadow *
       nanoem__project__projective_shadow__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__projective_shadow__free_unpacked
                     (Nanoem__Project__ProjectiveShadow *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__SelfShadow methods */
void   nanoem__project__self_shadow__init
                     (Nanoem__Project__SelfShadow         *message);
size_t nanoem__project__self_shadow__get_packed_size
                     (const Nanoem__Project__SelfShadow   *message);
size_t nanoem__project__self_shadow__pack
                     (const Nanoem__Project__SelfShadow   *message,
                      uint8_t             *out);
size_t nanoem__project__self_shadow__pack_to_buffer
                     (const Nanoem__Project__SelfShadow   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__SelfShadow *
       nanoem__project__self_shadow__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__self_shadow__free_unpacked
                     (Nanoem__Project__SelfShadow *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Grid methods */
void   nanoem__project__grid__init
                     (Nanoem__Project__Grid         *message);
size_t nanoem__project__grid__get_packed_size
                     (const Nanoem__Project__Grid   *message);
size_t nanoem__project__grid__pack
                     (const Nanoem__Project__Grid   *message,
                      uint8_t             *out);
size_t nanoem__project__grid__pack_to_buffer
                     (const Nanoem__Project__Grid   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Grid *
       nanoem__project__grid__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__grid__free_unpacked
                     (Nanoem__Project__Grid *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Screen methods */
void   nanoem__project__screen__init
                     (Nanoem__Project__Screen         *message);
size_t nanoem__project__screen__get_packed_size
                     (const Nanoem__Project__Screen   *message);
size_t nanoem__project__screen__pack
                     (const Nanoem__Project__Screen   *message,
                      uint8_t             *out);
size_t nanoem__project__screen__pack_to_buffer
                     (const Nanoem__Project__Screen   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Screen *
       nanoem__project__screen__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__screen__free_unpacked
                     (Nanoem__Project__Screen *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Timeline methods */
void   nanoem__project__timeline__init
                     (Nanoem__Project__Timeline         *message);
size_t nanoem__project__timeline__get_packed_size
                     (const Nanoem__Project__Timeline   *message);
size_t nanoem__project__timeline__pack
                     (const Nanoem__Project__Timeline   *message,
                      uint8_t             *out);
size_t nanoem__project__timeline__pack_to_buffer
                     (const Nanoem__Project__Timeline   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Timeline *
       nanoem__project__timeline__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__timeline__free_unpacked
                     (Nanoem__Project__Timeline *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Camera methods */
void   nanoem__project__camera__init
                     (Nanoem__Project__Camera         *message);
size_t nanoem__project__camera__get_packed_size
                     (const Nanoem__Project__Camera   *message);
size_t nanoem__project__camera__pack
                     (const Nanoem__Project__Camera   *message,
                      uint8_t             *out);
size_t nanoem__project__camera__pack_to_buffer
                     (const Nanoem__Project__Camera   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Camera *
       nanoem__project__camera__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__camera__free_unpacked
                     (Nanoem__Project__Camera *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Light methods */
void   nanoem__project__light__init
                     (Nanoem__Project__Light         *message);
size_t nanoem__project__light__get_packed_size
                     (const Nanoem__Project__Light   *message);
size_t nanoem__project__light__pack
                     (const Nanoem__Project__Light   *message,
                      uint8_t             *out);
size_t nanoem__project__light__pack_to_buffer
                     (const Nanoem__Project__Light   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Light *
       nanoem__project__light__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__light__free_unpacked
                     (Nanoem__Project__Light *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Motion__Camera methods */
void   nanoem__project__motion__camera__init
                     (Nanoem__Project__Motion__Camera         *message);
/* Nanoem__Project__Motion__Light methods */
void   nanoem__project__motion__light__init
                     (Nanoem__Project__Motion__Light         *message);
/* Nanoem__Project__Motion__SelfShadow methods */
void   nanoem__project__motion__self_shadow__init
                     (Nanoem__Project__Motion__SelfShadow         *message);
/* Nanoem__Project__Motion__Model methods */
void   nanoem__project__motion__model__init
                     (Nanoem__Project__Motion__Model         *message);
/* Nanoem__Project__Motion__Accessory methods */
void   nanoem__project__motion__accessory__init
                     (Nanoem__Project__Motion__Accessory         *message);
/* Nanoem__Project__Motion methods */
void   nanoem__project__motion__init
                     (Nanoem__Project__Motion         *message);
size_t nanoem__project__motion__get_packed_size
                     (const Nanoem__Project__Motion   *message);
size_t nanoem__project__motion__pack
                     (const Nanoem__Project__Motion   *message,
                      uint8_t             *out);
size_t nanoem__project__motion__pack_to_buffer
                     (const Nanoem__Project__Motion   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Motion *
       nanoem__project__motion__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__motion__free_unpacked
                     (Nanoem__Project__Motion *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__MaterialEffectAttachment methods */
void   nanoem__project__material_effect_attachment__init
                     (Nanoem__Project__MaterialEffectAttachment         *message);
size_t nanoem__project__material_effect_attachment__get_packed_size
                     (const Nanoem__Project__MaterialEffectAttachment   *message);
size_t nanoem__project__material_effect_attachment__pack
                     (const Nanoem__Project__MaterialEffectAttachment   *message,
                      uint8_t             *out);
size_t nanoem__project__material_effect_attachment__pack_to_buffer
                     (const Nanoem__Project__MaterialEffectAttachment   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__MaterialEffectAttachment *
       nanoem__project__material_effect_attachment__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__material_effect_attachment__free_unpacked
                     (Nanoem__Project__MaterialEffectAttachment *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Accessory methods */
void   nanoem__project__accessory__init
                     (Nanoem__Project__Accessory         *message);
size_t nanoem__project__accessory__get_packed_size
                     (const Nanoem__Project__Accessory   *message);
size_t nanoem__project__accessory__pack
                     (const Nanoem__Project__Accessory   *message,
                      uint8_t             *out);
size_t nanoem__project__accessory__pack_to_buffer
                     (const Nanoem__Project__Accessory   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Accessory *
       nanoem__project__accessory__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__accessory__free_unpacked
                     (Nanoem__Project__Accessory *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Model methods */
void   nanoem__project__model__init
                     (Nanoem__Project__Model         *message);
size_t nanoem__project__model__get_packed_size
                     (const Nanoem__Project__Model   *message);
size_t nanoem__project__model__pack
                     (const Nanoem__Project__Model   *message,
                      uint8_t             *out);
size_t nanoem__project__model__pack_to_buffer
                     (const Nanoem__Project__Model   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Model *
       nanoem__project__model__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__model__free_unpacked
                     (Nanoem__Project__Model *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__OffscreenRenderTargetEffect__Attachment methods */
void   nanoem__project__offscreen_render_target_effect__attachment__init
                     (Nanoem__Project__OffscreenRenderTargetEffect__Attachment         *message);
/* Nanoem__Project__OffscreenRenderTargetEffect methods */
void   nanoem__project__offscreen_render_target_effect__init
                     (Nanoem__Project__OffscreenRenderTargetEffect         *message);
size_t nanoem__project__offscreen_render_target_effect__get_packed_size
                     (const Nanoem__Project__OffscreenRenderTargetEffect   *message);
size_t nanoem__project__offscreen_render_target_effect__pack
                     (const Nanoem__Project__OffscreenRenderTargetEffect   *message,
                      uint8_t             *out);
size_t nanoem__project__offscreen_render_target_effect__pack_to_buffer
                     (const Nanoem__Project__OffscreenRenderTargetEffect   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__OffscreenRenderTargetEffect *
       nanoem__project__offscreen_render_target_effect__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__offscreen_render_target_effect__free_unpacked
                     (Nanoem__Project__OffscreenRenderTargetEffect *message,
                      ProtobufCAllocator *allocator);
/* Nanoem__Project__Project methods */
void   nanoem__project__project__init
                     (Nanoem__Project__Project         *message);
size_t nanoem__project__project__get_packed_size
                     (const Nanoem__Project__Project   *message);
size_t nanoem__project__project__pack
                     (const Nanoem__Project__Project   *message,
                      uint8_t             *out);
size_t nanoem__project__project__pack_to_buffer
                     (const Nanoem__Project__Project   *message,
                      ProtobufCBuffer     *buffer);
Nanoem__Project__Project *
       nanoem__project__project__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nanoem__project__project__free_unpacked
                     (Nanoem__Project__Project *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Nanoem__Project__URI_Closure)
                 (const Nanoem__Project__URI *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Confirmation_Closure)
                 (const Nanoem__Project__Confirmation *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Audio_Closure)
                 (const Nanoem__Project__Audio *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Video_Closure)
                 (const Nanoem__Project__Video *message,
                  void *closure_data);
typedef void (*Nanoem__Project__PhysicSimulation_Closure)
                 (const Nanoem__Project__PhysicSimulation *message,
                  void *closure_data);
typedef void (*Nanoem__Project__ProjectiveShadow_Closure)
                 (const Nanoem__Project__ProjectiveShadow *message,
                  void *closure_data);
typedef void (*Nanoem__Project__SelfShadow_Closure)
                 (const Nanoem__Project__SelfShadow *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Grid_Closure)
                 (const Nanoem__Project__Grid *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Screen_Closure)
                 (const Nanoem__Project__Screen *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Timeline_Closure)
                 (const Nanoem__Project__Timeline *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Camera_Closure)
                 (const Nanoem__Project__Camera *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Light_Closure)
                 (const Nanoem__Project__Light *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Motion__Camera_Closure)
                 (const Nanoem__Project__Motion__Camera *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Motion__Light_Closure)
                 (const Nanoem__Project__Motion__Light *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Motion__SelfShadow_Closure)
                 (const Nanoem__Project__Motion__SelfShadow *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Motion__Model_Closure)
                 (const Nanoem__Project__Motion__Model *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Motion__Accessory_Closure)
                 (const Nanoem__Project__Motion__Accessory *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Motion_Closure)
                 (const Nanoem__Project__Motion *message,
                  void *closure_data);
typedef void (*Nanoem__Project__MaterialEffectAttachment_Closure)
                 (const Nanoem__Project__MaterialEffectAttachment *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Accessory_Closure)
                 (const Nanoem__Project__Accessory *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Model_Closure)
                 (const Nanoem__Project__Model *message,
                  void *closure_data);
typedef void (*Nanoem__Project__OffscreenRenderTargetEffect__Attachment_Closure)
                 (const Nanoem__Project__OffscreenRenderTargetEffect__Attachment *message,
                  void *closure_data);
typedef void (*Nanoem__Project__OffscreenRenderTargetEffect_Closure)
                 (const Nanoem__Project__OffscreenRenderTargetEffect *message,
                  void *closure_data);
typedef void (*Nanoem__Project__Project_Closure)
                 (const Nanoem__Project__Project *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor nanoem__project__uri__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__confirmation__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__audio__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__video__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__physic_simulation__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__projective_shadow__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__self_shadow__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__grid__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__screen__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__timeline__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__camera__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__light__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__motion__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__motion__camera__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__motion__light__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__motion__self_shadow__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__motion__model__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__motion__accessory__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__material_effect_attachment__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__accessory__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__model__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__offscreen_render_target_effect__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__offscreen_render_target_effect__attachment__descriptor;
extern const ProtobufCMessageDescriptor nanoem__project__project__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_project_2eproto__INCLUDED */
