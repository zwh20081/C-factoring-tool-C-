#include <bits/stdc++.h>
using namespace std;
long long i=2;
long long yin(int a)
{
    bool end = false;
    long long tmp=0;


        while(a%i==0)
        {
            a/=i;
            tmp++;
        }
        if(a==1)
        {
            if(tmp==1){cout<<i;}
            else
{

         cout<<i<<"^"<<tmp;}
            return 0;
        }else{
            if(tmp==1)
            {
                cout<<i<<"*";
            }else{
            if(tmp!=0)
            {
              cout<<i<<"^"<<tmp<<"*";
            }

            }


    i++;
    yin(a);}

}
int main()
{
	
	cout<<"因式分解器powered by 张文瀚"<<endl<<"-----------------------"<<"本程序将会自动因式分解输入的数"<<endl<<"-----------------------"<<endl;
	cout<<"请输入：";
    long long n;
    cin>>n;
	cout<<"结果：";
    yin(n);
	system("pause");
    return 0;
}


