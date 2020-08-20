    #include <iostream>
    #include <algorithm>
    #include <vector>
    using namespace std;

    /*struct p{
        int x,y;
    };

    bool cmp(p a, p b){
        return a.x > b.x;
    }*/

    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<int> vec; vec.clear();
        int n,t,si,di; cin >> n >> t;
        for (int i = 0; i < n;i++) {
            cin >> si >> di;
            do{
                vec.push_back(si);
                si-=di;
            }while (si>0);
        }
        //sort(v.begin(), v.end(), less<int>());// Ascending order
        sort(vec.begin(),vec.end(),greater<int>());// Descending order
        int num{0};
        for (int i = 0; i <t;i++) num += vec[i]; //cout << vec[i]<<' ';
        /*int n1{0},num{0};
        while (t!=0) {
            if (n1 ==n) n1 = 0;
            
            num+=a[n1].x;
            a[n1].x-=a[n1].y;
            if (a[n1].x<0) a[n1].x = 0;
            n1++, t--;
        }*/
        cout << num << '\n';
    }