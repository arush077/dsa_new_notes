int i=0,j=0;

int wind_size=0;
for(int i=0;i<n;i++){
    if(arr[i]<=k){wind_size++;}
}


int unfav=0;
int mini=+1e9;
while(j<n){

    if(arr[j]>=k){unfav++;}

    if(j-i+1<wind_size){j++;}

    else{
        //length fix ho gaya

        mini=min(mini,arr[j]);   //ans report karo

        if(arr[i]>=k){unfav--;}  //'i' par focus karo 'j' wala to upar hi process hoke aata he to agar i ek aage move hua to kya kare wo likho
        i++;j++;
    }
}