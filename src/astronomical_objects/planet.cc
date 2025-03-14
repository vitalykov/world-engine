#include "astronomical_objects/planet.h"

Planet::Planet(double radius, Star* star, double distance_to_star) {
    radius_ = radius;
    star_ = star;
    distance_to_star_ = distance_to_star;
}
