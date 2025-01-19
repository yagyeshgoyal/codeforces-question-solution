#include<iostream>
#include<cmath>
using namespace std;

// long long int find_free_days(long long int n, long long int p, long long int l , long long int t){

//     long long int task = 0;
//     if(n%7==0){
//         task = n/7;
//     }
//     else{
//         task = n/7 + 1;
//     }

//     long long int free_days = n - task;

//     long long int rem_task = 0;

//     long long int target = 0;
//     if(task%2 == 0){
//         target = task*t + (task/2)*l;
//         free_days = free_days + task/2;
//         rem_task = rem_task + task/2;
//         task = task/2;
//     }
//     else{
//         target = task*t + ((task/2)+1)*l;
//         free_days = free_days + task/2;
//         rem_task = rem_task + task/2 + 1;
//         if(task != 1)
//         task = task/2 + 1;
//         else
//         task = task/2;
//     }

//     while(target>p && task>0){

//         // cout<<task<<" "<<free_days<<endl;
//         if(task%2 == 0){
//             target = task*t + (task/2)*l;
//             free_days = free_days + task/2;
//             rem_task = rem_task + task/2;
//             task = task/2;
//         }
//         else{
//             target = task*t + ((task/2)+1)*l;
//             free_days = free_days + task/2;
//             rem_task = rem_task + task/2 + 1;
//             if(task != 1)
//             task = task/2 + 1;
//             else
//             task = task/2;
//         }
//     }

//     long long int remaning_point =  p - target;

//     if(remaning_point <= 0){
//         return free_days;
//     } 
//     // cout<<free_days<<endl;

//     while(remaning_point>t && rem_task>0){
//         if(task == 0){
//             // cout<<p<<endl;
//             task = task + 2;
//             target = task*t + (task/2)*l;
//             remaning_point = p - target;
//             rem_task = rem_task - 2;
//         }
//         else if(task%2 == 1){
//             target = target + t;
//             remaning_point = remaning_point - t;
//             rem_task--;
//         }
//         else{
//             target = target + t+1;
//             remaning_point = remaning_point - t - 1;
//             rem_task--;
//             free_days--;
//         }
//         // cout<<remaning_point<<" "<<task<<endl;
//     }

//      if(remaning_point <= 0){
//         return free_days;
//     }

//     if(remaning_point<t  && rem_task>0){
//         if(task%2 == 0){
//             return free_days - 1;
//         }
//         else{
//             return free_days;
//         }
//     }

//     if(remaning_point%l == 0){
//         return free_days - (remaning_point/l);
//     }
//     else{
//         // cout<<remaning_point<<endl;
//         return free_days - (remaning_point/l)-1;
//     }

//     // if(remaning_point%7 == 0 && remaning_point %l == 0){
//     //     return free_days - min(remaning_point/7, remaning_point/l);
//     // }
//     // else if(remaning_point%7 != 0 && remaning_point %l == 0){
//     //     return free_days - min(remaning_point/7+1, remaning_point/l);
//     // }
//     // else if(remaning_point%7 == 0 && remaning_point %l != 0){
//     //     return free_days - min(remaning_point/7, remaning_point/l + 1);
//     // }
//     // else{
//     //     return free_days - min(remaning_point/7 +1, remaning_point/l +1);
//     // }
// }

long long int find_free_days(long long int n, long long int p, long long int l , long long int t){
    if(n==1){
        return 0;
    }

    int task = n/7;

    if(n%7 != 0){ task++; }

    int free_days = n - task;

    int s = 1; 
    int end = task;

    int mid = s + (end - s)/2;

    while(s<end){
        // cout<<mid<<endl;
        int target = (mid)*t + (mid/2)*l;
        if(mid%2 == 1){
            target = target + l;
        }

        if(target == p){
            // int temp = task - mid-1;

            // if(mid %2 ==0){
            //     return free_days+ task-mid + mid/2;
            // }
            // else{
                return free_days + task-mid + mid/2 ;
            // }
        } 
        else if(target > p){
            end = mid-1;
        }
        else{
            s = mid+1;
        }

        mid = s + (end - s)/2;
    }

    // cout<<free_days<<endl;

    // if(mid>task){
    //     mid = task;
    // }

    int target = mid*t + (mid/2)*l;

    free_days= free_days+ (task-mid) + mid/2;
    int rem_task = task - mid;
    task = mid;

    // cout<<free_days<<endl;

    if(mid%2 == 1){
        target  = target + l;
    }

    int remaning_point = p - target;
    // cout<<target<<" "<<remaning_point<<endl;

    if(rem_task>0){
        // return free_days-1;
        if(task%2 == 1){
            return  free_days;
        }
        else{
            return free_days - 1;
        }
    }

    if(remaning_point%l == 0){
        return free_days - (remaning_point/l);
    }
    else{
        // cout<<remaning_point<<endl;
        return free_days - (remaning_point/l)-1;
    }

}

long long int find_free_days2(long long int n, long long int p, long long int l , long long int t){
    if(n == 1){
        return 0;
    }

    long long int task = n/7;
    if(n%7 != 0){
        task++;
    }
    long long int free_days = n - task ;
    // cout<<task<<endl;

    long long int temp_task = p/t;
    if(p%t != 0){
        temp_task++;
    }

    if(task>=temp_task){
        long long int target1 = temp_task*t + (temp_task/2)*l;
        if(temp_task%2 != 0){
            target1 = target1 + l;
        }
        long long int target2 = temp_task*t + ((temp_task-1)/2)*l;
        if((temp_task-1)%2 != 0){
            target2 = target1 + l;
        }
        if(target2>=p){
            return free_days + (task-temp_task + 1) + (temp_task-1)/2;
        }
        return free_days + (task-temp_task) + temp_task/2;
    }

    long long int remaning_point = p - task*t - (task/2)*l;

    if(task%2 != 0){
        remaning_point = remaning_point - l;
    }


    free_days = free_days + task/2;


    if(remaning_point%l == 0){
        return free_days - (remaning_point/l);
    }
    else{
        // cout<<remaning_point<<endl;
        return free_days - (remaning_point/l)-1;
    }

}
long long int find_free_days3(long long int n, long long int p, long long int l , long long int t){
    if(n == 1){
        return 0;
    }

    long long int task = n/7;
    if(n%7 != 0){
        task++;
    }
   
    long long int s = 1; 
    long long int  end = task;

    long long int mid = s + (end -s)/2;

    while(s<end)[
        
    ]
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,p,l,t;
        cin>>n>>p>>l>>t;

        // long long  int ans =  find_free_days(n,p,l,t);
        long long  int ans =  find_free_days2(n,p,l,t);

        cout<<ans<<endl;
    }


    return 0;
}