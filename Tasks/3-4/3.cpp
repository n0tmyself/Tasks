#include <iostream>
#include <vector>

void FillSnake(int** vec, const size_t& n)
{   
    int k = 1;
    size_t i = 0;
    size_t j = 0;

    int dir = 1;

    int flag = (n + 1) * n / 2;

    for(k = 1; k <= n*n; ++k){
        vec[i][j] = k;

        size_t next_i = i + dir;
        size_t next_j = j - dir;

        if(0 <= next_i and next_i < n and 0 <= next_j and next_j < n){
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

int main(){
    size_t n;
    std::cin >> n;

    int ** vec = new int * [n];
    for(size_t i = 0; i < n; ++i)
    {
        vec[i] = new int[n];
    }

    FillSnake(vec, n);
    
    for(size_t i = 0; i < n ; ++i){
        for(size_t j = 0; j < n; ++j){
            if(vec[i][j] < 10){
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