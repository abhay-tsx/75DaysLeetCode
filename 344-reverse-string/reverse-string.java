class Solution {
    public void reverseString(char[] s) {
        int n=s.length;
        char[] ans = new char[n];
        int count = 0;
        for(int i=n-1;i>=0;i--){
            ans[count] = s[i];
            count++;
        }
        for(int i=0;i<n;i++){
            s[i]=ans[i];
        }
    }
}