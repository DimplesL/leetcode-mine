class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>hmap;
        // unordered_map<int, int>hamp;
        hmap.clear();
        vector<int> res;
        // for (int i=0;i<nums.size();i++){
        //     hmap[nums[i]]=i;
        // }
        // for (int i=0;i<nums.size();i++){
        //     if (hmap.find((target-nums[i]))!=hmap.end()){  //此处如果
        //         if (i<hmap[target-nums[i]]){
        //             res.push_back(i);
        //             res.push_back(hmap[target-nums[i]]);
        //             return res;
        //         }
        //         if (i>hmap[target-nums[i]]){
        //             res.push_back(hmap[target-nums[i]]);
        //             res.push_back(i);
        //             return res;
        //         }
        //     }
        // }
        
        for(int i = 0; i < nums.size(); i ++)    //  对于数组中的每个数据
        {
            //  判断target - numbers[i]在不在
            if(hmap.count(target - nums[i]))   //  如果在里面   
            {
                //  那么numbers中就存在两个数和为target
                res.push_back(hmap[target - nums[i]] ); 
                res.push_back(i);
                break;
            }

            if(hmap.count(nums[i]) != 1)
            {
                hmap[nums[i]] = i;
            }
        }
        return res;
    }
};