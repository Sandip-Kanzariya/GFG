class Solution {
public:

    bool double_is_int(double d){
        return floor(d) == ceil(d);
    }

    bool isPowerOfFour(int n) {

        if(n == 0) return false;
        
        return double_is_int((log10(n) / (double)log10(4)));
    }
};