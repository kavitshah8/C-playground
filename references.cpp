//
//  references.cpp
//  Working
//
//  Created by kashah on 11/27/19.
//  Copyright © 2019 kashah. All rights reserved.
//

#include "references.hpp"

int main() {
    int x = 20, y = 20;
    printf("%d \n", callByReference(&x, &y));
    printf("%d \n", callByReference(x, y));
    return 0;
}

int callByReference(int *i, int *j) {
    return *i + *j;
}

int callByReference(int &a, int &b) {
    return a + b;
}
