//! Shortest path in a binary matrix

//! IMP 0,0 --> n-1,m-1 jaare ho to fir while(!q.empty){} iske andar ek BC daalo ki if(i==n-1 && j==m-1){break;} kaha pe iske andar once you pop the shit then check karo for this

//! queue ke andar {d,{i,j}} daalo

//! ab 2d visited array nahi, ab 2d distance array banao jisme sabko inf se bhardo

//! Concept : distance array bana diya to visited array ki zarurat kyu nahi he fir>?
//!           because 1--2 ke beech agar 6 ka distance he to 2--1 ke bhi beech 6 ka difference hoga so distance array me either which ways 6 hi fill ho raha so 1--2 se 6 fill hogaya to agli baar wo dekhega ki 6 se kam kuch aara he to fir fill kardu but 2--1 me bhi 6 aara he so it will skip it easily




