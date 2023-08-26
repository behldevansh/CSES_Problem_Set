class Solution{
public: 

 int isPalindrome(string S)
 {
     int i=0,j=S.size()-1;
     while(i++<j-- && S[i]==S[j]);
     return i>=j;
}
};