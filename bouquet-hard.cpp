#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int n,m;
        cin>>n>>m;
        // cout<<m<<endl;

        map<long long int,long long int>mpyogi;
        set<long long int>styogi;

        long long int arr1[n];
        long long int arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }

        for(int i=0; i<n; i++){
            

            mpyogi[arr1[i]] = arr2[i];
            styogi.insert(arr1[i]);
        }
        

        vector<pair<long long int, long long int>>v;
        auto it = styogi.begin();
        v.push_back({-1,*(it)});
        auto it2 = it;
        it2++;
        while(it2 != styogi.end()){
            if(*(it2) - *(it) == 1){
                v.push_back({*(it),*(it2)});
            }
            else{
                v.push_back({-1,*(it2)});
            }

            it = it2;
            it2++;
        }

        long long int ans = 0;
        for(int i=0; i<v.size(); i++){
            int a= v[i].first;
            int b = v[i].second;
            // cout<<a<<" "<<b<<endl;
            long long int sum ;
            if(a==-1){
                sum = 1ll*mpyogi[b]*b;

                if(sum>m){
                    long long int p = sum - m;
                    int bs = p/b;
                    
                    if(p%b != 0){
                        bs++;
                    }

                    sum = sum - 1ll*bs*b;
                }
            }
            else{
                // cout<<"k"<<endl;
                sum = 1ll*mpyogi[a]*a + 1ll*mpyogi[b]*b;
                // cout<<sum<<endl;

                if(sum>m){
                    long long int p = sum - m;
                    // cout<<p<<endl;
                    int as = p/a;
                    int bs = p%a;
                    // int bs2 = p/b;
                    // int as2 = 0;

                    // if(p%a == 0){

                    // }
                    // else if(p%a == 1){
                    //     bs++;

                    //     if(as>0)
                    //     as--;
                    // }
                    // else{
                    //     as++;
                    // }

                    // if(p%b != 0){
                    //     as2++;
                    // }

                    // if(as>mpyogi[a]){
                    //     // int pt = as-mpyogi[a];
                    //     as = mpyogi[a];

                    //     long long int temp = p - 1ll*as*a ;
                    //     bs = temp/b;

                    //     if(temp%b != 0){
                    //         bs++;
                    //     }

                    //     if(bs>mpyogi[b]){
                    //         bs = mpyogi[b];
                    //     }
                    // }

                    // if(bs>mpyogi[b]){
                    //     bs = 
                    // }

                    if(bs != 0){
                        int pt = 0;
                        if(bs<=as){
                            as = as - bs;
                        }
                        else{
                            pt = bs-as;
                            if(a-pt<a-bs){
                                bs = as;
                                as = 1;
                            }
                            else{
                                bs = 0;
                                as++;
                            }
                            
                        }

                        if(bs>mpyogi[b]){
                            long long int stp = bs-mpyogi[b];
                            bs = mpyogi[b];
                            // stp = stp*b;

                            if(pt == 0){
                                as = as + stp;
                                as = as + (stp/a);
                                if(stp%a != 0){
                                    as++;
                                }
                            }
                            else{
                                stp = 1ll*stp*b + pt;
                                as = stp/a;
                                if(stp%a != 0){
                                    as++;
                                }
                            }
                        }
                        else if(as>mpyogi[a]){
                            long long int smt = as-mpyogi[a];
                            as = mpyogi[a];
                            smt = 1ll*smt*a;
                            if(pt != 0){
                                smt = smt - a;
                                smt = smt + pt;
                            }
                            bs = bs + (smt/b);
                            if(smt%b != 0){
                                bs++;
                            }
                        }


                    }

                    sum = sum - (1ll*as*a + 1ll*bs*b);

                    // cout<<as<<" "<<bs<<endl;
                    // cout<<(1ll*as*a + 1ll*bs*b)<<endl;

                }
                    // cout<<sum<<endl;
            }


            ans = max(ans,sum);
        }

        cout<<ans<<endl;
    }


    return 0;
}