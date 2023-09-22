#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int a;
    cin >> a; //scanf("%d",&a)
    while(a--)
    {
    	char ch[10][10];
    	long long ans = 0;
    	for(int i = 0; i < 10; i++){
    		for(int j = 0; j < 10; j++){
    			cin >> ch[i][j];
    			if(ch[i][j] == 'X'){
    				int x = i+1, y = j+1;
    				if(x > 5){
    					x = 10-x+1;
    				}
    				if(y > 5){
    					y = 10-y+1;
    				}
    				int b = min(x, y);
    				// cout << b << " ";
    				ans += b;
    			}
    		}
    	}
    	// cout << endl;
    	cout << ans << endl;
    }
}
