// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int curnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         curnt = 0;
//         for (int j = i; j < n; j++)
//         {
//             curnt=curnt+arr[j];
//             cout<<arr[j];
//         }
//         cout<<endl;
//     }

//     return 0;
// }


#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;
int arr[n];


for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}
int curnt=0;
for (int i = 0; i < n; i++)
{
    curnt=0;

    for (int j = i; j<n; j++)
    {
        curnt=curnt+arr[j];;
        cout<<arr[j];
    }
    cout<<endl;
}


return 0;
}