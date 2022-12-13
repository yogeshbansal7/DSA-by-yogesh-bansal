#include"bits/stdc++.h"
using namespace std;

int main(){

    int k;
    cin>>k;

    int n;
    cin>>n;

    vector<int> v(n);


    for(int i = 0 ; i< n ;i++){
        cin >> v[i];
    }

    int zerocount = 0;
    int ans = 0;
    int i = 0;

    for(int j = 0;j< n ;j++){
        if(v[j] == 0){
            zerocount++;

            while(zerocount > k){
                if(v[i] == 0){
                    zerocount--;
                }
                i++;
                
                
            }
        }

        ans = max(ans,j-i+1);
    }

    cout<<ans<<endl;

    return 0;
}