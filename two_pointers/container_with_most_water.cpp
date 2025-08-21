#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.empty()) return 0;
        
        int n = (int)height.size() -1;
        int i = 0;
        int j = n;
        int water = 0;
        int _height = 0;

        if(height[i]>height[j]){
                _height = height[j];
            }
            else {
                _height = height[i];
            }
        int maximum_amount = _height * n;

        while(i<j){
            if(height[i]>height[j]){
                _height = height[j];
            }
            else {
                _height = height[i];
            }
            int length = j-i;
            int water = _height * length;
            if(water > maximum_amount){
                maximum_amount = water;
            }

            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return maximum_amount;
    }
};