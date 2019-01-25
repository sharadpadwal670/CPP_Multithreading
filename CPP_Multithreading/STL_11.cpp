/*
 * STL_11.cpp
 *
 *  Created on: Jan 25, 2019
 *      Author: sharadpadwal670
 */

#include<iostream>
#include<thread>
#include<initializer_list>
#include<vector>
using namespace std;

void foo(initializer_list<int> i){
cout<<"Size is:"<<i.size()<<endl;
for(initializer_list<int>::iterator itr=i.begin();itr!=i.end();++itr)
{
cout<<*itr<<" ";
}
cout<<endl;
}

int main(){
initializer_list<int> il={1,2,3,4,5,6};
thread t1{foo,il};
t1.join();
vector<int> v1={55,33,222,202,88,22,12,323};
v1.push_back(20000);
thread t2{[](vector<int>v2){
	for(vector<int>::iterator itr1=v2.begin();itr1!=v2.end();++itr1)
	{
    cout<<*itr1<<" ";
	}
},v1};
t2.join();
return 0;
}






