#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    printf("%s\n", n % 2 == 0 ? "Even" : "Odd");
    return 0;
}

