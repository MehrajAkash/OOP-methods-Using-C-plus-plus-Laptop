#include<iostream>
using namespace std;
int main(){
 int arr[]={8,5,1,11,5};
 int s = sizeof(arr)/sizeof(arr[0]);
 cout<<"Insertion sort\n"<<endl;
 for(int i=0;i<s;i++){
        cout<<"sort1"<<endl;
   for(int j=0;j<s;j++){
        cout<<"sort2"<<endl;
        int maxx=j+1,minn=j;
    while(minn>=0){

          if(arr[maxx]<arr[minn]){
         int temp=arr[minn];
         arr[minn]=arr[maxx];
         arr[maxx]=arr[minn];
           minn--;
         }
    }


   }
 }

 cout<<"After Sorting"<<endl;
 for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
 }

return 0;
}
