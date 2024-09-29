// Question Links:
// - Bubble Sort: https://bit.ly/3pvCTz9 


#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    int swapped = false; //optimised case 
    
    for(int i=1; i<n; i++){
        //round 1 to n-1
        for(int j=0; j<n-i; j++){

            //process till n-1th index
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped=true;
            }

        }
        if(swapped==false){
            break;
        }
    }
}