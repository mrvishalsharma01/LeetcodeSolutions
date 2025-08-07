class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPost=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0){
                nums[insertPost]=nums[i];
                insertPost++;
            }
        }
        while(insertPost < nums.size()){
            nums[insertPost++]=0;
        }
    }
};