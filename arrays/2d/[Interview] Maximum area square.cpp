https://leetcode.com/problems/maximal-square/description/

https://www.youtube.com/watch?v=9jR5XnwtDxU
// selecting the boundaries and then iterating within will take O(n^6)

for(int start_row){
    for(int end_row){
        for(int start_col){
            for(int end_col){

                //already n^4 hogaya
                //now iterating in this within

                for(int i=start_row;i<end_row;i++){
                    for(int j=start_col; j<end_col;j++){
                        
                        //here you can put condition for square
                        //if(end_row-start_row == end_col - start_col)
                    }
                }


            }
        }
    }
}


// TRICK to this qn kya he ?

see the left wale

