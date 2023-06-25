# University_projects
•***Laboratory 1 "Pointer. Address arithmetic on arrays"***:<br/>
**1)The purpose of the work:** Learn how to create pointers to arrays, use pointer arithmetic and index array elements using it.<br/>
**2)Formulation of the work:** 1. Make an array of integers of size 4.<br/>
2. Make a pointer to the whole;<br/>
3. Set the value of the pointer with the expression `pi=(int *)((char *)mi+2)`;<br/>
4. Check the value indicated by the pointer pi.<br/>
5. Explain the result.<br/>
**3)Program explanation:**`int mi[4]` is an array of four integers<br/>
`int pi*` - pointer to array mi[4]<br/>
**4)The result of the program execution and its explanation:** `131072`<br/>
We can conclude that the second element of the array is stored in memory in big-endian format, which means that the bytes are written in reverse order, starting with the oldest, because moving the pointer two bytes gives us the address where the second element of the array is stored. The value of the second member of the array will then be 0x01020304, and by shifting the pointer two bytes we can determine the address where 0x0304 is stored. The decimal equivalent of this number is 12800, but since we get the number 131072, our system is most likely using an 8-byte 64-bit int type. Thus uninitialized memory is accessed when explicitly casting an int array pointer to a char pointer and moving the pointer by 2 bytes, which can lead to unexpected program behavior.
