//using switch case statement.

#include<iostream>
using namespace std;

char vowels(char i){
    switch (i)
    {
    case 'a':
        cout<<"Given alphabet is vowel"<<endl;
        break;

    case 'e':
        cout<<"Given alphabet is vowel"<<endl;
        break;

    case 'i':
        cout<<"Given alphabet is vowel"<<endl;
        break;
    case 'o':

        cout<<"Given alphabet is vowel"<<endl;
        break;

    case 'u':
        cout<<"Given alphabet is vowel"<<endl;
        break;
    
    default:
    cout<<"Given alphabet is consonant"<<endl;
        break;
    }
}

int main(){
    char a;
    cout<<"Enter a Alphabet: "<<endl;
    cin>>a;
    vowels(a);
    return 0;
}