#include <cstdlib>
#include <iostream>



#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {      
    int operator()(int* coordinates, int* sizes, int dimensions) {
        int c=0;
        int r=1;
        for (int i = 0;i<dimensions; i++) {
            c=c+ (coordinates[i]-1)*r;
            r=r*sizes[i];
        }

        return(c);

    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};



int main(int argc, char *argv[]) {
 //   system("pause");



    return 0;
}