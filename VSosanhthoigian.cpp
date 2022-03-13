
#include <bits/stdc++.h>

using namespace std;

string Str(int val)
{
    string q;
    while(val)
    {
        q += char('0' + val%10);
        val /= 10;
    }
    reverse(q.begin(), q.end());
    return q;
}
void chambai(string name, vector<double> &data)
{
    cout<<"Judging "<<name<<"!!!!!!!!!!!!"<<endl;
    clock_t start, end;
    double time_use;
    for(int i = 1; i<=10; ++i)
    {
        cout<<"Running on test "<<i<<":\n";
        start = clock();
        system((name + ".exe " + Str(i)).c_str());
        end = clock();
        time_use = (double)(end - start)/CLOCKS_PER_SEC;
        cout<<name<<"\'s running time on test "<<i<<" : "<<time_use<<endl;
        data.push_back(time_use);
    }
    cout<<"Finished judging!!!!!!"<<endl;
}
int main()
{
    system("sinhtest.exe");
    cout<<"HOAN THANH SINH TEST!!!!!\n";
    vector<double> d1,d2,d3,d4;
    chambai("heapsort", d1);
    chambai("mergesort", d2);
    chambai("quicksort", d3);
    chambai("sort_std", d4);


    cout<<"BANG THOI GIAN SO SANH CAC THUAT TOAN SORT"<<endl;
    cout<<endl;

    cout<<setw(12)<<"thuat toan";
    for(int i=1,b=11;i<11;++i) {
            cout<<setw(12)<<"test " + Str(i);
    }
    cout<<endl;
    cout<<setw(12)<<"heapsort";
    for(int i=0,b=10;i<10;++i){
        cout<<setw(12)<<d1[i];
    }
    cout<<endl;

    cout<<setw(12)<<"mergesort";
    for(int i=0,b=10;i<10;++i){
        cout<<setw(12)<<d2[i];
    }
    cout<<endl;

    cout<<setw(12)<<"quicksort";
    for(int i=0,b=10;i<10;++i){
        cout<<setw(12)<<d3[i];
    }

    cout<<endl;

    cout<<setw(12)<<"sort_std";
    for(int i=0,b=10;i<10;++i){
        cout<<setw(12)<<d4[i];
    }
    cout<<endl;

    return 0;
}
