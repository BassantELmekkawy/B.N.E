#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cout <<"1- Cipher a message \n"<< "2- Decipher a message \n";
    cin >>n;

    string x;
    char y[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
    if (n==1){
        cout << "Enter your message: ";
        getline(cin,x);
        for (int i=0; i<x.length(); i++){
            if (not isalpha(x[i])){
                cout <<x[i];
            }
            if (isupper(x[i])){
                x[i]=tolower(x[i]);
            }
            for (int j=0; j<=25; j++){
                if (x[i]==y[j]){
                    cout<< (j-j%5)/5+1 << j%5;
                    break;
                }
            }
        }
    }
    if (n==2){
        string z;
        int s;
        cout << "Enter your message: ";
        getline(cin,z);
        for (int k=0; k<z.length() ;k+=2){
            s=(z[k]-1)*5+z[k+1];
            cout <<y[s];
        }
    }


    return 0;
}
