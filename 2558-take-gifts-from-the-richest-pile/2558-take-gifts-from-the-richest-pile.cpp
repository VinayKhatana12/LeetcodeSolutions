class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        for(int i=0;i<k;i++){
            long first = pq.top();
            pq.pop();
            long second = sqrt(first);
            pq.push(second);
        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
    return sum;  
    }
};