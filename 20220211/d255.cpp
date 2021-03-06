#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int a, int b);
int main(){
    int n;
    while(scanf("%d",&n) && n != 0)
    {
        int g = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                g += gcd(i, j);
            }
        }
        printf("%d\n", g);
    }

    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a % b);
}