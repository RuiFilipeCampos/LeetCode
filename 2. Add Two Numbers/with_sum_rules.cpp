
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;



class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {


            unordered_map<int, int> hash_table; 
            
            int index;
            int i = 0;
            
            // one solution is guaranteed -> loop will be brocken by return
            while (1){
                
                // need the index of a value `targets - nums[i]`
                index = hash_table[target - nums[i]];
                
                if (index == 0){  // no such index
                    hash_table[nums[i]] = i + 1; // store the value (nums is being recreated)
                }else{ // index has been found
                    return {i, index - 1};
                };         
                
                ++i;
            };
            

           return {0, 0};
        };       
};


/** Comments:
 * 
 * I do not see any way of making this
 * branchless.
 * */

