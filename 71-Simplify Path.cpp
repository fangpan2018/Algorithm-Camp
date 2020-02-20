// faster than 73.73% 
// less than 50.00%


class Solution {
public:
    string simplifyPath(string path) {
        string re, tem;
        vector<string> dirs;
        istringstream iss(path);
        
        while(getline(iss, tem, '/')){
            if(tem == ""|| tem == ".") continue;
            else if(tem == ".." ){
                if(!dirs.empty())   dirs.pop_back();
            }else{
                dirs.push_back(tem);
            }
        }
        
        for(auto i:dirs)    re += "/" + i;
        return re==""?"/":re;
    }
};      