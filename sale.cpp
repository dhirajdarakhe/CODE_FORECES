#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    set<int> v;
    for (int i = 0; i < size; ++i)
    {
        int x;
        cin >> x;
        v.insert(x);
    }
    int j = 0;
    for (auto a : v)
    {
        //  cout<<a<<endl;
        if (j != a)
        {
            break;
        }
        j++;
    }
    cout<<j<<endl;
    // if (j & 1)
    // {
    //     cout << "1\n";
    // }
    // else
    // {
    //     cout << "0\n";
    // }
    return 0;
}

// // #include <bits/stdc++.h>
// // #define N 100000
// // using namespace std;

// // bool validInput(int n)
// // {
// //     string str = to_string(n);
// //     bool correct = false;
// //     for (int i = 0; i < str.length(); i++)
// //     {
// //         if (isdigit(str[i]) == false)
// //         {
// //             correct = false;
// //             break;
// //         }
// //         correct = true;
// //     }
// //     return correct;
// // }

// // int main()
// // {
// //     int size;
// //     int count = -1, flag = 0;
// //     cin >> size;
// //     if (validInput(size) == true && (size > 0 && size < N))
// //     {
// //         set<int> arr;
// //         string element;
// //         for (int i = 0; i < size; i++)
// //         {
// //             cin >> element;
// //             bool correct = false;
// //             for (int i = 0; i < element.length(); i++)
// //             {
// //                 if (isdigit(element[i]) == false)
// //                 {
// //                     correct = false;
// //                     break;
// //                 }
// //                 correct = true;
// //             }
// //             if (correct)
// //             {
// //                 stringstream num(element);
// //                 int j1 = 0;
// //                 num >> j1;
// //                 arr.insert(j1);
// //             }
// //             else
// //             {
// //                 cout << "INVALID INPUT";
// //                 flag = 1;
// //                 break;
// //             }
// //         }
// //         if (flag == 0)
// //         {
// //             bool flag = false;
// //             int j = 0;
// //             for (auto a : arr)
// //             {
// //                 //  cout<<a<<endl;
// //                 if (j != a)
// //                 {
// //                     flag = true;
// //                     break;
// //                 }
// //                 j++;
// //             }
// //             cout << " mex " << j << endl;
// //             if (j % 2 == 0)
// //             {
// //                 cout << 0;
// //             }
// //             else
// //             {
// //                 cout << 1;
// //             }
// //         }
// //     }
// //     else
// //     {
// //         cout << "INVALID INPUT";
// //     }
// //     return 0;
// // }

// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int size;
// // //     cin >> size;
// // //     int x;
// // //     set<int> v;
// // //     for (int i = 0; i < size; i++)
// // //     {
// // //         cin >> x;
// // //         v.insert(x);
// // //     }
// // //     for (auto z : v)
// // //     {
// // //         cout<< z <<endl;
// // //     }
// // //     return 0;
// // // // }

#include <bits/stdc++.h>
using namespace std;


int main() {
       
    int n;
    cin>>n;
    if(n<1 || n>100000){
        cout<<"INVALID INPUT"<<endl;
    }
    else{
        int flag=0;
        string s=to_string(n);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<='0' ||s[i]>='9')
            {
                flag=1;
                break;
            }
            
        }
        if(flag==1)
        {
            cout<<"INVALID INPUT"<<endl;
        }
        else{
            
        
    
    vector<int>v;
    set<int>s;
   // assert(n!=1 || n!=100000);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        s.insert(a);
    }
    int fag=0;
    for(auto i:s)
    {
       if(i<0 || i>1000000)
       {
           fag=1;
           break;
       }
    }
    
    if(fag==1){
        cout<<"INVALID INPUT"<<endl;
    }
    else{
    
    
    int mex=-1;
    //sort(v.begin(),v.end());
    int cnt=0;
    for(auto i:s)
    {
        if(i!=cnt)
        {
            mex=cnt;
            break;
        }
        cnt++;
    }
    if(mex==-1)
    {
        mex=cnt;
    }
   //cout<<mex<<endl;
    cout<<mex%2<<endl;
    }
        }
}
    return 0;
}
