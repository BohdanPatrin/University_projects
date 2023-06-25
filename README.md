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
**4)The result of the program execution and its explanation:**<br/>
![image](https://github.com/BohdanPatrin/University_projects/assets/127937644/243eea69-0977-4454-a99f-dba8f459394f) <br/>
We can conclude that the second element of the array is stored in memory in big-endian format, which means that the bytes are written in reverse order, starting with the oldest, because moving the pointer two bytes gives us the address where the second element of the array is stored. The value of the second member of the array will then be 0x01020304, and by shifting the pointer two bytes we can determine the address where 0x0304 is stored. The decimal equivalent of this number is 12800, but since we get the number 131072, our system is most likely using an 8-byte 64-bit int type. Thus uninitialized memory is accessed when explicitly casting an int array pointer to a char pointer and moving the pointer by 2 bytes, which can lead to unexpected program behavior.
<br/>
•***Laboratory 2 "An array of function pointers"***:<br/>
**1)The purpose of the work:** Create an array of function pointers.<br/>
**2)Formulation of the work:** 1. Write two integer functions: x and x².<br/>
2. Create an array that stores the addresses of these functions.<br/>
3. Write a function that, depending on the value of the argument, calls the function at the address from the array.<br/>
4. Write the main function to demonstrate how to perform all the described functions.<br/>
5. Take screenshots of debugging (step-by-step execution).<br/>
**3)Program explanation:** `double (*arr[2])(double a)` is an array of function pointers<br/>
`double x (double a)` is a function for x<br/>
`double x2 (double a)` is a function for x²<br/>
`double func (double x)` is a function to use the previous two<br/>
`double number` – the number that will be entered from the keyboard<br/>
**4)The result of the program execution:** <br/>
![image](https://github.com/BohdanPatrin/University_projects/assets/127937644/3fc4eb61-12bb-4161-b1d2-4194ba6addf1) <br/>
Debugging: <br/>
![image](https://github.com/BohdanPatrin/University_projects/assets/127937644/105cf5fb-5851-4e09-ac4f-cc2619662e8b) <br/>
![image](https://github.com/BohdanPatrin/University_projects/assets/127937644/52cbd2e4-7694-4220-85a5-9176b3661c52) <br/>
•***Laboratory 3 "Dynamic memory"***:<br/>
**1)The purpose of the work:** Investigate the behavior of dynamic memory.<br/>
**2)Formulation of the work:** Write an html code generator program (in particular, a table) with data on the current pointer values and the difference between them. Run the program code simultaneously in three windows.<br/>
**3)Program explanation:**`long long *pi` is the first pointer to dynamic memory<br/>
`long long *otherpi` – second pointer to dynamic memory<br/>
`int d` – contains the difference between otherpi and pi<br/>
`int d_temp` – a temporary container for d (required to check the number of repetitions of the values of the d variable)<br/>
`unsigned short int counter` – a counter of the number of repetitions of the values of the variable d<br/>
**4)The result of the program execution its explanation:**<br/>
![image](https://github.com/BohdanPatrin/University_projects/assets/127937644/01015712-4df3-42db-b361-f97e266c2cbb)
 <br/>
Dynamic memory is usually taken from a random area of memory (if you look at three different tables, you will see that the addresses are completely different). You can also notice the peculiarity that on the first iteration of the loop the difference is d = 134, and on all subsequent iterations the difference is equal to 4, which is close to the size of the int variable.


