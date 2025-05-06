// # include <iostream>
// # include <vector>
// # include <algorithm>
// using namespace std;

// int main (){
    
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     int k=2;
//     k=k % v.size();

//     reverse(v.begin(),v.end());
//     reverse(v.begin(),v.begin()+k);
//     // reverse(v.begin(),+k,v.end());

//     for (int a:v){
//         cout<<a<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// # include <iostream>
// #include<limits.h>
// using namespace std;
// int secondLargestElement(int array[],int size){
//   int max=INT_MIN;
//   int second_max=INT_MIN;
//   for (int i=0;i<size;i++){
//         if(array[i]>max){
//             second_max=max;
//             max=array[i];
//               }
//     }
    
//     for(int i=0; i<size;i++){
//         if (array[i]>second_max && array[i] !=max){
//             second_max=array[i];
//         }
//     }
//     return second_max;
// }
// int main (){
//      int array[]={2,3,5,7,6,1,7};
//     int n=7;
//      cout<<secondLargestElement(array,n)
//     <<endl;
//     return 0;
// }


// # include <iostream>
// #include<limits.h>
// using namespace std;
// int largestElementIndex(int array [],int size){
//     int max=INT_MIN;
//     int maxindex=-1;
//     for (int i=0;i<size;i++){
//         if (array[i]>max){
//             max=array[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }
// int main (){

//     int array []={2,3,5,7,6,1};
//     int indexoflargest=largestElementIndex(array,6);
   
//     array[indexoflargest]=-1;
//     int indexofsecondlargest=largestElementIndex(array,6);
//     cout<<array[indexofsecondlargest]<<endl;

//     return 0;
// }

// # include <iostream>
// # include <vector>
// using namespace std;

// int main (){
   
//   int array []={1,2,1,2,1,2};

//   int anssum =1;
//   for(int i=0;i<6;i++){
//     if(i%2==0){
//         anssum-=array[i];
//     }
//     else{
//         anssum+=array[i];
//     }
//   }
//    cout<<anssum<<endl;

//     return 0;
// }


# include <iostream>
using namespace std;
int main(){
   
   int array[]={3,1,2,4,0,6};
   int targetsum=5;
   int size=6;
   int triplets=0;

   for (int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for(int k=j+1;k<size;k++){
            if(array[i]+array[j]+array[k]==targetsum ){
            }
        }
    }
   }
   cout<<triplets<<endl;

    return 0;
}