class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int l=m+n;
        int[] ans=new int[l];
        int o=0;
        for(int i=0;i<m;i++){
            
            ans[o++]=nums1[i];
        }
        for(int j=0;j<n;j++){
            
            ans[o++]=nums2[j];
        }
        Arrays.sort(ans);
        
        for (int i = 0; i < l; i++) {
            nums1[i] = ans[i];
        }
        
        
    }
}