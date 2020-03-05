//*****************************************************************************
//
// File: RubiksSolutions.h
//
// Copyright 2016 Eaton’s Cooper Power Systems, Inc.
//
// Description:
//   The RubiksSolutions is responsible for ?.
//
//*****************************************************************************

#ifndef RUBIKSSOLUTION_H_
#define RUBIKSSOLUTION_H_

class RubiksSolution
{
public:
    RubiksSolution();
    virtual ~RubiksSolution();

    int GetTotalMoves();
    void PrintMoves();
};

#endif
