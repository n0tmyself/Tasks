#include <iostream>
#include <vector>

int n = 2;
long l = 33;
float f = 3.1415926;
double d = 2.718281828;
char s[1024];

int main(){
    // snprintf(s, 1024, "variable n = %d", n);
    // snprintf(s, 1024, "variable l = %.3d = %X", l, l);
    // snprintf(s, 1024, "variable f = %.2f", f);
    snprintf(s, 1024, "variable d = %.3d.%.5d", int(d), (int)((d - (int)d) * 100000));
    printf("%s\n", s);
    return 0;
}
