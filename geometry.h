/*
    A library for geometric functions
*/

#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "core.h"

//Rect CorrectRect2(Rect rect, int maxWidth, int maxHeight);
Rect correct_rect(Rect rect, int maxWidth, int maxHeight);
Rect get_intersection_rect(Rect a, Rect b);
vec2 correct_start_pos(Rect rect, vec2 pos);
Rect correct_rect_custom(Rect rect, int minX, int minY, int maxX, int maxY);
Rect correct_rect_fully(Rect rect, int maxWidth, int maxHeight);
Rect combine_rects(Rect a, Rect b);

#endif