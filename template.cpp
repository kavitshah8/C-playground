#include <cstdio>

template <typename T>
T maxof(T &a, T &b) {
    return a > b ? a : b;
}

int main() {
    int a = 7;
    int b = 8;
    int c = maxof<int>(a, b);
    return 0;
}
