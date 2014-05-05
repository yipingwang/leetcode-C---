class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0) return 0;
        if (s.size()==1) return 1;
        
        int length=0;
        map<char, int> helpMap;
        helpMap.clear();
        
        for (int i=0;i<s.size();i++){
            if (helpMap.empty() || helpMap.count(s[i])){
                helpMap.insert(pair<char,int>(s[i],i));
                
            }
            else {
              
                   if (length<=helpMap.size()){
                       length=helpMap.size();
                       }
                       //length<=helpMap.size()?:helpMap.size():length;
                   i=helpMap[s[i]];
                   helpMap.clear();
               
            }
        }
        return length;
        
    /*    int length=0, maxL=0;
        int count[26];
        memset(count, -1, 26*sizeof(int));
        for (int i=0;i<s.size();i++,length++){
            if (count[s[i]-'a']>=0){
            maxL=max(length,maxL);
            length=0;
            i=s[i]-'a'+1;
            memset(count,-1,26*sizeof(int));
            }
            count[s[i]-'a']=i;
            
        }
    return max(length,maxL);    
 */  
 }
    
};
