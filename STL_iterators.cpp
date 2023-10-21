#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {2,3,4,5,6,7};
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    vector<int> ::iterator it = v.begin();
    for(it = v.begin();it!=v.end();it++){
        cout<<(*(it))<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator pt = v_p.begin();
    for(pt = v_p.begin();pt!=v_p.end();pt++){
        //cout<<(*pt).first<<" "<<(*pt).second<<endl;
        cout<<pt->first<<" "<<pt->second<<endl;
    }

    return 0;
}