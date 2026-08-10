class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        HashMap<Integer,Integer>map= new HashMap<>();
        map.put(0,1);
        int count=0;
        int prefix=0;
        for(int num: nums){
            prefix += num;
            int remainder = prefix%k;
            if(remainder<0) remainder += k;
            if(map.containsKey(remainder)){
                count += map.get(remainder);
            }
            map.put(remainder,map.getOrDefault(remainder,0)+1);

        }
    return count; 
    }
}