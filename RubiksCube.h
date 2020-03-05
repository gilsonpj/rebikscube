#ifndef RUBIKSCUBE_H_
#define RUBIKSCUBE_H_

#include <vector>

#include "Cube.h"

class RubiksCube
{
public:
    RubiksCube();
    virtual ~RubiksCube();

    void RotateLeftC();
    void RotateLeftAC();

    void RotateRightC();
    void RotateRightAC();

    void RotateCenterC();
    void RotateCenterAC();

    void RotateTopC();
    void RotateTopAC();

    void RotateBottomC();
    void RotateBottomAC();

    void RotateMidC();
    void RotateMidAC();

    void RotateS1C();
    void RotateS1AC();

    void RotateS2C();
    void RotateS2AC();

    void RotateS3C();
    void RotateS3AC();

private:
//    std::vector<std::vector<std::vector<Cube *>>> Sides;
    char Front[3][3] = {0};
    char Back[3][3] = {0};

    char Top[3][3] = {0};
    char Bottom[3][3] = {0};

    char Left[3][3] = {0};
    char Right[3][3] = {0};
};

#endif
