vector<int> Solution::lszero(vector<int> &v) {
    int n=v.size();
    vector<vector<int>> index;
    int suma=0;
    map<int,int> m;
    for(int i=0;i<n;i++){// to initialise the map with a value that can never be the value of an index
        suma+=v[i];
        m[suma]=-2;
    }
    int sum=0;
    m[0]=-1;
    for(int i=0;i<n;i++){// longest zero sum will start from the first index with a particular value
        sum+=v[i];
        if(m[sum]!=-2){// if first apperance index is assigned
            vector<int> ind;
            ind.push_back(m[sum]);
            ind.push_back(i);
            index.push_back(ind);
            continue;
        }
        else{// if no first apperance index is assigned
            m[sum]=i;
        }
    }
    int l=index.size();
    if(l==0){// if no such sequence exists then return empty array
        vector<int> temp;
        return temp;
    }
    vector<int> ans;
    int max_len=0;
    int max_ind=-1;
    for(int i=0;i<l;i++){// to get the max length
        int diff=index[i][1]-index[i][0];
        if(diff>max_len){
            max_len=diff;
        }
    }  
    for(int i=0;i<l;i++){// to get the FIRST occurence of the length
        int diff=index[i][1]-index[i][0];
        if(diff==max_len){
            max_ind=i;
            break;
        }
    }  
    vector<int> temp=index[max_ind];
    for(int i=temp[0]+1;i<=temp[1];i++){// start from +1 to get the real sequence
        ans.push_back(v[i]);
    }
    return ans;
}
