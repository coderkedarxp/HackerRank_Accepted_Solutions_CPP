#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if(a>b && a>c)
    {
        if(a>d)
        {
            return a;
        }
        else
        {
            return d;
        }
    }
    
    if(b>c)
    {
        return b;   
    }
    else {
    {
        return c;
    }
    
    }
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

