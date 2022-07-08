//GFG : Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
//Input:
//5
//4 2 -3 1 6

//Output: /
//Yes

//Explanation: /
//2, -3, 1 is the subarray 
//with sum 0.
  
  
class Solution{
    //Function to check whether there is a subarray present with 0-sum or not.
    static boolean findsum(int arr[],int n)
    {
        HashSet<Integer> set = new HashSet<>();
        int sum = 0;

        for(int i=0;i<n;i++){
            sum += arr[i];
            
            if(arr[i]==0 || sum==0 || set.contains(sum))
                return true;
                
            set.add(sum);
        }
        return false;
    }
}
