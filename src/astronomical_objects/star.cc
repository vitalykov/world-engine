#include "astronomical_objects/star.h"

Star::Star(double radius, double luminosity) {
    pos_ = {.x = 0, .y = 0, .z = 0};
    radius_ = radius;
    luminosity_ = luminosity;
}