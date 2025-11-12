#ifndef DYNAMICPOINTARRAY_H
#define DYNAMICPOINTARRAY_H
#include "Point.h"

class DynamicPointArray
{
    public:
        DynamicPointArray();
        DynamicPointArray(Point arr[], int sizeArray);
        DynamicPointArray(DynamicPointArray &o);

        int getSize() const;
        void print() const;

        void Push_back_();
        void insert_();
        void remove_();

        ~DynamicPointArray();

    private:
        int * data;
        int sizeArray
};

#endif // DYNAMICPOINTARRAY_H
