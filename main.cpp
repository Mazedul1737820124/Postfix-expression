#include<iostream>
#include<stack>
#include <string.h>
#include <cmath>


using namespace std;
int Temp = 0;
int a,b;

stack<int>S;

int Convert(char ch){

    return (ch - 48);
}

int main() {


    string Str;
    char Ch;

    cout<<"Please enter your postfix expression  i.g(1 2 +) :"<<endl;
    cin>>Str;

    int L = Str.size();

    for (int i = 0; i < L ; ++i) {


            if(Str[i] >= '0' && Str[i]<= '9') {
                int va = Convert(Str[i]);
               // cout<<va<<" ";
                S.push(va);
            }


        else {

            if (Str[i] == '+')
                Ch = '+';

            if (Str[i] == '-')
                Ch = '-';

            if (Str[i] == '*')
                Ch = '*';

            if (Str[i] == '/')
                Ch = '/';

            if (Str[i] == '^')
                Ch = '^';

            switch (Ch) {



                case '+':

                    a = S.top();
                    S.pop();
                    b = S.top();
                    S.pop();

                    Temp = a + b;

                    cout<<a<<"+"<<b<<"="<<Temp<<endl;

                    S.push(Temp);
                    break;

                case '-':
                    a = S.top();
                    S.pop();
                    b = S.top();
                    S.pop();
                    Temp = a - b;
                    cout<<a<<"-"<<b<<"="<<Temp<<endl;
                    S.push(Temp);
                    break;

                case '*':
                    a = S.top();
                    S.pop();
                    b = S.top();
                    S.pop();
                    Temp = a * b;
                    cout<<a<<"*"<<b<<"="<<Temp<<endl;
                    S.push(Temp);
                    break;

                case '/' :
                    a = S.top();
                    S.pop();
                    b = S.top();
                    S.pop();
                    Temp = a / b;
                    cout<<a<<"/"<<b<<"="<<Temp<<endl;

                    S.push(Temp);
                    break;

                case '^' :
                    a = S.top();
                    S.pop();
                    b = S.top();
                    S.pop();

                    Temp = powl(a,b);
                    cout<<a<<"^"<<b<<"="<<Temp<<endl;
                    S.push(Temp);

                    break;

                default:
                    0;
            }
        }


    }

    cout<<"\nThe result is : "<<S.top();

    return 0;
}

/*Mazedul Islam*/