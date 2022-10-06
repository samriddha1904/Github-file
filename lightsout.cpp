#include <bits/stdc++.h>
using namespace std;

int light(int n){       
    if(n==0){
        return 1;
    }
    return 0;
}

int main() {
    
    int ar[3][3], br[3][3];    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>ar[i][j];
            if(ar[i][j]%2 == 0){        
                ar[i][j]=0;
            }
            else{       
                ar[i][j]=1;
            }
            br[i][j]=1;     
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(ar[i][j]==1){        
                br[i][j] = light(br[i][j]);     
                if(i>0){
                    br[i-1][j] = light(br[i-1][j]);    
                }
                if(j>0){
                    br[i][j-1] = light(br[i][j-1]);     
                }
                if(i<2){
                    br[i+1][j] = light(br[i+1][j]);     
                }
                if(j<2){
                    br[i][j+1] = light(br[i][j+1]);    
                }
             
             
            }
        }
     
    }
    
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
     
            cout<<br[i][j];     
        }
        cout<<endl;
    }
    
    
    return 0;
}
