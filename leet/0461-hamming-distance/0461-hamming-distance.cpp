class Solution {
public:
    int hammingDistance(int x, int y) {
    int result=x^y;
    int dis=0;
    while(result>0){
        result&=(result-1);
        dis++;
    }
    return dis;
}
};