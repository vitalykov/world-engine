#ifndef WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_
#define WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_

typedef double Coordinate; /* metres */

/* (x, y, z) point */
struct Position {
    Coordinate x;
    Coordinate y;
    Coordinate z;
};

typedef double Length;       /* metres */
typedef double Time;         /* seconds */
typedef double Temperature;  /* kelvins */
typedef double Mass;         /* kilograms */
typedef double Amount;       /* moles */
typedef double Energy;       /* joules */
typedef double Power;        /* watts */
typedef double Force;        /* newtons */
typedef double Pressure;     /* pascals */
typedef double Angle;        /* radians */
typedef double Area;         /* m^2 */
typedef double Volume;       /* m^3 */
typedef double Velocity;     /* m / s */
typedef double Acceleration; /* m / s^2 */

#endif  // WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_
