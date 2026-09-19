class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int nearX = max(x1, min(xCenter, x2));
        int nearY = max(y1, min(yCenter, y2));

        int diffX = xCenter - nearX;
        int diffY = yCenter - nearY;

        return diffX * diffX + diffY * diffY <= radius * radius;
        
    }
};