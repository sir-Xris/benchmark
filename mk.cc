#include <random>
#include <cstdio>
using namespace std;

random_device rd;
mt19937_64 seed(rd());
uniform_int_distribution<long long> unif(1ll << 63, ~0ull >> 1);

int main() {
    printf("%lld %lld\n", unif(seed), unif(seed));
    return 0;
}
