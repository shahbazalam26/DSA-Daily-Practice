//  Square Root of a number
// link:https://www.naukri.com/code360/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM

int floorSqrt(int n)
{   

    long long int binarySearch(int n);
    return binarySearch(n);
}

long long int binarySearch(int n){

    int start=0;
    int end=n;
    long long int mid=start + (end-start)/2;
    long long int ans=-1;

    while(start<=end){

        long long int sq=mid*mid;
        if(sq==n){
            return mid;
        }
        else if(sq<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid=start + (end-start)/2;
    }

    return ans;
}
