#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    int i=0;
    int count=0;
    getline(cin,s);
    getline(cin,t);
    if(s.length()==0 || t.length()==0) {
        count=max(s.length(),t.length());
    }
    else {
        if(s.length()>t.length()) {
            while(t.length()>=0) {
                auto x=s.find(t);
                if(x!=string::npos) {
                    count=count+x;
                    if(s.length()>t.length()) {
                        count=count+(s.length()-t.length());
                    }
                    else if(t.length()>s.length()) {
                        count=count+(t.length()-s.length());
                    }
                    break ;
                }
                else if(t.length()!=0) {
                    count+=1;
                    t.erase(t.begin()+i);
                }
                else {
                    count=count+s.length();
                }
                i++;
            }
        }
        else {
            while(s.length()>=0) {
                auto x=t.find(s);
                if(x!=string::npos) {
                    count=count+x;
                    break ;
                }
                else if(s.length()!=0) {
                    count+=1;
                    s.erase(s.begin()+i);
                }
                else {
                    count=count+t.length();
                }
                i++;
            }
        }
    }
    cout<<count;
    return 0;
}
