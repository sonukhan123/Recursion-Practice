#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int arr[]={1,2,3};

vector<string> create_combinations(string s,int i){
    if(i==s.size()-1){
        vector<string> res;
        res.push_back( *(new string(1,s[i]) ) );
        return res;
    }
    vector<string> rec_res = create_combinations(s,i+1);
    vector<string>::iterator it;
    int i;
    for(it=rec_res.begin(),i=0;it<rec_res.end();i++){
        string

    }


}


vector<string> get_stair_paths(int n) {
  int i,j,num=0;
  string char_num=*it;
  if(n==0){
    vector<string> v={""};
    sort(arr,arr+3);
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
    char_num=*it;
    int flag =0;
    num=0;
    j=0;
    while(j<char_num.size()){
        if(j>0 && char_num[j-1]!=char_num[j] )
            flag=1;
        num = num+ char_num[j++]-48;
    }
    if(num<n){
        for(j=0;j<3;j++)
            if(arr[j] + num == n)
                *it = *it + to_string(arr[j]);
        }
    }

    if(flag)
       vector<string> temp = create_combinations(char_num,0);



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
