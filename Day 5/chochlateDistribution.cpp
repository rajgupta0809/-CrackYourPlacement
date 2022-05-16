class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin() , a.end());
        

        long long minimum = LLONG_MAX;
        for(long long i=0;(i+m-1)<n;i++){
            if(a[m+i-1] - a[i] < minimum){
                minimum = a[m+i-1]-a[i];
            }
        }
        return minimum;
    }   
};