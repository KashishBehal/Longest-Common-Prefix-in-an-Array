class Solution{
  public:
     string compare(string a , string b){
         int i=0;
         int j=0;
         while(i<a.length()  && j<b.length()){
             if(a[i]!=b[j]){
                 break;
             }
             i++;
             j++;
         }
         return a.substr(0 , i);
     }
    string longestCommonPrefix (string arr[], int N)
    {
        
        string longest=arr[0];
        for(int i=1;i<N;i++){
            longest=compare(longest , arr[i]);
            
        }
        if(longest.length()==0){
            return "-1";
        }
        return longest;
        }
    
};
