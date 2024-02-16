#include <iostream>
using namespace std;

//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *

void Pattern1(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    
};

//  *
//  * *
//  * * *
//  * * * *
//  * * * * *
void Pattern2(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<" *";
        }
        cout<<endl;
        
    }
}

//      *
//     **
//    ***
//   ****
//  *****

void Pattern3(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            cout<<" ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout<<"*";
        }
        

        cout<<endl;
        
    } 
}


//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
void Pattern4(){
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <=i; k++)
        {
            cout<<"* ";
        }
        cout <<endl;     
    }
    
}

// *****
// ****
// ***
// **
// *
void Pattern5(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

//   * * * * *
//    * * * *
//     * * *
//      * *
//       *
void Pattern6(){
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k <=i; k++)
        {
            cout<<" ";
        };
        for (int j = 0; j < 5-i; j++)
        {
            cout<<" *";
        }
        cout<<endl;
        
    }
    
}


// 1
// 12
// 123
// 1234
// 12345
void Pattern7(){
    for (int i = 2; i < 7; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    
}

int main()
{
    Pattern7();
}
