#include <iostream>

long long lcm_naive(int a, int b) {
    for (long l = 1; l <= (long long) a * b; ++l)
        if (l % a == 0 && l % b == 0)
            return l;

    return (long long) a * b;
}
int GCD_Fast(int a,int b){
    int divident ,divisor;
    if(a>=b)
        divisor=a;
    else
        divisor=b;

    if(a<=b)
        divident=a;
    else
        divident=b;

    while(divisor!=0){
        int rem = divident%divisor;
        divident=divisor;
        divisor=rem;

    }
    return divident;
}

 long long LCM_fast(long long a , long long b){
    return (a*b)/GCD_Fast(a,b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    //std::cout << lcm_naive(a, b) << std::endl;
    std::cout << LCM_fast(a, b) << std::endl;
    return 0;
}
