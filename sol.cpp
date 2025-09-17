class Solution {
public:
    int triangleNumber(vector<int>& nums) {
         
  // using the brute force solution.


//   int count = 0;

//   int n = nums.size();
//   for(int i = 0; i<n; i++){
       
//        for(int j = i+1; j<n; j++){



//        for(int k = j+1; k<n; k++){
           
//            int a = nums[i];
//            int b = nums[j];
//            int c  = nums[k];


//            if((a+b>c) && (b+c>a) && (a+c>b)){
//             count++;
//            }


           
//        }

//        }

//   }




//    return  count;  // this gives the time limit exceeded.








     // using the optimal approach to the time complexity of the o(n^2);

     int  n = nums.size();

     sort(nums.begin(),nums.end());
     
     int count   = 0;
     for(int  i =n-1; i>=2; i--){

        int left  = 0;
        int right = i-1;

        while(left<right){
      
          if(nums[left] + nums[right] > nums[i]){
            count += (right - left);
            right--;
          }
          else{
            left++;
          }


        }
     }


     return count;
    }
};