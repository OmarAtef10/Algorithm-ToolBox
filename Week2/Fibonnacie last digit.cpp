#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}
int Fibbo_last_digit_fast(int n){

    if (n<=1)
        return n;

    int prev=0;
    int curr=1;

    for(int i =0 ;i<n-1;i++){
        int temp=prev%10;
        prev=curr%10;
        curr=temp+curr%10;


    }
    return curr%10;


}

int main() {
    int n;
    std::cin >> n;
    int c = Fibbo_last_digit_fast(n);
    std::cout << c << '\n';
}
