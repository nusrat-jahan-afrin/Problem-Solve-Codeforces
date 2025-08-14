#include <iostream>
using namespace std;

int main()
{
    int i,j,t,n,k,gold=0,c=0;
    cin>>t;
    for(i=0;i<t;i++){
        gold=0,c=0;
        cin>>n>>k;
        int a[n+1];
        for(j=0;j<n;j++){
            cin>>a[j];
            if(a[j]>=k){
                gold+=a[j];
            }
            else if(a[j]==0&&gold>0){
                c++;
                gold--;
            }
        }

            cout<<c<<endl;

    }

    return 0;
}
