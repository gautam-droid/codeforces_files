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

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, m, a, b, sum = 0;
    cin >> n >> m >> a >> b;
    sum=min((n/m)*b+(n%m)*a,n*a);
    int other=((n/m)+1)*b;
    cout<<min(sum,other);
    
    return 0;
}