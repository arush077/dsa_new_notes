//! TC of DP on grids
//TC of recursion DP on grids : 
// (bottom or right) 2^(m*n) because every cell has 2 options to move down or right and no of cells=m*n
// (i+1,j) (i+1,j-1) (i+1,j) isme since har step pe tum ek niche jaare ho so essentially u are covering only n values and then each value has 3 options so 3^(n)

// DP ka hi concept
// recursion me usually 2^m ya kuch lag jaata he TC but memoization me TC : (variable1 * variable2 * variable 3 ) ka lagega

// so memoization and bottom up me itna zyada farak nahi hota as both take the same time var1*var2*var3 and so on 