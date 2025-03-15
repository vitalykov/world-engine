#ifndef WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_
#define WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_

typedef double Coordinate;  /* metres */

/* (x, y, z) point */
struct Position {
    Coordinate x;
    Coordinate y;
    Coordinate z;
};

typedef double Size;  /* metres */
typedef double Time;  /* seconds */
typedef double Temperature;  /* Kelvins */
typedef double Energy;  /* Joules */

#endif  // WORLD_ENGINE_ASTRONOMICAL_OBJECTS_TYPES_H_
