#include<iostream>
using namespace std;

int main(){
    int t, i, x, f, j;
    
    cin >> t;
    for(int i=0;i<t;i++):
        cin >> x;
        f=[0,1]
        if x>1:
            for j in range(2,x+1):
               
                f.append(f[j-2]+f[j-1])
            print('Fib({}) = {}'.format(x,f[x]))
        if x <=1:
            print('Fib({}) = {}'.format(x,f[x]))
}
