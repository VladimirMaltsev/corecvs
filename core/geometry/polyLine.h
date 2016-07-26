#ifndef POLYLINE_H
#define POLYLINE_H
#include "vector3d.h"
#include "rgbColor.h"

#define MAXD 6.0
#define MAXDX 2.0

namespace corecvs {

class PolyLine{
public:
    vector<Vector3dd> points;
    vector<RGBColor> colors;


  //  vector<int32_t> breaks;
  //  vector<int32_t> begins;

    PolyLine(const vector<Vector3dd> &p, const vector<RGBColor> &colors = vector<RGBColor>());
    PolyLine(){}

    Vector2d32 closestPointsGenerate(PolyLine p_line, int n1, int n2);

    void clear();

};

}
#endif // POLYLINE_H
