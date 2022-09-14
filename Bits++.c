#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int t=0;
    for(int i=0;i<n;i++){
        if(s[i][1]=='+')
            t++;
        else
        t--;
    }
    cout<<t;
    return 0;
}
