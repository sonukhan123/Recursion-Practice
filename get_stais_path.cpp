#include <iostream>
#include<string>
#include<vector>
using namespace std;
int arr[]={1,2,3};

vector<string> get_stair_paths(int n) {
  int i,j;
  if(n==0){
    vector<string> v={""};
    return v;
  }
  vector<string> rec_res=get_stair_paths(n-1);
  vector<string>::iterator it=rec_res.begin();
  if(rec_res.size()==1){
    for(i=0;i<3;i++){
        if(arr[i]==1)
            *it = "1";
    }
  }
  for(i=0;i<rec_res.size();i++,it++){
        int num=stoi(*it);
        if(num<n){
            if(n%num==0){

                for(j=num;j>0;j=j/2){
                    int temp =num/j;
                }
            }
        }
    }

  }





}

int main()
{
    string s="749";
    vector<string> *p=get_keypad(s,0);
    int i=0;
    vector<string>::iterator it=p->begin();
    for(it=p->begin(),i=0;it<p->end();it++,i++)
cout<<*it<<" "<<i<<",";

    return 0;
}
