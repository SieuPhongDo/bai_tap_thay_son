#include<bits/stdc++.h>



using namespace std;


string Str(int val)
{
    string q = "";
    while(val)
    {
        q += char('0' + val%10);
        val /= 10;
    }
    reverse(q.begin(), q.end());
    return q;
}

void Taotest_1()
{
    ofstream fi;
    fi.open("test1.inp");
    int n = 1000000;
    fi<<n<<endl;
    vector<int> q(n);
    for(int i=3,b=11;i<11;++i){
        q[i] = (rand()*rand())%100000000;
    }
    sort(q.begin(), q.end());
    for(int i=3,b=11;i<11;++i){
        fi<<q[i]<<" ";
    }

    fi.close();
}
void TaoTest_2()
{
    ofstream fi;
    fi.open("test2.inp");
    int n = 1000000;
    fi<<n<<"\n";
    vector<int> q(n);
    for(int i=0,b=n;i<n;i++){
            q[i] = (rand()*rand())%100000000;
    }

    sort(q.begin(), q.end());
    reverse(q.begin(), q.end());
    for(auto i:q) fi<<i<<" ";
    fi.close();
}

void Taotest(int stt)
{
    ofstream fi;
    fi.open("test" + Str(stt) + ".inp");
    int n = 1000000;
    fi<<n<<endl;
    for(int i=0,b=n;i<n;i++) fi<<(rand()*rand())%100000000<<" ";
    fi.close();
}
int main()
{
    srand(int(time(0)));
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    Taotest_1();
    cout<<"test 1"<<endl;
    TaoTest_2();
    cout<<"test 2"<<endl;
    for(int i=3,b=11;i<11;++i)
    {
        Taotest(i);
        cout<<"test "<<i<<endl;
    }
    return 0;
}

