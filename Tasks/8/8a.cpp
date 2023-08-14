#include <iostream>
#include <vector>
#include <algorithm>

void create(std::vector<int>* vec)
{
    for(size_t i = 0; i != 11; ++i)
    {
        vec->push_back(i);
    }
}

void output(std::vector<int> & vec)
{
    for(size_t i = 0; i != vec.size(); ++i)
    {
        printf("%d ", vec[i]);
    }
    std::cout << "\n";
}

void delOdd(std::vector<int>& vec)
{
    for(std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); )
    {
        if(*iter % 2 == 0) 
        {
            iter = vec.erase(iter);
        } else
        {
            ++iter;
        }
    }
}


int main()
{
    std::vector<int> vec;
    create(&vec);
    output(vec);
    delOdd(vec);
    output(vec);
    std::sort(vec.rbegin(), vec.rend());
    output(vec);
    return 0;
}