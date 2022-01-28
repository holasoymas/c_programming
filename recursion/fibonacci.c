// #include<stdio.h>

// int fib(int);

// void main(){
//     int i, num, a = 0;
//     printf("Which fib number : ");
//     scanf("%d",&num);
//     for ( i = 0; i < num; i++)
//     {
//         printf("%d\n",fib(num));
//         a++;
//     }
    
// }

// int fib(int num){
//     if(num == 1){
//         return 1;
//     }else{
//         return (fib(num - 1) + fib(num -2));
//     }
// }

    #include<stdio.h>
     
    int Fibonacci(int);
     
    int main()
    {
       int n, i = 0, c;
     
       scanf("%d",&n);
     
       printf("Fibonacci series\n");
     
       for ( c = 1 ; c <= n ; c++ )
       {
          printf("%d\n", Fibonacci(i));
          i++; 
       }
     
       return 0;
    }
     
    int Fibonacci(int n)
    {
       if ( n == 0 )
          return 0;
       else if ( n == 1 )
          return 1;
       else
          return ( Fibonacci(n-1) + Fibonacci(n-2) );
    } 