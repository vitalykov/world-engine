#include <cmath>
// #include <iostream>
#include <cstdio>

#include "astronomical_objects/planet.h"
#include "astronomical_objects/star.h"

#define SUN_RADIUS 6.957E8 // m
#define SUN_LUMINOSITY 3.828E26 // W
#define EARTH_RADIUS 6.371E6 // m
#define EARTH_SUN_DISTANCE 1.49598023E11 // m
#define EARTH_ORBITAL_PERIOD 365.256363004 // days
#define EARTH_ROTATION_PERIOD 0.99726968 // days
#define EARTH_AXIAL_TILT 23.4392811 // deg

using namespace world_engine;

int main() {
    Star sun = Star(SUN_RADIUS, SUN_LUMINOSITY);
    PlanetInfo earth_info = {
        .radius = EARTH_RADIUS,
        .star = &sun,
        .distance_to_star = EARTH_SUN_DISTANCE,
        .rotation_period = EARTH_ROTATION_PERIOD * 24 * 3600,
        .orbital_period = EARTH_ORBITAL_PERIOD * 24 * 3600,
        .axial_tilt = EARTH_AXIAL_TILT * M_PI / 180
    };
    Planet earth = Planet(&earth_info);

    double t = 0;
    double step = 24 * 3600;

    for (size_t i = 0; i < 366; ++i) {
        earth.UpdateState(t);
        Vector3D pos = earth.GetPosition();
        std::printf("%zu) Position: (%.1lf, %.1lf, %.1lf); Distance: %.1lf\n", i, pos.x, pos.y, pos.z, pos.Length());

        t += step;
    }

    return 0;
}