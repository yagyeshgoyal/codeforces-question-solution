#include<iostream>
using namespace std;

int main()
{
    // int t;
    // cin>>t;

    // while(t--){
        string s;
        cin>>s;

        int cons = 0;
        int vol = 0;
        int y = 0;
        int n= 0;
        int g = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                vol++;
            }
            else if(s[i] == 'Y'){
                y++;
            }
            else if(s[i] == 'N'){
                n++;
            }
            else if(s[i] == 'G'){
                g++;
            }
            else{
                cons++;
            }


        }

        int ans = 0;

        int p = min(n/2,vol);

        ans = p*3;
        n = n- p*2;
        vol = vol - p;

        int usen = p*2;
        int useg = 0;

        if(vol == 0){
            // ans = ans + min(p*2,g);
            int k = min(n/2,y);
            n = n - k*2;
            y = y - k;
            ans = ans + k*3;

            usen  = usen + k*2;

            if(y==0){
                ans = ans + min(usen , g);
            }
            else{
                if(n==1){
                    if(cons >0){
                        ans = ans  + 3;
                        n--;
                        usen++;
                        cons--;
                        y--;
                    }
                    else if(g>0){
                        ans = ans + 3;
                        n--;
                        usen++;
                        g--;
                        useg++;
                        y--;
                    }
                    else if(y>1){
                        ans = ans + 3;
                        n--;
                        usen++;
                        y = y-2;
                    }
                }


                int r = min(cons/2 , y);

                ans = ans + r*3;

                cons = cons - r*2;
                y = y-r;

                if(y==0){
                    ans = ans + min(usen,g);
                }
                else{
                    if(cons == 1){
                        if(g>0){
                            ans = ans + 3;
                            cons--;
                            y--;
                            g--;
                            useg++;
                        }
                        if(y>1){
                            ans = ans + 3;
                            cons--;
                            y=y-2;
                        }
                    }

                    int sp = min(g/2,y);

                    ans = ans + sp*3;
                    g = g - sp*2;
                    y = y - sp;
                    useg = useg + sp*2;

                    if(y == 0){
                        ans = ans + min(usen, g);
                    }
                    else{
                        if(g==1){
                            if(y>1){
                                ans = ans + 3;
                                g--;
                                useg++;
                                y = y-2;
                            }
                        }
                        ans = ans + ((y/3)*3);

                        y = y - ((y/3)*3);

                        ans = ans + min(usen,min(y,useg));
                        
                    }
                }

            }
        }
        else{
            if(n==1){
                if(cons>0){
                    ans = ans + 3;
                    n--;
                    cons--;
                    vol--;
                    usen++;
                }
                else if(g>0){
                    ans = ans + 3;
                    n--;
                    vol--;
                    g--;
                    usen++;
                    useg++;
                }
                else if(y>0){
                    ans = ans + 3;
                    n--;
                    vol--;
                    y--;
                    usen++;
                }
            }

            int r = min(cons/2,vol);

            ans = ans + r*3;
            cons = cons - r*2;
            vol = vol - r;

            if(vol == 0){

                int p = min(cons/2, y);
                ans = ans + p*3;
                cons = cons - p*2;
                y = y - p;

                if(y==0){
                    ans =ans + min(usen,g);
                }
                else{
                    if(cons==1){
                        if(g>0){
                            ans = ans + 3;
                            cons--;
                            y--;
                            g--;
                            useg++;
                        }
                        if(y>1){
                            ans = ans + 3;
                            cons--;
                            y = y-2;
                        }
                    }

                    int sp = min(g/2,y);

                    ans = ans + sp*3;
                    g = g - sp*2;
                    y = y - sp;
                    useg = useg + sp*2;

                    if(y == 0){
                        ans = ans + min(usen, g);
                    }
                    else{
                        if(g==1){
                            if(y>1){
                                ans = ans + 3;
                                g--;
                                useg++;
                                y = y-2;
                            }
                        }


                        ans = ans + ((y/3)*3);

                        y = y - ((y/3)*3);

                        ans = ans + min(usen,min(y,useg));
                        
                    }
                }
            }
            else{

                if(cons==1){
                    if(g>0){
                        ans = ans + 3;
                        cons--;
                        g--;
                        vol--;
                        useg++;
                    }
                    else if(y>0){
                        ans = ans + 3;
                        cons--;
                        y--;
                        vol--;
                    }
                }


                int q = min(g/2,vol);
                ans = ans + q*3;
                g = g - q*2;
                vol  = vol - q;
                useg = useg + q*2;

                if(vol == 0){

                    int nm = min(g/2,y);
                    ans = ans + nm*3;
                    g = g - nm*2;
                    y = y - nm;
                    useg = useg + nm*2;

                    if(y==0){
                        ans = ans + min(usen, g);
                    }
                    else{
                        if(g==1){
                            if(y>1){
                                ans = ans + 3;
                                g--;
                                useg++;
                                y = y - 2;
                            }
                        }

                        ans =  ans + (y/3)*3;
                        y = y - ((y/3)*3);
                        ans = ans + min(usen, min(useg,y));
                    }
                }
                else{
                    if(g==1){
                        if(y>0){
                            ans = ans + 3;
                            g--;
                            useg++;
                            y = y - 1;
                            vol--;
                        }
                    }


                    int sp = min(y/2,vol);
                    ans = ans + sp*3;
                    y = y - sp*2;
                    vol = vol - sp;


                    if(vol == 0){
                        int tps = (y/3)*3;
                        ans = ans + tps;
                        y = y - tps;

                        ans = ans + min(usen,min(useg,y));
                    }
                    // else{

                    // }
                }
            }
        }
        

        cout<<ans<<endl;


    // }


    return 0;
}