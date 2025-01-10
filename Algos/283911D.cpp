#include <iostream>
// using namespace std;

int main(){
    int n;
    std::cin >> n;
    std::string s_a;
    std::cin >> s_a;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = int(s_a[i * 2]);
    }
    for(int i = 0; i < n; i++){
        std::cout << a[i] << ' ';
    }
}