#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int s=0, m=0, r=0, c=0, w=0, rest=0;

    for(int i=1;i<=n;i++){
        if(i%2==0 && i%3==0 && i%4==0){
            rest++;
        }
        else if(i%2==0 && i%3==0){
            c++;
        }
        else if(i%4==0){
            r = r + 4;
        }
        else if(i%3==0){
            m = m + 3;
        }
        else if(i%2==0){
            s = s + 2;
        }
        else{
            w++;
        }
    }

    cout << "sun: " << s << endl;
    cout << "moon: " << m << endl;
    cout << "star: " << r << endl;
    cout << "cry: " << c << endl;
    cout << "wild: " << w << endl;
    cout << "rest: " << rest << endl;
    cout << "total: " << s+m+r+c+w << endl;

    return 0;
}
