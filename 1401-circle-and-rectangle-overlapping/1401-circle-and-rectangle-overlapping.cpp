class Solution {
public:
    bool checkOverlap(int r, int x, int y, int x1, int y1, int x2, int y2) {
        // base case
        // 1 if whole circle is inside the square
            if(y-r>y1 && y+r<y2 && x-r>x1 && x+r<x2  )return true;
        // 2 if whole square is inside the circle
        if(sqrt((x1 - x) * (x1 - x)  + (y2 - y) * (y2 - y))<=r && sqrt((x2 - x) *(x2 - x)  + (y2 - y) *(y2 - y) ) <= r && sqrt((x1 - x) *(x1 - x) + (y1 - y) * (y1 - y)) <= r && sqrt((x2 - x) *(x2 - x) + (y1 - y) * (y1 - y) ) <= r)return true;
            

        // (x1,y2),(x2,y2),(x1,y1),(x2,y1)
        int minX = 0;
        int minY = 0;
        double dist = INT_MAX;
        if (sqrt((x1 - x) * (x1 - x)  + (y2 - y) * (y2 - y)) < dist) {
            minX = x1;
            minY = y2;
            dist = sqrt((x1 - x) * (x1 - x) + (y2 - y) * (y2 - y));
        }
        if (sqrt((x2 - x) *(x2 - x)  + (y2 - y) *(y2 - y) ) < dist) {
            minX = x2;
            minY = y2;
            dist = sqrt((x2 - x) *(x2 - x) + (y2 - y) * (y2 - y) );
        }
        if (sqrt((x1 - x) *(x1 - x) + (y1 - y) * (y1 - y)) < dist) {
            minX = x1;
            minY = y1;
            dist = sqrt((x1 - x) *(x1 - x) + (y1 - y) *(y1 - y));
        }
        if (sqrt((x2 - x) *(x2 - x) + (y1 - y) * (y1 - y) ) < dist) {
            minX = x2;
            minY = y1;
            dist = sqrt((x2 - x) *(x2 - x) + (y1 - y) * (y1 - y) );
        }
        // left/right edges
if (x >= x1 && x <= x2) {
    if (abs(y - y1) <= r || abs(y - y2) <= r)
        return true;
}

// top/bottom edges
if (y >= y1 && y <= y2) {
    if (abs(x - x1) <= r || abs(x - x2) <= r)
        return true;
}

        if(dist<=r)return true;
        return false;
    }
};