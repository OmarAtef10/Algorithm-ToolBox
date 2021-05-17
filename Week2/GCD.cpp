#include <iostream>

int gcd_naive(int a, int b) {
    int current_gcd = 1;
    for (int d = 2; d <= a && d <= b; d++) {
        if (a % d == 0 && b % d == 0) {
            if (d > current_gcd) {
                current_gcd = d;
            }
        }
    }
    return current_gcd;
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

int main() {
    int a, b;
    std::cin >> a >> b;
    //std::cout<<gcd_naive(a,b)<<std::endl;
    std::cout <<GCD_Fast(a, b) << std::endl;
    return 0;
}
