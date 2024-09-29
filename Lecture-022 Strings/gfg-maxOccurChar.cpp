// Maximum Occuring Character
// link:https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        int number;
        
        //count character how much time present ina string
        for(int i=0;i<str.length(); i++){
            char ch = str[i];
            number =  ch - 'a';
            arr[number]++;
            
        }
        
        // print maximun no of character
        int maxi = -1;
        int ans;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                maxi = arr[i];
                ans= i;
            }
        }
        
        return ans+'a';
        
        
    }

};
