//  Duplicate In Array link:https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM


int findDuplicate(vector<int> &arr) 
{
    //XOR in all array element
    int ans=0;
    for(int i=0; i<arr.size();i++){
        ans=ans^arr[i];

    }
    //xor 1 to (n-1)

    for(int i=1; i<arr.size();i++){
        ans=ans^i;
    }

    return ans;
	
}
