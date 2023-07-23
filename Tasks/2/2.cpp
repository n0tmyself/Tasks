#include <iostream>
#include <vector>

void Сompletion(int** vec, const size_t& n, const size_t& m)
{
    int k = 1;

    for(size_t i = 0; i < n ; ++i)
    {
        for(size_t j = 0; j < m ; ++j)
        {
            vec[i][j] = k;
            ++k;
        }
    }
}

int main(){
    size_t n, m;
    std::cin >> n >> m;

    int ** vec = new int * [n];
    for(size_t i = 0; i < n; ++i)
    {
        vec[i] = new int[m];
    }

    Сompletion(vec, n, m);

    for(size_t i = 0; i < n ; ++i)
    {
        for(size_t j = 0; j < m; ++j)
        {
            if(vec[i][j] < 10)
            {
                std::cout << ' ';
            }
            std::cout << vec[i][j] << ' ';
        }
        std::cout << "\n";
    }
    
    for(size_t i = 0; i < n; ++i)
    {
        delete [] vec[i];
    }
    delete [] vec;       
}