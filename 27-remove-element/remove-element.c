int removeElement(int* nums, int numsSize, int val){
    int j = 0;  // pointer for next position
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            nums[j++] = nums[i];
        }
    }
    return j;  // new length of array
}
