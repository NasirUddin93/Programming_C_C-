#include<iostream>
using namespace std;
int main(){
int A[] = {1,2,3,5,6,7,8,9,10,11,13,14,15,17};
for(int i=0;i<14;i++){
cout<<"A["<<i<<"] = "<<A[i]<<endl;
}
int searchNumber = 0;
cin>>searchNumber;
int left = 0;
int right=13;
int mid;

while(left<=right){
mid = (left+right)/2;
if(A[mid] == searchNumber){
cout<<"A["<<mid<<"] = "<<A[mid];
}
if(A[mid]<searchNumber){
left = mid +1;
}else{
right = mid -1;
}

}




}
