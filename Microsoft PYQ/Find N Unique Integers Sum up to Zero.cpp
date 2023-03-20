 vector<int> sumZero(int n) {
        if(n%2==0){
            vector<int> v;
            for(int i=(-n/2);i<0;i++){
                v.push_back(i);
            }
            for(int i=1;i<=(n/2);i++){
                v.push_back(i);
            }
            return v;
        }
        vector<int> v;
            for(int i=(-n/2);i<0;i++){
                v.push_back(i);
            }
        v.push_back(0);
            for(int i=1;i<=(n/2);i++){
                v.push_back(i);
            }
            return v;
    }

    // Just push an equal no of +ve and -ve elements