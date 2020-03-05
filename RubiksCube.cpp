#include "RubiksCube.h"

RubiksCube::RubiksCube()
{

}

RubiksCube::~RubiksCube()
{

}


void RubiksCube::RotateLeftC()
{
    char Temp[3] = {0};
    Temp[0] = Front[0][2];
    Temp[1] = Front[1][2];
    Temp[2] = Front[2][2];

    Front[0][2] = Bottom[0][2];
    Front[1][2] = Bottom[1][2];
    Front[2][2] = Bottom[2][2];

    Bottom[0][2] = Back[0][2];
    Bottom[1][2] = Back[1][2];
    Bottom[2][2] = Back[2][2];

    Back[0][2] = Top[0][2];
    Back[1][2] = Top[1][2];
    Back[2][2] = Top[2][2];

    Top[0][2] = Temp[0];
    Top[1][2] = Temp[1];
    Top[2][2] = Temp[2];
}

void RubiksCube::RotateLeftAC()
{

}

void RubiksCube::RotateRightC()
{
    char Temp[3] = {0};
    Temp[0] = Front[0][2];
    Temp[1] = Front[1][2];
    Temp[2] = Front[2][2];

    Front[0][2] = Bottom[0][2];
    Front[1][2] = Bottom[1][2];
    Front[2][2] = Bottom[2][2];

    Bottom[0][2] = Back[0][2];
    Bottom[1][2] = Back[1][2];
    Bottom[2][2] = Back[2][2];

    Back[0][2] = Top[0][2];
    Back[1][2] = Top[1][2];
    Back[2][2] = Top[2][2];

    Top[0][2] = Temp[0];
    Top[1][2] = Temp[1];
    Top[2][2] = Temp[2];
}

void RubiksCube::RotateRightAC()
{
    char Temp[3] = {0};
    Temp[0] = Front[0][2];
    Temp[1] = Front[1][2];
    Temp[2] = Front[2][2];

    Front[0][2] = Top[0][2];
    Front[1][2] = Top[1][2];
    Front[2][2] = Top[2][2];

    Top[0][2] = Back[0][2];
    Top[1][2] = Back[1][2];
    Top[2][2] = Back[2][2];

    Back[0][2] = Bottom[0][2];
    Back[1][2] = Bottom[1][2];
    Back[2][2] = Bottom[2][2];

    Bottom[0][2] = Temp[0];
    Bottom[1][2] = Temp[1];
    Bottom[2][2] = Temp[2];
}


void RubiksCube::RotateCenterC()
{

}

void RubiksCube::RotateCenterAC()
{

}


void RubiksCube::RotateTopC()
{

}

void RubiksCube::RotateTopAC()
{

}


void RubiksCube::RotateBottomC()
{

}

void RubiksCube::RotateBottomAC()
{

}


void RubiksCube::RotateMidC()
{

}

void RubiksCube::RotateMidAC()
{

}


void RubiksCube::RotateS1C()
{

}

void RubiksCube::RotateS1AC()
{

}


void RubiksCube::RotateS2C()
{

}

void RubiksCube::RotateS2AC()
{

}


void RubiksCube::RotateS3C()
{

}

void RubiksCube::RotateS3AC()
{

}
