
//            _____                    _____                    _____             _____                    _____                    _____                  
//           /\    \                  /\    \                  /\    \           /\    \                  /\    \                  /\    \                 
//          /::\    \                /::\    \                /::\____\         /::\    \                /::\    \                /::\____\                
//         /::::\    \              /::::\    \              /:::/    /         \:::\    \              /::::\    \              /::::|   |                
//        /::::::\    \            /::::::\    \            /:::/    /           \:::\    \            /::::::\    \            /:::::|   |                
//       /:::/\:::\    \          /:::/\:::\    \          /:::/    /             \:::\    \          /:::/\:::\    \          /::::::|   |                
//      /:::/  \:::\    \        /:::/__\:::\    \        /:::/    /               \:::\    \        /:::/__\:::\    \        /:::/|::|   |                
//     /:::/    \:::\    \      /::::\   \:::\    \      /:::/    /                /::::\    \      /::::\   \:::\    \      /:::/ |::|   |                
//    /:::/    / \:::\    \    /::::::\   \:::\    \    /:::/    /      _____     /::::::\    \    /::::::\   \:::\    \    /:::/  |::|___|______          
//   /:::/    /   \:::\ ___\  /:::/\:::\   \:::\    \  /:::/____/      /\    \   /:::/\:::\    \  /:::/\:::\   \:::\    \  /:::/   |::::::::\    \         
//  /:::/____/  ___\:::|    |/:::/  \:::\   \:::\____\|:::|    /      /::\____\ /:::/  \:::\____\/:::/  \:::\   \:::\____\/:::/    |:::::::::\____\        
//  \:::\    \ /\  /:::|____|\::/    \:::\  /:::/    /|:::|____\     /:::/    //:::/    \::/    /\::/    \:::\  /:::/    /\::/    / ~~~~~/:::/    /        
//   \:::\    /::\ \::/    /  \/____/ \:::\/:::/    /  \:::\    \   /:::/    //:::/    / \/____/  \/____/ \:::\/:::/    /  \/____/      /:::/    /         
//    \:::\   \:::\ \/____/            \::::::/    /    \:::\    \ /:::/    //:::/    /                    \::::::/    /               /:::/    /          
//     \:::\   \:::\____\               \::::/    /      \:::\    /:::/    //:::/    /                      \::::/    /               /:::/    /           
//      \:::\  /:::/    /               /:::/    /        \:::\__/:::/    / \::/    /                       /:::/    /               /:::/    /            
//       \:::\/:::/    /               /:::/    /          \::::::::/    /   \/____/                       /:::/    /               /:::/    /             
//        \::::::/    /               /:::/    /            \::::::/    /                                 /:::/    /               /:::/    /              
//         \::::/    /               /:::/    /              \::::/    /                                 /:::/    /               /:::/    /               
//          \::/____/                \::/    /                \::/____/                                  \::/    /                \::/    /                
//                                    \/____/                  ~~                                         \/____/                  \/____/                 
//                                                                                                                                                         

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long semi=(n+1)/2;
    if(k<=semi)//if k is less than semi ,it means the range of numbers is odd 
    {
        cout<<(2*k-1);
    }
    else 
    {
        cout<<(abs(k-semi)*2);//if k is less than semi ,it means the range of numbers is even 
    }
    return 0;
}