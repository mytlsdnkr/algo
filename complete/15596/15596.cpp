#include <vector>
long long sum(std::vector<int> &a) {
    long long ans = 0;
    int n=a.capacity();
    int i;
    if(n<1 || n>3000000)
        return 0;
        
        for(i=0;i<n;i++){
            if(a[i]<0 || a[i]>1000000)
                return 0;
            ans+=a.at(i);


        }
    return ans;

}
