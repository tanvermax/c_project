#include<iostream>
using namespace std;
int main(){
char x;
int vowel;
cout<<"enter your harecter"<<endl;

cin>>x;

vowel= (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' );
if (vowel)
{
    /* code */
    cout<<x<<"is vowel"<<endl;
}
else{
    cout<<x<<"is not vowel"<<endl;
}

return 0;
};
