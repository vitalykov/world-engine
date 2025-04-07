#ifndef WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_
#define WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_

namespace world_engine {

typedef double Coordinate;  // metres

// (x, y, z) point
struct Point {
    Coordinate x;
    Coordinate y;
    Coordinate z;
};

typedef double Len;        // metres (m)
typedef double Time;          // seconds (s)
typedef double Temperature;   // kelvins (K)
typedef double Mass;          // kilograms (kg)
typedef double Amount;        // moles (mol)
typedef double Energy;        // joules (J)
typedef double Power;         // watts (W)
typedef double Irradiance;    // W / m^2
typedef double Force;         // newtons (N)
typedef double Pressure;      // pascals (Pa)
typedef double AngleRad;      // radians (rad)
typedef double AngleDeg;      // degrees (°)
typedef double Area;          // m^2
typedef double Volume;        // m^3
typedef double Speed;         // m / s
typedef double Acceleration;  // m / s^2

}  // namespace world_engine

#endif  // WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_