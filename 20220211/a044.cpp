#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n) == 1)
    {
        int ans = (n * n * n + 5 * n + 6) / 6;
        printf("%d\n", ans);
    }
    return 0;
}