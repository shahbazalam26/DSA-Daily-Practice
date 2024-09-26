// https://leetcode.com/problems/sort-an-array/

class Solution {

private:

    void merge(vector<int>& nums,int s,int e){

        int mid=s+(e-s)/2;

        int len1 = mid-s+1;
        int len2 = e-mid;

        int *first = new int[len1];
        int *second = new int[len2];

        //copy values
        int mainArrayIndex=s;
        for(int i=0;i<len1;i++){
            first[i] = nums[mainArrayIndex++];
        }

        mainArrayIndex=mid+1;
        for(int i=0;i<len2;i++){
            second[i] = nums[mainArrayIndex++];
        }

        //merge two sorted array
        int index1 = 0;
        int index2 = 0;

        mainArrayIndex = s;

        while(index1 < len1 && index2 < len2){
            if(first[index1] > second[index2]){
                nums[mainArrayIndex++] = second[index2++];
            }
            else{
                nums[mainArrayIndex++] = first[index1++];
            }
        }
        while(index1 < len1){
            nums[mainArrayIndex++] = first[index1++];
        }
        while(index2 < len2){
            nums[mainArrayIndex++] = second[index2++];
        }


        delete []first;
        delete []second;



    }
    void mergeSort(vector<int>&nums, int s,int e){

        //base case
        if(s>=e){
            return;
        }

        int m = s + (e-s)/2;

        mergeSort(nums,s,m); //left part sort
        mergeSort(nums,m+1,e); //right part sort

        //merge two sorted array
        merge(nums,s,e);

    }
public:
    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums,0,nums.size()-1);
        return nums;
        
    }
};