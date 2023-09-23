//Problem link : https://codeforces.com/contest/1872/problem/C

#include<bits/stdc++.h>
using namespace std;
 
///C
int divisor(int l){
    for(int i = 2; i <= sqrt(l); i++){
        if(l%i==0){
            return i;
        }
    }
    return 1;
}
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int l, r; cin >> l >> r;
        int a, b;
        if(r <= 3){
            cout << -1 << endl;
        }
        else if(l != r){
            if(r%2==0){
                cout << r/2 << " " << r/2 << endl;
            }
            else{
                cout << (r-1)/2 << " " << (r-1)/2 << endl;
            }
        }
        else if(l==r){
            if(r%2==0){
                cout << r/2 << " " << r/2 << endl;
            }
            else{
                int div = divisor(l);
                if(div ==1){
                    cout << -1 << endl;
                }
                else{
                    a = div;
                    b = l-div;
                    cout << a << " " << b << endl;
                }
            }
        }
    }
}
