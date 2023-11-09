class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx == fx && sy == fy && t == 1) return false;
        if(sx == fx && sy == fy && (t > 1 || t == 0)) return true;
        int height = abs(sy-fy);
        int width = abs(sx-fx);
        int diagnol = abs(height - width);
        return (min(height, width) + diagnol) <= t;  
    }
};