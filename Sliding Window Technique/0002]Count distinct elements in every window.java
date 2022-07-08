/*
GFG : Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.
Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: Window 1 of size k = 4 is
1 2 1 3. Number of distinct elements in
this window are 3. 
Window 2 of size k = 4 is 2 1 3 4. Number
of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number
of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number
of distinct elements in this window are 3.
*/

class Solution
{
    ArrayList<Integer> countDistinct(int A[], int n, int k)
    {
        ArrayList<Integer> ans = new ArrayList<>();
        Map<Integer,Integer> map = new HashMap<>();
        
        for(int i=0;i<k;i++){
            if(map.containsKey(A[i]))
                map.put(A[i],map.get(A[i])+1);
            else
                map.put(A[i],1);
        }
        ans.add(map.size());
        for(int i=1;i<n-k+1;i++){
            map.put(A[i-1],map.get(A[i-1])-1);
            if(map.get(A[i-1])==0)
                map.remove(A[i-1]);
            map.put(A[i+k-1],map.getOrDefault(A[i+k-1],0)+1);
            ans.add(map.size());
        }
        return ans;
    }
}
