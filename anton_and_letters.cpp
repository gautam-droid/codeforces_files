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
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    string inp;
    int count;
    getline(cin, inp);

    auto len = inp.length();
    // cout<<len;
    if (len == 2)
    {
        count = 0;
    }
    else if (len == 3)
    {
        count = 1;
    }
    else
    {
        inp = inp.substr(1, len - 2);
        replace(inp.begin(), inp.end(), ',', ' ');
        // cout<<inp;
        set<char> ch(inp.begin(), inp.end());
        count = ch.size() - 1; // minus one is done to avoid the counting of whitespace present in the set
    }
    cout << count;
    return 0;
}