#ifndef DYNAMICINTEGERARRAY_H
#define DYNAMICINTEGERARRAY_H


class DynamicIntegerArray
{
    public:
        DynamicIntegerArray();
        DynamicIntegerArray(int arr[], int sizeArray);
        DynamicIntegerArray(DynamicIntegerArray &o);

        int getSize() const;
        void print() const;

        void pushback(int val);
        void insert_(int val, int pos);
        void remove_(int pos);

        ~DynamicIntegerArray();

    private:
        int *data;
        int sizeArray;
};


#endif // DYNAMICINTEGERARRAY_H
