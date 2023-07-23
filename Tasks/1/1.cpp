#include <iostream>
#include <vector>

void Сompletion(int* vec, const size_t& n)
{
    for(size_t i = 0; i < n ; ++i)
    {
        vec[i] = i + 1;
    }
}

int main()
{
    int n = 10; 
    //std::cin >> n;

    int * vec = new int[n];

    Сompletion(vec, n);
    
    for(size_t i = 0; i < n ; ++i)
    {
        std::cout << vec[i] << ' ';
    }

    delete[] vec;
}