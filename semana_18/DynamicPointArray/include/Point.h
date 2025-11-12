#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(int _x,int _y);

        void print() const;
        void SetPoint(int _x, int _y);
        ~Point();

    private:
        int x;
        int y;
};

#endif // POINT_H
