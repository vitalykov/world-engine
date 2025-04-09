#ifndef WORLD_ENGINE_PLANET_H_
#define WORLD_ENGINE_PLANET_H_

#include "astronomical_objects/astronomical_object.h"
#include "astronomical_objects/star.h"
#include "core/physics/quantities.h"

namespace world_engine {

// Structure for initializing Planet class
struct PlanetInfo {
    Len radius;
    Star* star;
    Len distance_to_star;
    Time rotation_period;
    Time orbital_period;
    AngleRad axial_tilt;
};

// Planet which is in orbit of the star
class Planet : public AstronomicalObject {
   private:
    // The star around which the planet revolves
    Star* star_;
    Len distance_to_star_;
    // Radiant flux from the star on 1 m2 of the planet surface
    Irradiance star_irrandiance_;
    // Time of full self-rotation (360 degrees) of the planet along its axis
    Time rotation_period_;
    // Time of full revolution of the planet around the star
    Time orbital_period_;
    // Angle between z axis and the rotation axis of the planet
    AngleRad axial_tilt_;
    // Angle of the rotation of the planet
    AngleRad azimuth_;
    // Rotation axis of the planet
    Vector3D axis_;

   public:
    // Constructing the planet using `PlanetInfo` structure
    Planet(PlanetInfo* planet_info);

    inline AngleRad GetAxialTilt() { return axial_tilt_; }
    inline AngleRad GetAzimuth() { return azimuth_; }

    inline Time GetRotationPeriod() { return rotation_period_; }
    inline Time GetOrbitalPeriod() { return orbital_period_; }

    inline const Vector3D& GetAxis() { return axis_; }

    inline Irradiance GetStarIrradiance() { return star_irrandiance_; }

    // Set parameters of the planet based on current time
    void UpdateState(Time t);
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_PLANET_H_