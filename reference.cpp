//
//  reference.cpp
//  
//
//  Created by kashah on 11/27/19.
//

#include <stdio.h>

#include <cstdio>
using namespace std;

int callByReference(int *i, int *j) {
    return *i + *j;
}

int callByReference(int &a, int &b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    callByReference(&x, &y);
    callByReference(x, y);
    return 0;
}
