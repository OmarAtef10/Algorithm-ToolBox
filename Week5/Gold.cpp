#include <iostream>
using namespace std;
#include <vector>
int _0_1_KnapSack(int W, vector<int> val, vector<int> wt, int n) {

    vector<vector<int>>  K(n + 1,vector<int>(W + 1));
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    return K[n][W];
}

int main() {
    int n, Capas;
    cin >> Capas >> n;

    vector<int> Values(n);
    vector<int> Weights(n);
    int Temp;
    for (size_t i = 0; i < n; i++) {
        cin >> Temp;
        Values[i] = Weights[i] = Temp;
    }
    cout << _0_1_KnapSack(Capas, Values, Weights, n) << endl;
}