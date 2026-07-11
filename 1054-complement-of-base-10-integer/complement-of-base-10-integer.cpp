class Solution {
public:
    int bitwiseComplement(int num) {
        int rem,ans=0,weight=1;
        if(num==0){
            return 1;
        }
        while(num){
            rem=num%2;
            rem=rem^1;
            num=num/2;
            ans=ans+weight*rem;
            weight=weight*2;

        }
        return ans;
    }
};