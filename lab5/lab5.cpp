#include <iostream>

using namespace std;

double power_helper(double base, int exp) {
    double res = 1;
    for(int i = 0; i < exp; i++) {
        res = res * base;
    }
    return res;
}

double solve_recursive(int n_val, double r_val) {
    if (n_val == 0) {
        return 1;
    }
    return power_helper(r_val, n_val) + solve_recursive(n_val - 1, r_val);
}

int main() {
    int user_n;
    double user_r;

    cout << "Enter n: ";
    cin >> user_n;
    cout << "Enter r: ";
    cin >> user_r;

    double final_answer = solve_recursive(user_n, user_r);
    cout << "Result: " << final_answer << endl;

    return 0;
}
