#include <stdio.h>
#include <iostream>
using namespace std;


int sort(string lhs, string rhs) {
    
    if (lhs < rhs) {
        return -1;
    }
    
    if (lhs > rhs) {
        return 1;
    }
    
    return 0;
}

void tests(void) {
   
    puts("Unit tests:");
    
    if (sort("dsafadsgsaahe5y4353wefwrgA", "dsafadsgsaahe5y4353wefwrgB") < 0) {
        puts("Test 1 passed.");
    } else {
        puts("Test 1 failed.");
    }
    
     if (sort("B", "A") > 0) {
        puts("Test 2 passed.");
    } else {
        puts("Test 2 failed.");
    }
    
    if (sort("A", "A") == 0) {
        puts("Test 3 passed.");
    } else {
        puts("Test 3 failed.");
    }
    
}