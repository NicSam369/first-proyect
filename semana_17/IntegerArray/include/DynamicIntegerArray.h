#ifndef DYNAMICINTEGERARRAY_H
#define DYNAMICINTEGERARRAY_H


class DynamicIntegerArray
{
    public:
        DynamicIntegerArray();
        DynamicIntegerArray(int arr[], int sizeArray);

        int getSize() const;
        void print() const;

        void pushback(int val);

        ~DynamicIntegerArray();

    private:
        int *data;
        int sizeArray;
};

#endif // DYNAMICINTEGERARRAY_H
