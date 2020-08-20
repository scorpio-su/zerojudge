#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;  v.clear();
    int num;
    for (int i=1;scanf("%d",&num)==1;++i){
        if(v.empty()) v.push_back(num);
        else{
            //int pos=-v.begin();
            v.insert(lower_bound(v.begin(),v.end(),num),num);
        }
        if (i==1) printf("%d\n",v[i-1]);
        else if (i%2) printf("%d\n",v[i/2]);
        else printf ("%d\n",(v[i/2-1]+v[(i/2)])/2);
    }
}