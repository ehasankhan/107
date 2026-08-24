#include<iostream>
using namespace std;
void sum(){
int a,b;
cin>>a>>b;
int sum= a+b;
cout<<sum<<endl;
}
void large(int a,int b){
if(a>b){
        cout<<a<<endl;
}
else{
    cout<<b<<endl;
}
}
float area(){
float r,pai=3.1416;
cin>>r;
float ans=r*r*pai;
return ans;

}
int rect(int a,int b){

int ans = a*b;
return ans;
}
int main(){
int a,b;
cin>>a>>b;
large(a,b);
sum();
float cir_area = area();
cout<<cir_area<<endl;
int rectangle = rect(a,b);
cout<<rectangle<<endl;


return 0;
}
