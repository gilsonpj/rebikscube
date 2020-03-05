#ifndef RUBIKSCUBEMAKER_H
#define RUBIKSCUBEMAKER_H

class RubiksCubeMaker
{
public:
    RubiksCubeMaker();
    virtual ~RubiksCubeMaker();

    void ColorCube();
    RubiksCube* GetCube();
};

#endif
