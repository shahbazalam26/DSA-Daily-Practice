// https://bit.ly/32VA96H 

int countDistinctWays(int nStairs) {

    //base case
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    
    // int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
}
