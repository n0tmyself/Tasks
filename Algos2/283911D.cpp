#include <iostream>
#include <vector>
#include <algorithm>
// using namespace std;

int main(){
    unsigned int n;
    std::cin >> n;
    int a[n];
    for (int& it : a){
        std::cin >> it;
    }
    unsigned int k;
    std::cin >> k;
    std::vector<std::vector<int>> vec(k);
    for (int i = 0; i < k; ++i) {
        int l, r;
        std::cin >> l >> r;
        vec[i] = {l, r};
    }
    std::sort(a, a + n);
}