https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

//concept
ho sakta he ki piche do non repeating aaye ho to hame chunna he first non repeating wala dono me se but also making sure ki we dont lose the second non repeating wala so use queue data structure to store the chars
aur ek map raklo to store the frequency kyuki q me har element push hora he but if that element is really worth it (non-repeating/freq=1) then only


	string FirstNonRepeating(string A){
		    string s="";
		    unordered_map<char,int> m;
		    queue<char> q;
		    
		    
		    for(int i=0;i<A.length();i++){
		    //jese hi wo char mila wese hi m[s[i]]++;
		    m[A[i]]++;
		    q.push(A[i]);
		    
		    
		    
		    if(!q.empty() && m[q.front()]==1){
		        //q.top ki first element ka freq 1 he to pusgh kardo s me
		        s+=q.front();
		    }
		    
		    else if(!q.empty() && m[q.front()]!=1){
		        //zyada freqency wale elements ho queue me to unhe pop kardena
		        while(!q.empty() && m[q.front()]!=1){
		            q.pop();
		        }
		        
		        //ya to q empty hua hoga to # laga dena
		        //ya to pop karte karte m[q.front()]==1 hua hoga
		        
		        if(q.empty()){s+='#';}
		        else{
		            s+=q.front();
		        }
		    }
		    
		    else if(q.empty()){
		        s+='#';
		    }

		    }
		    
		    
		    return s;
		    
		    
		}