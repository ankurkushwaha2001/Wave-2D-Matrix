#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    for(int j=0;j<m;j++){
        int i=0;
        int k=n-1;
        while((j%2==0)&&(i<n)){
            cout<<a[i][j]<<" ";
            i++;
        }
        while((j%2!=0)&&(k>=0)){
            cout<<a[k][j]<<" ";
            k--;
        }
    }

    return 0;
}
