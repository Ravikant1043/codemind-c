#include<iostream>
#include<math.h>
using namespace std;
bool prime(int a){
    if(a==1)
		return false;
    if(a==2)
    return true;
    for(int i=2;i<sqrt(a)+1;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b,c=0;cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i))
        c++;
    }
    cout<<c;
    return 0;
}
// 2,3,5,7,11,13
