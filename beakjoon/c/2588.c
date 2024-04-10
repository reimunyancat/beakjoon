#include <stdio.h>

int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a*(b%10));
    printf("%lld\n", a*((b/10)%10));
    printf("%lld\n", a*(b/100));
    printf("%lld", a*b);
    
    return 0;
}
