vector<int> subarraySum(int v[], int n, long long s)
    {
        vector<int> pre(n);
        vector<int> ans;
        pre[0]=v[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }
        int i=0;
        while(i<n){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=v[j];
                // if(i==0){
                //     if(pre[j]==s){
                //         ans.push_back(i+1);
                //         ans.push_back(j+1);
                //         return ans;
                //     }
                // }
                // else{
                //     if(pre[j]-pre[i-1]==s){
                //         ans.push_back(i+1);
                //         ans.push_back(j+1);
                //         return ans;
                //     }
                // }
                if(sum==s){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
                if(sum>s){
                    break;
                }
            }
            i++;
        }
        ans.push_back(-1);
        return ans;
    }

    
    // Inefficient Solutions