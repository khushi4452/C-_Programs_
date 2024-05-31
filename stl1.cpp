#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>v; //create vector;
    vector<int>v1(5,1); //initialization


    //size and capacity
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(10);


     cout<<"Size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;

         //update value
      v[1]=5;

      cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"capacity of v1: "<<v1.capacity()<<endl;

    v.push_back(8);

cout<<"Size of v1: "<<v1.size()<<endl;
cout<<"capacity of v1: "<<v1.capacity()<<endl;

vector<int>vnew;
 vnew.push_back(4);
 vnew.push_back(41);
 vnew.push_back(43);
 vnew.push_back(46);
 vnew.push_back(49);
 vnew.pop_back();


 cout<<"Size of vnew: "<<vnew.size()<<endl;
cout<<"capacity of vnew: "<<vnew.capacity()<<endl;

vnew.erase(vnew.begin()+1);
cout<<"Size of vnew: "<<vnew.size()<<endl;
cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
for(int i=0; i<vnew.size(); i++)
cout<<vnew[i]<<"";


}


