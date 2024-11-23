https://leetcode.com/problems/open-the-lock/description/

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        //min no of steps to reach from src to destination 100% bfs hi lagega
        //recursion + backtracking wagera tab lagate when generate karna hota string wagera
        //but yaha par min no of steps pucha he to ya to dp ya fir bfs try karna
        //yaha bfs use hoga
        //neighbors kya honge ?
        // 0000 in one jump socho kaha kaha jaa sakta he
        //hamesha neighbiors nikalne ke lie dekho ek jump me kaha land karega
        //0001 or 0010 or 0100 or 1000 in 1 jump or 0000->9000 also in one jump hi hoga if you rotate 0 in backwards direction so ye 0900 0090 0009 ye sab hi ek hi jump ke duri par he so in sabko neigbor manna hoga     

        unordered_set <string> s;
         //concept/trick : deadlocked walo ko already visit karado
          //ab yaha since string ko maintain karna he so visited vector nahi visited set banega //VIMP
        for(int i=0;i<deadends.size();i++){
            s.insert(deadends[i]);
        }

        //just corner case ki deadend me 0000 tha to fir -1 return kardo
        if(s.find("0000")!=s.end()){
            return -1;
        }

        queue<pair<string,int>> q; //no,count;
        q.push({"0000",0});
        s.insert("0000");

        while(!q.empty()){
            string no=q.front().first;
            int count=q.front().second;
            q.pop();

            if(no==target){return count;}

            for(int i=0;i<4;i++){    
                   //generating all possible neighbors
                   //each element pe u could go +1 or -1 (front or back)
                   // 0 pe -1 to fir (0-1) and also -1 ko tum %10 nahi kar sakte so (0-1   +10)%10 kar sakte ho
                   // 9 pe +1 to fir (9+1) 10 ayega but u wanted a 0 so (9+1)%10 kar sakte ho

                    // string plusone=no.substr(0,i)+to_string((no[i]-'0'+1)%10)+no.substr(i+1) ;
                    string plusone= no;
                    plusone[i]=(((no[i]-'0')+1)%10)+'0';
                    // string minusone=no.substr(0,i)+to_string(((no[i]-'0'-1) +10)%10) +no.substr(i+1) ;
                    string minusone=no;
                    minusone[i]=((((no[i]-'0')-1)+10)%10) +'0';

                    if(s.find(plusone)==s.end()){
                        s.insert(plusone);
                        q.push({plusone,count+1});
                    }
                    if(s.find(minusone)==s.end()){
                        s.insert(minusone);
                        q.push({minusone,count+1});
                    }                  
                }
        }
        return -1;
    }
};