https://leetcode.com/problems/number-of-1-bits/?envType=study-plan-v2&envId=top-interview-150

//! find the no of set bits in n
        
        // 1<<k generates (1 0000000000....kzeroes)
        // so if bit is set at kth posiition : (x & 1<<k) > 0 ,,,,, and if unset then (x & 1<<k) = 0


        // n = 11
        // binary(n) = 1011
        // so lastval =1000 ie 1<<3
        //but how would you know 11 had 4 binary digits

        //so pure pe hi chala de n ka range diya he 2^32 tak matlab 32 digits honge binary tab 2^32 tak bana sakta integer




    int count = 0;
    for (int k = 0; k < 32; k++) {  // Assuming 32-bit integer
    if ((n & (1 << k)) > 0) {
        count++;
    }
    }
    return count;

    }