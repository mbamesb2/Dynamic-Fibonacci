//
//  main.cpp
//  DynamicProgramming
//
//  Created by Michael Bamesberger on 2/2/16.
//  Copyright (c) 2016 Michael Bamesberger. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
   
    
    int sizeArr = 22;
    int* fib = (int*)malloc(sizeArr * sizeof(int));
    
    
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < sizeArr; i++){
        fib[i] = fib[i-2] + fib[i - 1];
    }
    
    for (int j = 0; j < sizeArr; j++){
        
        printf("%d\n", fib[j]);
    }
    

    free(fib);
    return 0;
}

