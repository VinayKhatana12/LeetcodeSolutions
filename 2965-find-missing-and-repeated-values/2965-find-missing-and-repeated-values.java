class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int[] arr = new int[2];
        int n = grid.length*grid.length;
        HashMap<Integer,Integer>map = new HashMap<>();
        int sum =0;
        for(int[] row:grid){
            for(int value:row){
            map.put(value,map.getOrDefault(value,0)+1);
            sum += value;
            }
        }
        for(int key :map.keySet()){
            if(map.get(key)>1) arr[0]=key;
        }
        arr[1]=n*(n+1)/2-(sum-arr[0]);
    return arr;
    }
}