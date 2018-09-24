nt #include<iostream>
using namespace std;
int prime(int a){
    int s,j=2;
     while(a!=0){
        int count=0;
        for(int i=2;i<=j/2;i++){
            if(j%i==0){
                count=1;
                break;
            }
        }
        if(count==0){
            a--;
            s=j;
        }
        j++;
     }
return s;
}
int fab(int a){
  int p=0,q=1;
  int s;
  if(a==0){
    s=q;

  }
  else{
  for(int i=0;i<a;i++ ){
       int c=p+q;
        s=c;
       p=q;
       q=c;
  }}
  return s;
}

int main(){
int n;
      cin>>n;
      if(n>0){
      if(n%2==0){
        cout<<"prime:"<<prime(n/2);
      }
      else{
        cout<<"fab:"<<fab(n/2);
      }
      }
      else{
        cout<<"enter the valid input";
      }

return 0;
}

