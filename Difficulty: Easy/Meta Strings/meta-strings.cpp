
bool metaStrings(string S1, string S2) {
    // your code here
    
    int count =0;
    if(S1==S2)
    return false;
    
    else if ( S1.size()!=S2.size())
    return false;
    else
    {
        unordered_map<char,int>mp1,mp2;
        for (int i=0; i<S1.size();i++)
        {
            mp1[S1[i]]++;
        }
        for (int i=0; i<S2.size();i++)
        {
            mp2[S2[i]]++;
        }
        if(mp1==mp2)
        {
            for(int i=0;i<S1.size();i++)
            {
                if(S1[i]!=S2[i])
                count++;
            }
            if(count==2)
            return true;
            else
            return false;
        }
       else
       return false;
    }
}
