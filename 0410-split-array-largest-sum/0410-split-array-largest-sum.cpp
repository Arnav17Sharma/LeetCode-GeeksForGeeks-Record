class Solution {
public:
    int splitArray(vector<int>& arr, int k) {
        int max=INT_MIN,sum=0;
        int N = arr.size();
        for(int i=0;i<N;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            sum+=arr[i];
        }
        int ans,l=max,h=sum,mid;
        while(l<=h){
            mid=(l+h)/2;
            int ctr=1,s=0;
            
            for(int i=0;i<N;i++){
                
                s+=arr[i];
                
                if(s>mid){
                    
                    ctr++;
                    
                    s=arr[i];
                    
                }
            }
            
            if(ctr>k){
                
                l=mid+1;
                
            }
            else{
                
                ans=mid;
                
                h=mid-1;
            }
        }
        return ans;
    }
};