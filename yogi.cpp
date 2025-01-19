#include<iostream>
using namespace std;

int main(){
	
	string s;
	cin>>s;

	int vol = 0;
	int cons = 0;
	int y = 0;
	int n = 0; 
	int  g = 0;

	for(int i=0; i<n; i++){
		if(s[i] == 'A' || s[i] == 'E' || s[i] =='I' || s[i] == 'O' || s[i] == 'U'){
			vol++;
		}
		else if(s[i] == 'Y'){
			y++;
		}
		else if(s[i] == 'G'){
			g++;
		}
		else if(s[i] == 'N'){
			n++;
		}
		else{cons++;}
	}

	int ans= 0;

	int p = min(n/2,vol);
	ans = ans + p*3;
	n = n - p*2;
	vol = vol - p;

	int countn = p*2;
	int countg = 0;

	if(vol == 0){

		int q = min(n/2,y);
		ans  = ans + q*3;
		n = n - q*2;
		y = y-q;
		countn = countn + q*2;

		if(y==0){
			ans = ans + min(countn, g);
		}
		else{
			if(n==1){
				if(cons>0){
					ans = ans + 3;
					n--;
					cons--;
					y--;
					countn++;
				}
				else if(g>0){
					ans = ans + 3;
					n--;
					g--;
					y--;
					countn++;
					countg++;
				}
				else if(y>1){
					ans = ans + 3;
					n--;
					y--;
					y--;
					countn++;
				}
			}

			int r = min(cons/2, y);
			ans  = ans + r*3;
			cons = cons - r*2;
			y = y - r;

			if(y==0){
				ans= ans + min(countn, g);
			}
			else{
				if(cons == 1){
					if(g>0){
						ans =ans + 3;
						cons--;
						g--;
						y--;
						countg++;
					}
					else if(y>1){
						ans = ans + 3;
						cons--;
						y--;
						y--;

					}
				}

				int s = min(g/2, y);
				ans = ans + s*3;
				g = g - s*2;
				y = y - s;
				countg = countg + s*2;

				if(y==0){
					ans = ans + min(countn,g);
				}
				else{
					if(g==1){
						if(y>1){
							ans = ans + 3;
							g--;
							y--;
							y--;
							countg++;
						}
					}

					ans = ans + ((y/3)*3);
					y = y - ((y/3)*3);

					ans = ans + min(countn, min(countg,y));
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
				countn++;
			}
			else if(g>0){
				ans = ans+ 3;
				n--;
				g--;
				vol--;
				countn++;
				countg++;
			}
			else if(y>0){
				ans = ans + 3;
				n--;
				y--;
				vol--;
				countn++;
			}
		}

		cout<<"pdjf"<<endl;

		int q = min(cons/2,vol);
		ans = ans + q*3;
		cons = cons - q*2;
		vol = vol - q;

		if(vol == 0){
			int r = min(cons/2,y);
			ans = ans + r*3;
			cons = cons - r*2;
			y = y - r;

			if(y==0){
				ans = ans + min(countn,g);
			}
			else{
				if(cons==1){
					if(g>0){
						ans = ans + 3;
						cons--;
						y--;
						g--;
						countg++;
					}
					else if(y>1){
						ans= ans + 3;
						cons--;
						y--;
						y--;
					}
				}

				int s = min(g/2,y);
				ans = ans + s*3;
				g = g - s*2;
				y = y - s;
				countg = countg + s*2;

				if(y==0){
					ans= ans + min(countn,g);
				}
				else{
					if(g==1){
						if(y>1){
							ans = ans + 3;
							g--;
							y--;
							y--;
							countg++;
						}
					}

					ans= ans + ((y/3)*3);
					y = y - ((y/3)*3);

					ans= ans + min(countn, min(countg,y));
				}
			}
		}
		else{
			if(cons == 1){
				if(g>0){
					ans = ans + 3;
					cons--;
					g--;
					vol--;
					countg++;
				}
				else if(y>0){
					ans = ans + 3;
					cons--;
					y--;
					vol--;
				}
			}

			int r = min(g/2,vol);
			ans = ans + r*3;
			g = g - r*2;
			vol = vol - r;
			countg = countg + r*2;

			if(vol == 0){
				int s = min(g/2,y);
				ans = ans + s*3;
				g = g - s*2;
				y =y- s;
				countg = countg + s*2;

				if(y==0){
					ans = ans + min(countn,g);
				}
				else{
					if(g==1){
						if(y>1){
							ans= ans + 3;
							g--;
							y--;
							y--;
							countg++;
						}

					}

					ans = ans + ((y/3)*3);
					y = y - ((y/3)*3);

					ans= ans + min(countn, min(countg,y));
				}
			}
			else{
				if(g==1){
					if(y>0){
						ans= ans + 3;
						g--;
						y--;y--;
						countg++;
					}
				}

				int s = min(y/2,vol);
				ans = ans + s*3;
				y = y -s*3;
				vol= vol - y;

				if(y==0){
					ans = ans + ((y/3)*3);
					y =  y - ((y/3)*3);

					ans = ans + min(countn, min(countg,y));
				}
				// else{

				// }
			}
		}
	}

	cout<<ans<<endl;

	return 0;
}