#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> twoIndex;
        if(numbers.empty()){
            return twoIndex;;
        }

        int i =0;
        int n = (int)numbers.size();
        int j = n-1;
        

        while(i<j){
            int sum = numbers[i] + numbers[j];
            if(sum == target){
                twoIndex.push_back(i+1);
                twoIndex.push_back(j+1); 
                return twoIndex;   
            }
            else if(sum>target){
                j--;
            }
            else if(sum<target){
                i++;
            }
        }  
        return twoIndex;   
    }
};