/*
Write a nested loop code segment that produces this output:
 1
 12
 123
 1234
 12345
4. Write a program which prints a right angle triangle, where it has a high n and based n. For example, when n=5, the output looks like as following
                  *
                  **
                  ***
                  ****
                  *****
*/
#include <iostream>
#include <vector>

using namespace std;
int getvalue(int &x)
{
    cout<<"Please enter an integer: ";
    cin>>x;
    return x;
}
int main()
{
    /*
    1.
    Write a program that uses a while statement to produce the sum 1+2+3+ ...+n,
    where value for n is entered by the user. It assumes that
    integer variables i, n and sum have been declared.
    */
    int i,n=0,sum=0;
    getvalue(n);
    i=n;
    cout<<endl;
    
    
    
    while(i>0)
    {
        sum=sum+i;
        i--;
    }
    
    cout<<sum<<endl;
    
    
    /*
    Write a program that prints the digits of a given integer number.
     */
    getvalue(n);
    for(i=1; i<n; i*=10)
    {
        cout<<an%i<<endl;
    }
    
    return 0;
    
}

