#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,n=1;
    while(n!=0){
        int i;
        cout << "Enter an integer: ";
        cin>> i;
        if(i%2==0){
            a++;
        }else{
            b++;
        }
        n=i;
    }

    cout << "#Even numbers = "<<a-1<<endl;
    cout << "#Odd numbers = "<<b;
    return 0;
}
