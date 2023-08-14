#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

void create(std::list<char>* vec)
{
    for(char i = 'A'; i != 'Z'; ++i)
    {
        vec->push_back(i);
    }
}

void output(std::list<char> & vec)
{
    for(char c : vec)
    {
        printf("%c ", c);
    }
    std::cout << "\n";
}

void delOdd(std::list<char>& vec)
{
    for(std::list<char>::iterator iter = vec.begin(); iter != vec.end(); )
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

int compare(const void* a, const void* b) {
    return (*(char*)b - *(char*)a);
}

int main()
{
    std::list<char> vec;
    create(&vec);
    output(vec);
    delOdd(vec);
    output(vec);

    size_t size = vec.size();
    char* charArray = new char[size];
    std::copy(vec.begin(), vec.end(), charArray);
    qsort(charArray, size, sizeof(char), compare);
    vec.clear();
    vec.insert(vec.begin(), charArray, charArray + size);
    output(vec);
}