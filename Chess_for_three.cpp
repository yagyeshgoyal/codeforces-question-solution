// #include<iostream>
// using namespace std;

// int main()
// {

//     int t;
//     cin>>t;

//     while(t--){
//         int ay,b,c;

//         cin>>ay>>b>>c;

//         int tcount = 0;
//         if(ay%2==1){
//             tcount++;
//         }
//         if(b%2==1){
//             tcount++;
//         }
//         if(c%2==1){
//             tcount++;
//         }

//         if(tcount == 2 || tcount == 0){
//             int count = ay;
//             if((ay == 0 && b==0 ) || (ay==0 && c==0) || (c==0 && b==0)){
//                 count = 0;
//             }
//             else if(b==0 || c==0){
//                 count = ay;
//             }
//             else if(ay%2 == 0 && ay != 0){

//                 if(ay + b <= c){
//                     count = ay + b;
//                 }
//                 else{
//                     if(c>b){
//                         c = c - (ay/2 + 1);
//                         b = b  - (ay/2 -1);
//                     }
//                     else{
//                         c = c - (ay/2);
//                         b = b - (ay/2);
//                     }
//                     count = count + min(b,c);
//                 }

                
//             }
//             else if (ay == 0){
//                 count = count + min(b,c);
//             }
//             else{

//                 if(ay + b <= c){
//                     // cout<<"p"<<endl;
//                     count = ay + b;
//                 }
//                 else{
//                     c = c - ((ay+1)/2);
//                     b = b - ((ay)/2);
//                     // cout<<ay/2<<endl;
//                     // cout<<"p"<<c<<" "<<b<<endl;
//                     count = count + min(c,b);
//                 }
//             }
            
            

//             cout<<count<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
//     }


//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int count = 0;

        if(a&1 == 1){
            count++;
        }
        if(b&1 == 1){
            count++;
        }
        if(c&1 == 1){
            count++;
        }

        if(count == 0 || count == 2){
            if(a == 0){
                cout<<min(b,c)<<endl;
            }
            else if(a&1 == 1){
                if(a+b <= c){
                    cout<<a+b<<endl;
                }
                else{
                    cout<<b + ((a+1)/2)<<endl;
                }
            }
            else{
                if(a+b <= c){
                    cout<<a+b<<endl;
                }
                else if( b != c){
                    cout<<b + ((a+2)/2)<<endl;
                }
                else{
                    cout<<b + (a/2)<<endl;
                }

            }
        }
        else{
            cout<<-1<<endl;
        }
    }


    return 0;
}