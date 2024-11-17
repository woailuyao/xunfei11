#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() 
{
    string a1;
    cin>>a1;

	vector<char> a(a1.begin(), a1.end());
	
	
    auto it =find(a.begin(), a.end(), '.');
    auto it1 =find(a.begin(), a.end(), '/');
    auto it2 =find(a.begin(), a.end(), '%');

    if (it != a.end()) //小数
    {
        for(int i = 0; i < a.size(); i++) 
        {
            if(a[i] == '.')
            {
                vector<int> vec;
                vector<int> vec1;
                copy(a.begin(),a.begin()+i, vec.begin());
                copy(a.begin()+i,a.end(), vec1.begin());
                reverse(vec.begin(), vec.end());
                reverse(vec1.begin(), vec1.end());
                for (size_t i = 0; i < vec.size(); i++) 
                {
                    cout << vec[i];
                }
                for (size_t i = 0; i < vec1.size(); i++) 
                {
                    cout << vec1[i] ;
                }
                cout << endl;
               cout<<"abc"<<endl;
            }
        }
         return 0;
    } else
    if (it1 != a.end()) //分数
    {
        for(int i = 0; i < a.size(); i++) 
        {
            if(a[i] == '/')
            {
                vector<int> vec;
                vector<int> vec1;
                copy(a.begin(),a.begin()+i, vec.begin());
                copy(a.begin()+i,a.end(), vec1.begin());
                reverse(vec.begin(), vec.end());
                reverse(vec1.begin(), vec1.end());
                for (size_t i = 0; i < vec.size(); i++) 
                {
                    cout << vec[i] ;
                }
                for (size_t i = 0; i < vec1.size(); i++) 
                {
                    cout << vec1[i] ;
                }
                cout << endl;
                cout<<"b"<<endl;
            }
        }   
        return 0;
    } else
    if (it2 != a.end()) //百发数
    {
       // a.pop_back(); 
       cout<<"c"<<endl;
    } else{
    
    reverse(a.begin(), a.end());
    for (size_t i = 0; i < a.size(); i++) 
    {
        cout << a[i];
    }
    cout << endl;
    
    return 0;
    } 
    
}