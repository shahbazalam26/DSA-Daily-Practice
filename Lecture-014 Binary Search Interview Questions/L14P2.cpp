#include<iostream>
using namespace std;

long long int sqrtN(int n){

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


double morePrecision(int n,int pricision,int tempSol){

    double ans = tempSol;
    double factor = 1;

    for(int i=0;i<pricision; i++){
        factor /= 10;
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;

}
 
int main(){

    int n;
    cout<<"Enter number:";
    cin>>n;
    int tempSol= sqrtN(n);
    cout<<"Answer is:"<<morePrecision(n,3,tempSol); //this is 3 precision 0.001


}