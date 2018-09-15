#ifndef VECTOR_H
#define VECTOR_H

template <typename Tr>
class Vector {
    public:
        typedef typename Tr::T T;
        typedef typename Tr::Operation Operation;
             
    private:
        T* data;
        int dataSize;

        int dimensions;
        int* dimensionSizes;

    public:
        Vector() : data(nullptr) {};
             
        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes) {
            int total=1;
            for(int i=0;i<dimensions;i++){
                total=total*dimensionSizes[i];
            }
            int data[total];
        }
             
        void set(T datum, int* coordinates){
            Operation op;
            data[op(coordinates,dimensionSizes,dimensions)] = datum;
        }
             
        T get(int* coordinates){
            Operation op;
            return data[op(coordinates,dimensionSizes,dimensions)] ;

        }
};

#endif
