// 567. Permutation in String
// https://leetcode.com/problems/permutation-in-string/description/

class Solution {

private:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        

        //character count array in string 1------
        int count1[26]={0};
        int i=0;
        for( ;i<s1.length();i++){
            int index = s1[i]-'a';
            count1[index]++;
        }


        //character count array in string 2------
        int count2[26]={0};

        for(int i=0; (i<s1.length() && i<s2.length()) ;i++){
            int index = s2[i]-'a';
            count2[index]++;
        }

        // check equal or not---------
        if(checkEqual(count1, count2)){
            return 1;
        }

        //then aage ka window process krte hai
        while(i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            
            char oldChar  = s2[i-s1.length()];
            index = oldChar - 'a';
            count2[index]--;

            // check equal or not---------
            if(checkEqual(count1, count2)){
                return 1;
            }

            i++;

        }


        return 0;
    }
};