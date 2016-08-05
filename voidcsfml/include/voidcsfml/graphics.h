#ifndef VOIDCSFML_GRAPHICS_H
#define VOIDCSFML_GRAPHICS_H
#include <voidcsfml/window.h>
#include <voidcsfml/config.h>
#include <voidcsfml/system.h>
VOIDCSFML_API sfml_graphics_version(int*, int*, int*);
VOIDCSFML_API blendmode_initialize(void* self);
VOIDCSFML_API blendmode_initialize_8xr8xrBw1(void* self, int source_factor, int destination_factor, int blend_equation);
VOIDCSFML_API blendmode_initialize_8xr8xrBw18xr8xrBw1(void* self, int color_source_factor, int color_destination_factor, int color_blend_equation, int alpha_source_factor, int alpha_destination_factor, int alpha_blend_equation);
VOIDCSFML_API blendmode_setcolorsrcfactor_8xr(void* self, int color_src_factor);
VOIDCSFML_API blendmode_setcolordstfactor_8xr(void* self, int color_dst_factor);
VOIDCSFML_API blendmode_setcolorequation_Bw1(void* self, int color_equation);
VOIDCSFML_API blendmode_setalphasrcfactor_8xr(void* self, int alpha_src_factor);
VOIDCSFML_API blendmode_setalphadstfactor_8xr(void* self, int alpha_dst_factor);
VOIDCSFML_API blendmode_setalphaequation_Bw1(void* self, int alpha_equation);
VOIDCSFML_API operator_eq_PG5PG5(void* left, void* right, unsigned char* result);
VOIDCSFML_API operator_ne_PG5PG5(void* left, void* right, unsigned char* result);
VOIDCSFML_API blendmode_initialize_PG5(void* self, void* copy);
VOIDCSFML_API transform_initialize(void* self);
VOIDCSFML_API transform_initialize_Bw9Bw9Bw9Bw9Bw9Bw9Bw9Bw9Bw9(void* self, float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22);
VOIDCSFML_API transform_getmatrix(void* self, float** result);
VOIDCSFML_API transform_getinverse(void* self, void* result);
VOIDCSFML_API transform_transformpoint_Bw9Bw9(void* self, float x, float y, void* result);
VOIDCSFML_API transform_transformpoint_UU2(void* self, void* point, void* result);
VOIDCSFML_API transform_transformrect_WPZ(void* self, void* rectangle, void* result);
VOIDCSFML_API transform_combine_FPe(void* self, void* transform, void* result);
VOIDCSFML_API transform_translate_Bw9Bw9(void* self, float x, float y, void* result);
VOIDCSFML_API transform_translate_UU2(void* self, void* offset, void* result);
VOIDCSFML_API transform_rotate_Bw9(void* self, float angle, void* result);
VOIDCSFML_API transform_rotate_Bw9Bw9Bw9(void* self, float angle, float center_x, float center_y, void* result);
VOIDCSFML_API transform_rotate_Bw9UU2(void* self, float angle, void* center, void* result);
VOIDCSFML_API transform_scale_Bw9Bw9(void* self, float scale_x, float scale_y, void* result);
VOIDCSFML_API transform_scale_Bw9Bw9Bw9Bw9(void* self, float scale_x, float scale_y, float center_x, float center_y, void* result);
VOIDCSFML_API transform_scale_UU2(void* self, void* factors, void* result);
VOIDCSFML_API transform_scale_UU2UU2(void* self, void* factors, void* center, void* result);
VOIDCSFML_API operator_mul_FPeFPe(void* left, void* right, void* result);
VOIDCSFML_API operator_mul_FPeUU2(void* left, void* right, void* result);
VOIDCSFML_API transform_initialize_FPe(void* self, void* copy);
VOIDCSFML_API renderstates_initialize(void* self);
VOIDCSFML_API renderstates_initialize_PG5(void* self, void* blend_mode);
VOIDCSFML_API renderstates_initialize_FPe(void* self, void* transform);
VOIDCSFML_API renderstates_initialize_MXd(void* self, void* texture);
VOIDCSFML_API renderstates_initialize_8P6(void* self, void* shader);
VOIDCSFML_API renderstates_initialize_PG5FPeMXd8P6(void* self, void* blend_mode, void* transform, void* texture, void* shader);
VOIDCSFML_API renderstates_setblendmode_CPE(void* self, void* blend_mode);
VOIDCSFML_API renderstates_settransform_lbe(void* self, void* transform);
VOIDCSFML_API renderstates_settexture_MXd(void* self, void* texture);
VOIDCSFML_API renderstates_setshader_8P6(void* self, void* shader);
VOIDCSFML_API renderstates_initialize_mi4(void* self, void* copy);
VOIDCSFML_API transformable_initialize(void* self);
VOIDCSFML_API transformable_finalize(void* self);
VOIDCSFML_API transformable_setposition_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API transformable_setposition_UU2(void* self, void* position);
VOIDCSFML_API transformable_setrotation_Bw9(void* self, float angle);
VOIDCSFML_API transformable_setscale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API transformable_setscale_UU2(void* self, void* factors);
VOIDCSFML_API transformable_setorigin_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API transformable_setorigin_UU2(void* self, void* origin);
VOIDCSFML_API transformable_getposition(void* self, void* result);
VOIDCSFML_API transformable_getrotation(void* self, float* result);
VOIDCSFML_API transformable_getscale(void* self, void* result);
VOIDCSFML_API transformable_getorigin(void* self, void* result);
VOIDCSFML_API transformable_move_Bw9Bw9(void* self, float offset_x, float offset_y);
VOIDCSFML_API transformable_move_UU2(void* self, void* offset);
VOIDCSFML_API transformable_rotate_Bw9(void* self, float angle);
VOIDCSFML_API transformable_scale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API transformable_scale_UU2(void* self, void* factor);
VOIDCSFML_API transformable_gettransform(void* self, void* result);
VOIDCSFML_API transformable_getinversetransform(void* self, void* result);
VOIDCSFML_API transformable_initialize_dkg(void* self, void* copy);
VOIDCSFML_API color_initialize(void* self);
VOIDCSFML_API color_initialize_9yU9yU9yU9yU(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);
VOIDCSFML_API color_initialize_saL(void* self, uint32_t color);
VOIDCSFML_API color_tointeger(void* self, uint32_t* result);
VOIDCSFML_API color_setr_9yU(void* self, uint8_t r);
VOIDCSFML_API color_setg_9yU(void* self, uint8_t g);
VOIDCSFML_API color_setb_9yU(void* self, uint8_t b);
VOIDCSFML_API color_seta_9yU(void* self, uint8_t a);
VOIDCSFML_API operator_eq_QVeQVe(void* left, void* right, unsigned char* result);
VOIDCSFML_API operator_ne_QVeQVe(void* left, void* right, unsigned char* result);
VOIDCSFML_API operator_add_QVeQVe(void* left, void* right, void* result);
VOIDCSFML_API operator_sub_QVeQVe(void* left, void* right, void* result);
VOIDCSFML_API operator_mul_QVeQVe(void* left, void* right, void* result);
VOIDCSFML_API color_initialize_QVe(void* self, void* copy);
VOIDCSFML_API vertex_initialize(void* self);
VOIDCSFML_API vertex_initialize_UU2(void* self, void* position);
VOIDCSFML_API vertex_initialize_UU2QVe(void* self, void* position, void* color);
VOIDCSFML_API vertex_initialize_UU2UU2(void* self, void* position, void* tex_coords);
VOIDCSFML_API vertex_initialize_UU2QVeUU2(void* self, void* position, void* color, void* tex_coords);
VOIDCSFML_API vertex_setposition_llt(void* self, void* position);
VOIDCSFML_API vertex_setcolor_9qU(void* self, void* color);
VOIDCSFML_API vertex_settexcoords_llt(void* self, void* tex_coords);
VOIDCSFML_API vertex_initialize_Y3J(void* self, void* copy);
VOIDCSFML_API vertexarray_initialize(void* self);
VOIDCSFML_API vertexarray_initialize_u9wvgv(void* self, int type, size_t vertex_count);
VOIDCSFML_API vertexarray_getvertexcount(void* self, size_t* result);
VOIDCSFML_API vertexarray_operator_indexset_vgvpCR(void* self, size_t index, void* value, void* result);
VOIDCSFML_API vertexarray_operator_index_vgv(void* self, size_t index, void* result);
VOIDCSFML_API vertexarray_clear(void* self);
VOIDCSFML_API vertexarray_resize_vgv(void* self, size_t vertex_count);
VOIDCSFML_API vertexarray_append_Y3J(void* self, void* vertex);
VOIDCSFML_API vertexarray_setprimitivetype_u9w(void* self, int type);
VOIDCSFML_API vertexarray_getprimitivetype(void* self, int* result);
VOIDCSFML_API vertexarray_getbounds(void* self, void* result);
VOIDCSFML_API vertexarray_draw_kb9RoT(void* self, void* target, void* states);
VOIDCSFML_API vertexarray_draw_fqURoT(void* self, void* target, void* states);
VOIDCSFML_API vertexarray_draw_Xk1RoT(void* self, void* target, void* states);
VOIDCSFML_API vertexarray_initialize_EXB(void* self, void* copy);
VOIDCSFML_API (*shape_getpointcount_callback)(void*, size_t*);
VOIDCSFML_API (*shape_getpoint_callback)(void*, size_t, void*);
VOIDCSFML_API shape_finalize(void* self);
VOIDCSFML_API shape_settexture_MXdGZq(void* self, void* texture, unsigned char reset_rect);
VOIDCSFML_API shape_settexturerect_2k1(void* self, void* rect);
VOIDCSFML_API shape_setfillcolor_QVe(void* self, void* color);
VOIDCSFML_API shape_setoutlinecolor_QVe(void* self, void* color);
VOIDCSFML_API shape_setoutlinethickness_Bw9(void* self, float thickness);
VOIDCSFML_API shape_gettexture(void* self, void** result);
VOIDCSFML_API shape_gettexturerect(void* self, void* result);
VOIDCSFML_API shape_getfillcolor(void* self, void* result);
VOIDCSFML_API shape_getoutlinecolor(void* self, void* result);
VOIDCSFML_API shape_getoutlinethickness(void* self, float* result);
VOIDCSFML_API shape_getlocalbounds(void* self, void* result);
VOIDCSFML_API shape_getglobalbounds(void* self, void* result);
VOIDCSFML_API shape_initialize(void* self);
VOIDCSFML_API shape_update(void* self);
VOIDCSFML_API shape_setposition_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API shape_setposition_UU2(void* self, void* position);
VOIDCSFML_API shape_setrotation_Bw9(void* self, float angle);
VOIDCSFML_API shape_setscale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API shape_setscale_UU2(void* self, void* factors);
VOIDCSFML_API shape_setorigin_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API shape_setorigin_UU2(void* self, void* origin);
VOIDCSFML_API shape_getposition(void* self, void* result);
VOIDCSFML_API shape_getrotation(void* self, float* result);
VOIDCSFML_API shape_getscale(void* self, void* result);
VOIDCSFML_API shape_getorigin(void* self, void* result);
VOIDCSFML_API shape_move_Bw9Bw9(void* self, float offset_x, float offset_y);
VOIDCSFML_API shape_move_UU2(void* self, void* offset);
VOIDCSFML_API shape_rotate_Bw9(void* self, float angle);
VOIDCSFML_API shape_scale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API shape_scale_UU2(void* self, void* factor);
VOIDCSFML_API shape_gettransform(void* self, void* result);
VOIDCSFML_API shape_getinversetransform(void* self, void* result);
VOIDCSFML_API shape_draw_kb9RoT(void* self, void* target, void* states);
VOIDCSFML_API shape_draw_fqURoT(void* self, void* target, void* states);
VOIDCSFML_API shape_draw_Xk1RoT(void* self, void* target, void* states);
VOIDCSFML_API shape_initialize_r5K(void* self, void* copy);
VOIDCSFML_API circleshape_initialize_Bw9vgv(void* self, float radius, size_t point_count);
VOIDCSFML_API circleshape_setradius_Bw9(void* self, float radius);
VOIDCSFML_API circleshape_getradius(void* self, float* result);
VOIDCSFML_API circleshape_setpointcount_vgv(void* self, size_t count);
VOIDCSFML_API circleshape_getpointcount(void* self, size_t* result);
VOIDCSFML_API circleshape_getpoint_vgv(void* self, size_t index, void* result);
VOIDCSFML_API circleshape_settexture_MXdGZq(void* self, void* texture, unsigned char reset_rect);
VOIDCSFML_API circleshape_settexturerect_2k1(void* self, void* rect);
VOIDCSFML_API circleshape_setfillcolor_QVe(void* self, void* color);
VOIDCSFML_API circleshape_setoutlinecolor_QVe(void* self, void* color);
VOIDCSFML_API circleshape_setoutlinethickness_Bw9(void* self, float thickness);
VOIDCSFML_API circleshape_gettexture(void* self, void** result);
VOIDCSFML_API circleshape_gettexturerect(void* self, void* result);
VOIDCSFML_API circleshape_getfillcolor(void* self, void* result);
VOIDCSFML_API circleshape_getoutlinecolor(void* self, void* result);
VOIDCSFML_API circleshape_getoutlinethickness(void* self, float* result);
VOIDCSFML_API circleshape_getlocalbounds(void* self, void* result);
VOIDCSFML_API circleshape_getglobalbounds(void* self, void* result);
VOIDCSFML_API circleshape_setposition_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API circleshape_setposition_UU2(void* self, void* position);
VOIDCSFML_API circleshape_setrotation_Bw9(void* self, float angle);
VOIDCSFML_API circleshape_setscale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API circleshape_setscale_UU2(void* self, void* factors);
VOIDCSFML_API circleshape_setorigin_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API circleshape_setorigin_UU2(void* self, void* origin);
VOIDCSFML_API circleshape_getposition(void* self, void* result);
VOIDCSFML_API circleshape_getrotation(void* self, float* result);
VOIDCSFML_API circleshape_getscale(void* self, void* result);
VOIDCSFML_API circleshape_getorigin(void* self, void* result);
VOIDCSFML_API circleshape_move_Bw9Bw9(void* self, float offset_x, float offset_y);
VOIDCSFML_API circleshape_move_UU2(void* self, void* offset);
VOIDCSFML_API circleshape_rotate_Bw9(void* self, float angle);
VOIDCSFML_API circleshape_scale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API circleshape_scale_UU2(void* self, void* factor);
VOIDCSFML_API circleshape_gettransform(void* self, void* result);
VOIDCSFML_API circleshape_getinversetransform(void* self, void* result);
VOIDCSFML_API circleshape_draw_kb9RoT(void* self, void* target, void* states);
VOIDCSFML_API circleshape_draw_fqURoT(void* self, void* target, void* states);
VOIDCSFML_API circleshape_draw_Xk1RoT(void* self, void* target, void* states);
VOIDCSFML_API circleshape_initialize_Ii7(void* self, void* copy);
VOIDCSFML_API convexshape_initialize_vgv(void* self, size_t point_count);
VOIDCSFML_API convexshape_setpointcount_vgv(void* self, size_t count);
VOIDCSFML_API convexshape_getpointcount(void* self, size_t* result);
VOIDCSFML_API convexshape_setpoint_vgvUU2(void* self, size_t index, void* point);
VOIDCSFML_API convexshape_getpoint_vgv(void* self, size_t index, void* result);
VOIDCSFML_API convexshape_settexture_MXdGZq(void* self, void* texture, unsigned char reset_rect);
VOIDCSFML_API convexshape_settexturerect_2k1(void* self, void* rect);
VOIDCSFML_API convexshape_setfillcolor_QVe(void* self, void* color);
VOIDCSFML_API convexshape_setoutlinecolor_QVe(void* self, void* color);
VOIDCSFML_API convexshape_setoutlinethickness_Bw9(void* self, float thickness);
VOIDCSFML_API convexshape_gettexture(void* self, void** result);
VOIDCSFML_API convexshape_gettexturerect(void* self, void* result);
VOIDCSFML_API convexshape_getfillcolor(void* self, void* result);
VOIDCSFML_API convexshape_getoutlinecolor(void* self, void* result);
VOIDCSFML_API convexshape_getoutlinethickness(void* self, float* result);
VOIDCSFML_API convexshape_getlocalbounds(void* self, void* result);
VOIDCSFML_API convexshape_getglobalbounds(void* self, void* result);
VOIDCSFML_API convexshape_setposition_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API convexshape_setposition_UU2(void* self, void* position);
VOIDCSFML_API convexshape_setrotation_Bw9(void* self, float angle);
VOIDCSFML_API convexshape_setscale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API convexshape_setscale_UU2(void* self, void* factors);
VOIDCSFML_API convexshape_setorigin_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API convexshape_setorigin_UU2(void* self, void* origin);
VOIDCSFML_API convexshape_getposition(void* self, void* result);
VOIDCSFML_API convexshape_getrotation(void* self, float* result);
VOIDCSFML_API convexshape_getscale(void* self, void* result);
VOIDCSFML_API convexshape_getorigin(void* self, void* result);
VOIDCSFML_API convexshape_move_Bw9Bw9(void* self, float offset_x, float offset_y);
VOIDCSFML_API convexshape_move_UU2(void* self, void* offset);
VOIDCSFML_API convexshape_rotate_Bw9(void* self, float angle);
VOIDCSFML_API convexshape_scale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API convexshape_scale_UU2(void* self, void* factor);
VOIDCSFML_API convexshape_gettransform(void* self, void* result);
VOIDCSFML_API convexshape_getinversetransform(void* self, void* result);
VOIDCSFML_API convexshape_draw_kb9RoT(void* self, void* target, void* states);
VOIDCSFML_API convexshape_draw_fqURoT(void* self, void* target, void* states);
VOIDCSFML_API convexshape_draw_Xk1RoT(void* self, void* target, void* states);
VOIDCSFML_API convexshape_initialize_Ydx(void* self, void* copy);
VOIDCSFML_API glyph_initialize(void* self);
VOIDCSFML_API glyph_setadvance_Bw9(void* self, float advance);
VOIDCSFML_API glyph_setbounds_5MC(void* self, void* bounds);
VOIDCSFML_API glyph_settexturerect_POq(void* self, void* texture_rect);
VOIDCSFML_API glyph_initialize_UlF(void* self, void* copy);
VOIDCSFML_API image_initialize(void* self);
VOIDCSFML_API image_finalize(void* self);
VOIDCSFML_API image_create_emSemSQVe(void* self, unsigned int width, unsigned int height, void* color);
VOIDCSFML_API image_create_emSemS843(void* self, unsigned int width, unsigned int height, uint8_t* pixels);
VOIDCSFML_API image_loadfromfile_zkC(void* self, size_t filename_size, char* filename, unsigned char* result);
VOIDCSFML_API image_loadfrommemory_5h8vgv(void* self, void* data, size_t size, unsigned char* result);
VOIDCSFML_API image_loadfromstream_PO0(void* self, void* stream, unsigned char* result);
VOIDCSFML_API image_savetofile_zkC(void* self, size_t filename_size, char* filename, unsigned char* result);
VOIDCSFML_API image_getsize(void* self, void* result);
VOIDCSFML_API image_createmaskfromcolor_QVe9yU(void* self, void* color, uint8_t alpha);
VOIDCSFML_API image_copy_dptemSemS2k1GZq(void* self, void* source, unsigned int dest_x, unsigned int dest_y, void* source_rect, unsigned char apply_alpha);
VOIDCSFML_API image_setpixel_emSemSQVe(void* self, unsigned int x, unsigned int y, void* color);
VOIDCSFML_API image_getpixel_emSemS(void* self, unsigned int x, unsigned int y, void* result);
VOIDCSFML_API image_getpixelsptr(void* self, uint8_t** result);
VOIDCSFML_API image_fliphorizontally(void* self);
VOIDCSFML_API image_flipvertically(void* self);
VOIDCSFML_API image_initialize_dpt(void* self, void* copy);
VOIDCSFML_API texture_initialize(void* self);
VOIDCSFML_API texture_finalize(void* self);
VOIDCSFML_API texture_create_emSemS(void* self, unsigned int width, unsigned int height, unsigned char* result);
VOIDCSFML_API texture_loadfromfile_zkC2k1(void* self, size_t filename_size, char* filename, void* area, unsigned char* result);
VOIDCSFML_API texture_loadfrommemory_5h8vgv2k1(void* self, void* data, size_t size, void* area, unsigned char* result);
VOIDCSFML_API texture_loadfromstream_PO02k1(void* self, void* stream, void* area, unsigned char* result);
VOIDCSFML_API texture_loadfromimage_dpt2k1(void* self, void* image, void* area, unsigned char* result);
VOIDCSFML_API texture_getsize(void* self, void* result);
VOIDCSFML_API texture_copytoimage(void* self, void* result);
VOIDCSFML_API texture_update_843(void* self, uint8_t* pixels);
VOIDCSFML_API texture_update_843emSemSemSemS(void* self, uint8_t* pixels, unsigned int width, unsigned int height, unsigned int x, unsigned int y);
VOIDCSFML_API texture_update_dpt(void* self, void* image);
VOIDCSFML_API texture_update_dptemSemS(void* self, void* image, unsigned int x, unsigned int y);
VOIDCSFML_API texture_update_JRh(void* self, void* window);
VOIDCSFML_API texture_update_JRhemSemS(void* self, void* window, unsigned int x, unsigned int y);
VOIDCSFML_API texture_setsmooth_GZq(void* self, unsigned char smooth);
VOIDCSFML_API texture_issmooth(void* self, unsigned char* result);
VOIDCSFML_API texture_setrepeated_GZq(void* self, unsigned char repeated);
VOIDCSFML_API texture_isrepeated(void* self, unsigned char* result);
VOIDCSFML_API texture_getnativehandle(void* self, unsigned int* result);
VOIDCSFML_API texture_bind_MXdK9j(void* texture, int coordinate_type);
VOIDCSFML_API texture_getmaximumsize(unsigned int* result);
VOIDCSFML_API texture_initialize_DJb(void* self, void* copy);
VOIDCSFML_API font_info_initialize(void* self);
VOIDCSFML_API font_info_getfamily(void* self, char** result);
VOIDCSFML_API font_info_setfamily_Fzm(void* self, size_t family_size, char* family);
VOIDCSFML_API font_info_initialize_HPc(void* self, void* copy);
VOIDCSFML_API font_initialize(void* self);
VOIDCSFML_API font_finalize(void* self);
VOIDCSFML_API font_loadfromfile_zkC(void* self, size_t filename_size, char* filename, unsigned char* result);
VOIDCSFML_API font_loadfrommemory_5h8vgv(void* self, void* data, size_t size_in_bytes, unsigned char* result);
VOIDCSFML_API font_loadfromstream_PO0(void* self, void* stream, unsigned char* result);
VOIDCSFML_API font_getinfo(void* self, void** result);
VOIDCSFML_API font_getglyph_saLemSGZq(void* self, uint32_t code_point, unsigned int character_size, unsigned char bold, void* result);
VOIDCSFML_API font_getkerning_saLsaLemS(void* self, uint32_t first, uint32_t second, unsigned int character_size, float* result);
VOIDCSFML_API font_getlinespacing_emS(void* self, unsigned int character_size, float* result);
VOIDCSFML_API font_getunderlineposition_emS(void* self, unsigned int character_size, float* result);
VOIDCSFML_API font_getunderlinethickness_emS(void* self, unsigned int character_size, float* result);
VOIDCSFML_API font_gettexture_emS(void* self, unsigned int character_size, void** result);
VOIDCSFML_API font_initialize_7CF(void* self, void* copy);
VOIDCSFML_API rectangleshape_initialize_UU2(void* self, void* size);
VOIDCSFML_API rectangleshape_setsize_UU2(void* self, void* size);
VOIDCSFML_API rectangleshape_getsize(void* self, void* result);
VOIDCSFML_API rectangleshape_getpointcount(void* self, size_t* result);
VOIDCSFML_API rectangleshape_getpoint_vgv(void* self, size_t index, void* result);
VOIDCSFML_API rectangleshape_settexture_MXdGZq(void* self, void* texture, unsigned char reset_rect);
VOIDCSFML_API rectangleshape_settexturerect_2k1(void* self, void* rect);
VOIDCSFML_API rectangleshape_setfillcolor_QVe(void* self, void* color);
VOIDCSFML_API rectangleshape_setoutlinecolor_QVe(void* self, void* color);
VOIDCSFML_API rectangleshape_setoutlinethickness_Bw9(void* self, float thickness);
VOIDCSFML_API rectangleshape_gettexture(void* self, void** result);
VOIDCSFML_API rectangleshape_gettexturerect(void* self, void* result);
VOIDCSFML_API rectangleshape_getfillcolor(void* self, void* result);
VOIDCSFML_API rectangleshape_getoutlinecolor(void* self, void* result);
VOIDCSFML_API rectangleshape_getoutlinethickness(void* self, float* result);
VOIDCSFML_API rectangleshape_getlocalbounds(void* self, void* result);
VOIDCSFML_API rectangleshape_getglobalbounds(void* self, void* result);
VOIDCSFML_API rectangleshape_setposition_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API rectangleshape_setposition_UU2(void* self, void* position);
VOIDCSFML_API rectangleshape_setrotation_Bw9(void* self, float angle);
VOIDCSFML_API rectangleshape_setscale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API rectangleshape_setscale_UU2(void* self, void* factors);
VOIDCSFML_API rectangleshape_setorigin_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API rectangleshape_setorigin_UU2(void* self, void* origin);
VOIDCSFML_API rectangleshape_getposition(void* self, void* result);
VOIDCSFML_API rectangleshape_getrotation(void* self, float* result);
VOIDCSFML_API rectangleshape_getscale(void* self, void* result);
VOIDCSFML_API rectangleshape_getorigin(void* self, void* result);
VOIDCSFML_API rectangleshape_move_Bw9Bw9(void* self, float offset_x, float offset_y);
VOIDCSFML_API rectangleshape_move_UU2(void* self, void* offset);
VOIDCSFML_API rectangleshape_rotate_Bw9(void* self, float angle);
VOIDCSFML_API rectangleshape_scale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API rectangleshape_scale_UU2(void* self, void* factor);
VOIDCSFML_API rectangleshape_gettransform(void* self, void* result);
VOIDCSFML_API rectangleshape_getinversetransform(void* self, void* result);
VOIDCSFML_API rectangleshape_draw_kb9RoT(void* self, void* target, void* states);
VOIDCSFML_API rectangleshape_draw_fqURoT(void* self, void* target, void* states);
VOIDCSFML_API rectangleshape_draw_Xk1RoT(void* self, void* target, void* states);
VOIDCSFML_API rectangleshape_initialize_wlj(void* self, void* copy);
VOIDCSFML_API view_initialize(void* self);
VOIDCSFML_API view_initialize_WPZ(void* self, void* rectangle);
VOIDCSFML_API view_initialize_UU2UU2(void* self, void* center, void* size);
VOIDCSFML_API view_setcenter_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API view_setcenter_UU2(void* self, void* center);
VOIDCSFML_API view_setsize_Bw9Bw9(void* self, float width, float height);
VOIDCSFML_API view_setsize_UU2(void* self, void* size);
VOIDCSFML_API view_setrotation_Bw9(void* self, float angle);
VOIDCSFML_API view_setviewport_WPZ(void* self, void* viewport);
VOIDCSFML_API view_reset_WPZ(void* self, void* rectangle);
VOIDCSFML_API view_getcenter(void* self, void* result);
VOIDCSFML_API view_getsize(void* self, void* result);
VOIDCSFML_API view_getrotation(void* self, float* result);
VOIDCSFML_API view_getviewport(void* self, void* result);
VOIDCSFML_API view_move_Bw9Bw9(void* self, float offset_x, float offset_y);
VOIDCSFML_API view_move_UU2(void* self, void* offset);
VOIDCSFML_API view_rotate_Bw9(void* self, float angle);
VOIDCSFML_API view_zoom_Bw9(void* self, float factor);
VOIDCSFML_API view_gettransform(void* self, void* result);
VOIDCSFML_API view_getinversetransform(void* self, void* result);
VOIDCSFML_API view_initialize_DDi(void* self, void* copy);
VOIDCSFML_API rendertarget_clear_QVe(void* self, void* color);
VOIDCSFML_API rendertarget_setview_DDi(void* self, void* view);
VOIDCSFML_API rendertarget_getview(void* self, void** result);
VOIDCSFML_API rendertarget_getdefaultview(void* self, void** result);
VOIDCSFML_API rendertarget_getviewport_DDi(void* self, void* view, void* result);
VOIDCSFML_API rendertarget_mappixeltocoords_ufV(void* self, void* point, void* result);
VOIDCSFML_API rendertarget_mappixeltocoords_ufVDDi(void* self, void* point, void* view, void* result);
VOIDCSFML_API rendertarget_mapcoordstopixel_UU2(void* self, void* point, void* result);
VOIDCSFML_API rendertarget_mapcoordstopixel_UU2DDi(void* self, void* point, void* view, void* result);
VOIDCSFML_API rendertarget_draw_46svgvu9wmi4(void* self, void* vertices, size_t vertex_count, int type, void* states);
VOIDCSFML_API rendertarget_pushglstates(void* self);
VOIDCSFML_API rendertarget_popglstates(void* self);
VOIDCSFML_API rendertarget_resetglstates(void* self);
VOIDCSFML_API rendertexture_initialize(void* self);
VOIDCSFML_API rendertexture_finalize(void* self);
VOIDCSFML_API rendertexture_create_emSemSGZq(void* self, unsigned int width, unsigned int height, unsigned char depth_buffer, unsigned char* result);
VOIDCSFML_API rendertexture_setsmooth_GZq(void* self, unsigned char smooth);
VOIDCSFML_API rendertexture_issmooth(void* self, unsigned char* result);
VOIDCSFML_API rendertexture_setrepeated_GZq(void* self, unsigned char repeated);
VOIDCSFML_API rendertexture_isrepeated(void* self, unsigned char* result);
VOIDCSFML_API rendertexture_setactive_GZq(void* self, unsigned char active, unsigned char* result);
VOIDCSFML_API rendertexture_display(void* self);
VOIDCSFML_API rendertexture_getsize(void* self, void* result);
VOIDCSFML_API rendertexture_gettexture(void* self, void** result);
VOIDCSFML_API rendertexture_clear_QVe(void* self, void* color);
VOIDCSFML_API rendertexture_setview_DDi(void* self, void* view);
VOIDCSFML_API rendertexture_getview(void* self, void** result);
VOIDCSFML_API rendertexture_getdefaultview(void* self, void** result);
VOIDCSFML_API rendertexture_getviewport_DDi(void* self, void* view, void* result);
VOIDCSFML_API rendertexture_mappixeltocoords_ufV(void* self, void* point, void* result);
VOIDCSFML_API rendertexture_mappixeltocoords_ufVDDi(void* self, void* point, void* view, void* result);
VOIDCSFML_API rendertexture_mapcoordstopixel_UU2(void* self, void* point, void* result);
VOIDCSFML_API rendertexture_mapcoordstopixel_UU2DDi(void* self, void* point, void* view, void* result);
VOIDCSFML_API rendertexture_draw_46svgvu9wmi4(void* self, void* vertices, size_t vertex_count, int type, void* states);
VOIDCSFML_API rendertexture_pushglstates(void* self);
VOIDCSFML_API rendertexture_popglstates(void* self);
VOIDCSFML_API rendertexture_resetglstates(void* self);
VOIDCSFML_API renderwindow_initialize(void* self);
VOIDCSFML_API renderwindow_initialize_wg0bQssaLFw4(void* self, void* mode, size_t title_size, uint32_t* title, uint32_t style, void* settings);
VOIDCSFML_API renderwindow_initialize_rLQFw4(void* self, WindowHandle handle, void* settings);
VOIDCSFML_API renderwindow_finalize(void* self);
VOIDCSFML_API renderwindow_getsize(void* self, void* result);
VOIDCSFML_API renderwindow_capture(void* self, void* result);
VOIDCSFML_API renderwindow_create_wg0bQssaLFw4(void* self, void* mode, size_t title_size, uint32_t* title, uint32_t style, void* settings);
VOIDCSFML_API renderwindow_create_rLQFw4(void* self, WindowHandle handle, void* settings);
VOIDCSFML_API renderwindow_close(void* self);
VOIDCSFML_API renderwindow_isopen(void* self, unsigned char* result);
VOIDCSFML_API renderwindow_getsettings(void* self, void* result);
VOIDCSFML_API renderwindow_pollevent_YJW(void* self, void* event, unsigned char* result);
VOIDCSFML_API renderwindow_waitevent_YJW(void* self, void* event, unsigned char* result);
VOIDCSFML_API renderwindow_getposition(void* self, void* result);
VOIDCSFML_API renderwindow_setposition_ufV(void* self, void* position);
VOIDCSFML_API renderwindow_setsize_DXO(void* self, void* size);
VOIDCSFML_API renderwindow_settitle_bQs(void* self, size_t title_size, uint32_t* title);
VOIDCSFML_API renderwindow_seticon_emSemS843(void* self, unsigned int width, unsigned int height, uint8_t* pixels);
VOIDCSFML_API renderwindow_setvisible_GZq(void* self, unsigned char visible);
VOIDCSFML_API renderwindow_setverticalsyncenabled_GZq(void* self, unsigned char enabled);
VOIDCSFML_API renderwindow_setmousecursorvisible_GZq(void* self, unsigned char visible);
VOIDCSFML_API renderwindow_setkeyrepeatenabled_GZq(void* self, unsigned char enabled);
VOIDCSFML_API renderwindow_setframeratelimit_emS(void* self, unsigned int limit);
VOIDCSFML_API renderwindow_setjoystickthreshold_Bw9(void* self, float threshold);
VOIDCSFML_API renderwindow_setactive_GZq(void* self, unsigned char active, unsigned char* result);
VOIDCSFML_API renderwindow_requestfocus(void* self);
VOIDCSFML_API renderwindow_hasfocus(void* self, unsigned char* result);
VOIDCSFML_API renderwindow_display(void* self);
VOIDCSFML_API renderwindow_getsystemhandle(void* self, WindowHandle* result);
VOIDCSFML_API renderwindow_clear_QVe(void* self, void* color);
VOIDCSFML_API renderwindow_setview_DDi(void* self, void* view);
VOIDCSFML_API renderwindow_getview(void* self, void** result);
VOIDCSFML_API renderwindow_getdefaultview(void* self, void** result);
VOIDCSFML_API renderwindow_getviewport_DDi(void* self, void* view, void* result);
VOIDCSFML_API renderwindow_mappixeltocoords_ufV(void* self, void* point, void* result);
VOIDCSFML_API renderwindow_mappixeltocoords_ufVDDi(void* self, void* point, void* view, void* result);
VOIDCSFML_API renderwindow_mapcoordstopixel_UU2(void* self, void* point, void* result);
VOIDCSFML_API renderwindow_mapcoordstopixel_UU2DDi(void* self, void* point, void* view, void* result);
VOIDCSFML_API renderwindow_draw_46svgvu9wmi4(void* self, void* vertices, size_t vertex_count, int type, void* states);
VOIDCSFML_API renderwindow_pushglstates(void* self);
VOIDCSFML_API renderwindow_popglstates(void* self);
VOIDCSFML_API renderwindow_resetglstates(void* self);
VOIDCSFML_API shader_initialize(void* self);
VOIDCSFML_API shader_finalize(void* self);
VOIDCSFML_API shader_loadfromfile_zkCqL0(void* self, size_t filename_size, char* filename, int type, unsigned char* result);
VOIDCSFML_API shader_loadfromfile_zkCzkC(void* self, size_t vertex_shader_filename_size, char* vertex_shader_filename, size_t fragment_shader_filename_size, char* fragment_shader_filename, unsigned char* result);
VOIDCSFML_API shader_loadfrommemory_zkCqL0(void* self, size_t shader_size, char* shader, int type, unsigned char* result);
VOIDCSFML_API shader_loadfrommemory_zkCzkC(void* self, size_t vertex_shader_size, char* vertex_shader, size_t fragment_shader_size, char* fragment_shader, unsigned char* result);
VOIDCSFML_API shader_loadfromstream_PO0qL0(void* self, void* stream, int type, unsigned char* result);
VOIDCSFML_API shader_loadfromstream_PO0PO0(void* self, void* vertex_shader_stream, void* fragment_shader_stream, unsigned char* result);
VOIDCSFML_API shader_setparameter_zkCBw9(void* self, size_t name_size, char* name, float x);
VOIDCSFML_API shader_setparameter_zkCBw9Bw9(void* self, size_t name_size, char* name, float x, float y);
VOIDCSFML_API shader_setparameter_zkCBw9Bw9Bw9(void* self, size_t name_size, char* name, float x, float y, float z);
VOIDCSFML_API shader_setparameter_zkCBw9Bw9Bw9Bw9(void* self, size_t name_size, char* name, float x, float y, float z, float w);
VOIDCSFML_API shader_setparameter_zkCUU2(void* self, size_t name_size, char* name, void* vector);
VOIDCSFML_API shader_setparameter_zkCNzM(void* self, size_t name_size, char* name, void* vector);
VOIDCSFML_API shader_setparameter_zkCQVe(void* self, size_t name_size, char* name, void* color);
VOIDCSFML_API shader_setparameter_zkCFPe(void* self, size_t name_size, char* name, void* transform);
VOIDCSFML_API shader_setparameter_zkCDJb(void* self, size_t name_size, char* name, void* texture);
VOIDCSFML_API shader_setparameter_zkCLcV(void* self, size_t name_size, char* name);
VOIDCSFML_API shader_getnativehandle(void* self, unsigned int* result);
VOIDCSFML_API shader_bind_8P6(void* shader);
VOIDCSFML_API shader_isavailable(unsigned char* result);
VOIDCSFML_API sprite_initialize(void* self);
VOIDCSFML_API sprite_initialize_DJb(void* self, void* texture);
VOIDCSFML_API sprite_initialize_DJb2k1(void* self, void* texture, void* rectangle);
VOIDCSFML_API sprite_settexture_DJbGZq(void* self, void* texture, unsigned char reset_rect);
VOIDCSFML_API sprite_settexturerect_2k1(void* self, void* rectangle);
VOIDCSFML_API sprite_setcolor_QVe(void* self, void* color);
VOIDCSFML_API sprite_gettexture(void* self, void** result);
VOIDCSFML_API sprite_gettexturerect(void* self, void* result);
VOIDCSFML_API sprite_getcolor(void* self, void* result);
VOIDCSFML_API sprite_getlocalbounds(void* self, void* result);
VOIDCSFML_API sprite_getglobalbounds(void* self, void* result);
VOIDCSFML_API sprite_setposition_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API sprite_setposition_UU2(void* self, void* position);
VOIDCSFML_API sprite_setrotation_Bw9(void* self, float angle);
VOIDCSFML_API sprite_setscale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API sprite_setscale_UU2(void* self, void* factors);
VOIDCSFML_API sprite_setorigin_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API sprite_setorigin_UU2(void* self, void* origin);
VOIDCSFML_API sprite_getposition(void* self, void* result);
VOIDCSFML_API sprite_getrotation(void* self, float* result);
VOIDCSFML_API sprite_getscale(void* self, void* result);
VOIDCSFML_API sprite_getorigin(void* self, void* result);
VOIDCSFML_API sprite_move_Bw9Bw9(void* self, float offset_x, float offset_y);
VOIDCSFML_API sprite_move_UU2(void* self, void* offset);
VOIDCSFML_API sprite_rotate_Bw9(void* self, float angle);
VOIDCSFML_API sprite_scale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API sprite_scale_UU2(void* self, void* factor);
VOIDCSFML_API sprite_gettransform(void* self, void* result);
VOIDCSFML_API sprite_getinversetransform(void* self, void* result);
VOIDCSFML_API sprite_draw_kb9RoT(void* self, void* target, void* states);
VOIDCSFML_API sprite_draw_fqURoT(void* self, void* target, void* states);
VOIDCSFML_API sprite_draw_Xk1RoT(void* self, void* target, void* states);
VOIDCSFML_API sprite_initialize_8xu(void* self, void* copy);
VOIDCSFML_API text_initialize(void* self);
VOIDCSFML_API text_initialize_bQs7CFemS(void* self, size_t string_size, uint32_t* string, void* font, unsigned int character_size);
VOIDCSFML_API text_setstring_bQs(void* self, size_t string_size, uint32_t* string);
VOIDCSFML_API text_setfont_7CF(void* self, void* font);
VOIDCSFML_API text_setcharactersize_emS(void* self, unsigned int size);
VOIDCSFML_API text_setstyle_saL(void* self, uint32_t style);
VOIDCSFML_API text_setcolor_QVe(void* self, void* color);
VOIDCSFML_API text_getstring(void* self, uint32_t** result);
VOIDCSFML_API text_getfont(void* self, void** result);
VOIDCSFML_API text_getcharactersize(void* self, unsigned int* result);
VOIDCSFML_API text_getstyle(void* self, uint32_t* result);
VOIDCSFML_API text_getcolor(void* self, void* result);
VOIDCSFML_API text_findcharacterpos_vgv(void* self, size_t index, void* result);
VOIDCSFML_API text_getlocalbounds(void* self, void* result);
VOIDCSFML_API text_getglobalbounds(void* self, void* result);
VOIDCSFML_API text_setposition_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API text_setposition_UU2(void* self, void* position);
VOIDCSFML_API text_setrotation_Bw9(void* self, float angle);
VOIDCSFML_API text_setscale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API text_setscale_UU2(void* self, void* factors);
VOIDCSFML_API text_setorigin_Bw9Bw9(void* self, float x, float y);
VOIDCSFML_API text_setorigin_UU2(void* self, void* origin);
VOIDCSFML_API text_getposition(void* self, void* result);
VOIDCSFML_API text_getrotation(void* self, float* result);
VOIDCSFML_API text_getscale(void* self, void* result);
VOIDCSFML_API text_getorigin(void* self, void* result);
VOIDCSFML_API text_move_Bw9Bw9(void* self, float offset_x, float offset_y);
VOIDCSFML_API text_move_UU2(void* self, void* offset);
VOIDCSFML_API text_rotate_Bw9(void* self, float angle);
VOIDCSFML_API text_scale_Bw9Bw9(void* self, float factor_x, float factor_y);
VOIDCSFML_API text_scale_UU2(void* self, void* factor);
VOIDCSFML_API text_gettransform(void* self, void* result);
VOIDCSFML_API text_getinversetransform(void* self, void* result);
VOIDCSFML_API text_draw_kb9RoT(void* self, void* target, void* states);
VOIDCSFML_API text_draw_fqURoT(void* self, void* target, void* states);
VOIDCSFML_API text_draw_Xk1RoT(void* self, void* target, void* states);
VOIDCSFML_API text_initialize_clM(void* self, void* copy);
#endif
