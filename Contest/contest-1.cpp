// context link: https://bit.ly/31zFssd
//question link: https://www.naukri.com/code360/contests/love-babbar-contest-l/3189127/problems/14804?leftPanelTabValue=SUBMISSION



long long appleAndCoupon(int n, int m, vector<int> arr){
   
    sort(arr.begin(),arr.end()); //first sort this
    reverse(arr.begin(),arr.end()); //foe sort in decresasing order

    int coupon = 0;

    for(int i=0; i<m-1;i++){    //add cost of m apple last cheaest is free so we count only m-1 cost
        coupon+=arr[i];
    }

    // if(m==n){   //if no of apple is no of coupon
    //     return coupon;
    // }

    if(n>m){   //if no of apple is greater then coupon
        for(int i=m;i<n;i++){ 
            coupon+=arr[i];
        }
    }
    
    return coupon;
}