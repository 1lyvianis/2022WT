#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int s = (a + b + c) / 2;
    printf("%d\n", s * (s - a) * (s - b) * (s - c));
    return 0;
}