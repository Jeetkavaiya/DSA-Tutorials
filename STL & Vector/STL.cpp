// ARRAY:
/*#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index"<<" "<<a.at(2)<<endl;
    cout<<"Empty or not"<<" "<<a.empty()<<endl;

    cout<<"1st element"<<" "<<a.front()<<endl;
    cout<<"Last element"<<" "<<a.back()<<endl;
    return 0;
}*/

// VECTOR:
/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "capacity" << " " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity"<< " " << v.capacity() << endl;

    v.push_back(2); // double the capacity
    cout << "capacity" << " " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity" << " " << v.capacity() << endl;
    cout << "size->" << v.size() << endl;

    cout << "element at 2nd index" << " " << v.at(2) << endl;
    cout << "front" << " " << v.front() << endl;
    cout << "back" << " " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }cout<<endl;

    cout<<"before clear size"<<" "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size"<<" "<<v.size()<<endl;

    return 0;
}*/

// DEQUEUE:
/*#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);//add 1 from back
    d.push_front(2);//add 2 from front

    for(int i:d)
    {
        cout<<i<<" ";
    }
    //d.pop_back();
    cout<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"1st ele"<<" "<<d.at(1)<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;

    return 0;
}*/

// LIST:
/*#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    list<int> n(5, 100);
    cout << "printing n " << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
        ;
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}*/

// PRIORITTY QUEUE:
/*#include <iostream>
#include <queue>
using namespace std;

int main()
{ // max heap
    priority_queue<int> max;

    // min heap
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(1);
    max.push(3);
    max.push(2);
    max.push(0);

    cout << "size->" << max.size() << endl;
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    min.push(5);
    min.push(1);
    min.push(0);
    min.push(4);
    min.push(3);

    cout << "size->" << min.size() << endl;
    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }
    cout << endl;

    return 0;
}*/

// SET:
/*#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    // s.erase(s.begin());
    // for(auto i:s)
    // {
    //     cout<<i<<endl;
    // }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<endl;
    }

    cout<<"count->"<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(5);
    cout<<"value present at itr-> "<<*it<<endl;
    return 0;
}*/

// STL ALGORITHMS:
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower bound->" << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bound->" << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "max->" << max(a, b) << endl;
    cout << "min->" << min(a, b) << endl;
    swap(a, b);
    cout << "a->" << a << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "string->" << s << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}