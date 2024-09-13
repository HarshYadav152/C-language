 #include <stdio.h>  
 void main()
 {
     long num, d, r, base = 1, b= 0, no1 = 0;
  
     printf("Enter a decimal integer");
     scanf("%ld", &num);
     d = num;
     while (num > 0)
     {
         r= num % 2;
         /*  To count no.of 1s */
         if (r== 1)
         {
             no1++;
         }
         b= b+ r * base;
         num = num / 2;
         base = base * 10;
     }
     printf("\nInput number is = %d", d);
     printf("\nIts binary equivalent is = %ld", b);
     printf("\nNo.of 1's in the binary number is = %d", no1);
 }
  
