#include <iostream>

#ifndef CMATRIX_H
#define CMATRIX_H


class CMatrix{
private:
    int m_N;
    int** m_ppMatrix;

protected:
public:
    explicit CMatrix(int  m_N);
    void FillSnake();
    void Print();
    ~CMatrix();
};

#endif
