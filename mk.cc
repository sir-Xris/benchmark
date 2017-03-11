#include <random>
#include <iostream>
using namespace std;

random_device seed;
uniform_int_distribution<long long> unif(1ll << 63, ~0ull >> 1);

int main() {
    cout << unif(seed) << " " << unif(seed) << endl;
    return 0;
}
