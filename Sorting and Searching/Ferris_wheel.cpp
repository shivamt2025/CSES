#include<bits/stdc++.h>

using namespace std;

int main(){
int n,x;
cin>>n>>x;
vector <int>weights(n);
for(int i=0;i<n;i++){
    cin>> weights[i];
}

sort(weights.begin(),weights.end());
int i=0;
int j=n-1;
int gundolaas=0;
while(i<=j){
  if((weights[j]+weights[i])<=x){
    i++;
    j--;
    gundolaas++;
  }
  else {
    j--;
    gundolaas++;
  }

}

cout << gundolaas;

}