class Solution {
public:
    long long sumAndMultiply(int n) {
        int newNum=0;
        int revNum=0;
        long sum=0;
        while(n>0){
            int digit =n%10;
            sum+=digit;
            if(digit!=0){
            newNum=newNum*10+digit;
            }
            n=n/10;
        }
        while(newNum>0){
            int digit = newNum%10;
            revNum=revNum*10+digit;
            newNum=newNum/10;
        }
        return sum*revNum;
    }
};