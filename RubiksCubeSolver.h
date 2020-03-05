//*****************************************************************************
//
// File: RubiksCubeSolver.h
//
// Copyright 2016 Eaton’s Cooper Power Systems, Inc.
//
// Description:
//   The RubiksCubeSolver is responsible for ?.
//
//*****************************************************************************

#ifndef RUBIKSCUBESOLVER_H_
#define RUBIKSCUBESOLVER_H_

class RubiksCubeSolver
{
public:
    RubiksCubeSolver();
    virtual ~RubiksCubeSolver();

    void SetCube(RubiksCube* Cube);

    std::vector<RubiksSolution> GetSolutions();
};

#endif
