#include "CMatrix.h"

CMatrix::CMatrix(int N)
    : m_N(N)
{
    //m_N = N;
    m_ppMatrix = new int* [m_N];
    for(size_t i = 0; i < m_N; ++i)
    {
        m_ppMatrix[i] = new int [m_N];
    }
}

void CMatrix::FillSnake(int ** m_ppMatrix, int m_N)
{
    int k = 1;
    size_t i = 0;
    size_t j = 0;

    int dir = 1;

    int flag = (m_N + 1) * m_N / 2;

    for(k = 1; k <= m_N*m_N; ++k){
        m_ppMatrix[i][j] = k;

        size_t next_i = i + dir;
        size_t next_j = j - dir;

        if(0 <= next_i and next_i < m_N and 0 <= next_j and next_j < m_N){
            i = next_i;
            j = next_j;
        } else {
            if(k < flag){
                dir *= -1;
                if(dir == -1){
                    i += 1;
                } else{
                    j += 1;
                }
            } else{
                dir *= -1;
                if(dir == 1){
                    i += 1;
                } else{
                    j += 1;
                }                
            }

        }
    }
}

void CMatrix::Print(int** m_ppMatrix, int m_N)
{
    for(size_t i = 0; i < m_N ; ++i){
        for(size_t j = 0; j < m_N; ++j){
            if(m_ppMatrix[i][j] < 10){
                std::cout << ' ';
            }
            std::cout << m_ppMatrix[i][j] << ' ';
        }
        std::cout << "\n";
    }    
}



CMatrix::~CMatrix()
{
    for(size_t i = 0; i < m_N; ++i)
    {
        delete [] m_ppMatrix[i];
    }
    delete [] m_ppMatrix;
}