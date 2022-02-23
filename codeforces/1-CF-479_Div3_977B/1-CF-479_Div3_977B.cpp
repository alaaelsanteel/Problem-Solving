///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    fast;
    string  myname, name,s,x,y,ss;
    cin>>myname;
    int n;
    cin>>n;
    string name2[n];
    map<string ,int>m;
    loop(n)
    {
        cin>>name>>s;

        if(s=="likes")
            {
                cin>>ss>>y;
                 name2[i].append(ss.begin(),ss.end()-2);
            }
        else
            {
                cin>>x>>ss>>y;
                 name2[i].append(ss.begin(),ss.end()-2);
            }
            if(myname==name)
            {
                if(s=="posted")
                    m[name2[i]]+=15;
                    else if (s=="commented")
                        m[name2[i]]+=10;
                    else
                        m[name2[i]]+=5;
            }
            else if(myname==name2[i])
            {
                if(s=="posted")
                    m[name]+=15;

                    else if (s=="commented")
                        m[name]+=10;
                    else
                        m[name]+=5;
            }
            m[name]+=0;
            m[name2[i]]+=0;
    }
map<string,int>::iterator it;
multimap<int, string, greater<int> > mp;
    for(it=m.begin();it!=m.end();it++)
    {
        pair<string,int>p=*it;
        mp.insert(make_pair(p.second,p.first));
    }
multimap<int,string>::iterator i;

for(i=mp.begin();i!=mp.end();i++)
{
    pair<int,string>pp =*i;
    if(pp.second!=myname)
        cout<<pp.second<<endl;
}
      return 0;

}
