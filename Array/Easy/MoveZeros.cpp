/******************************************************************************
        https://leetcode.com/problems/move-zeroes/
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) 
{
    int index = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            swap(nums[index],nums[i]);
            index++;
        }
    }
}

int main()
{
    vector<int> input = {0,1,0,3,12};
    moveZeroes(input);
    
    for(auto i : input)
        cout<<i<<" ";
}
