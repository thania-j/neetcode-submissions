#include <string>
class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1=false, s2=false;
        int temp;
        if (s.length()==t.length()){
            for (int i=0; i<s.length(); i++){
                for (int j=0;j<s.length()-i-1;j++){
                    if (s[j]>s[j+1]){
                        temp=s[j];
                        s[j]=s[j+1];
                        s[j+1]=temp;
                        s1=true;
                    }
                    if (t[j]>t[j+1]){
                        temp=t[j];
                        t[j]=t[j+1];
                        t[j+1]=temp;
                        s2=true;
                    }
                }
            }
            int c=0;
            for (int k=0;k<s.length();k++){
                if(s[k]==t[k]){
                    c++;
                }
            }
            if(c==s.length()){
                return true;
            }
        }
        return false;
    }
};
