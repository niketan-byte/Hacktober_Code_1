// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// // 	int size=45;
// // 	// cin>>size;

// // 	// vector<int> vec1;

// // 	// for(int i=0;i<size;i++)
// // 	// {
// // 	// 	vec1.push_back(i*2);
// // 	// }

// // 	// for(int i=0;i<size;i++)
// // 	// {
// // 	// 	cout<<vec1[i]<<' ';
// // 	// }
// // //_________________________________________

// // // vector<int> vec1={1,2,3,4,5,6,7,8,9,10};


// // // 	for(auto &i:vec1)
// // // 		i=i*5;

// // // 	for(auto &i: vec1)
// // // 		cout<<i<<' ';
// // //___________________________________________

// // // int d1,v1,d2,v2,no;
// // // int count=0,sum=0;
// // // for(int i=1;sum<=no;i++)
// // // {
// // // 	if(count<d1||count<d2)
// // // 		count++;
// // // 	else if(count=d1)
// // // }


// // // 	array<int, 6> arr1={1,2,3,4,5,6};
// // // 	array<int, 6> arr2;
// // // 	arr2={7,8,9,10};

// // // 	cout<<arr1[2]<<'\n';
// // // 	cout<<arr2.at(2)<<'\n';
// // // //This method returns the first element in the array.

// // // 	cout<<arr2.front()<<'\n';
// // // 	cout<<arr2.back()<<'\n';
// // // //This method returns the last element in the array. The point to note here is that if the array is not completely filled, back() will return the rightmost element in the array.

// // // 	int a=2;
// // // 	arr2.fill(2);
// // // 	//This will fill the array myarray with value as 2, at all of its available positions.

// // // 	bool b=arr1.empty();
// // // //returns true if array is empty else return false.

// // // 	int c=arr2.size();
// // // 	cout<<c;
// // // 	//This method returns the number of element present in the array.

// // // 	int d=arr2.max_size();
// // // 	cout<<d;	
// // // //This method returns the maximum size of the array.


// // // 	auto itr1=arr2.begin();
// // // //This method returns the iterator pointing to the first element of the array.

// // // 	auto itr2=arr2.end();
// // // //This method returns an iterator pointing to an element next to the last element in the array, for example the above array has 4 elements and the end() call will return the iterator pointing to the 4th index of the array
	

// // //____________________________________________________________________________


// // // vector<int> vec1;
// // // vector<int> vec2={1,2,3,4,5,6};
// // // //vector<int> vec2 {1,2,3,4,5,6};
// // // vector<int> vec3(vec2.begin(), vec2.end());

// // // vector<string> v(4 , "test");

// // // vec1.push_back(2);

// // // auto itr=vec2.begin();
// // // itr++;
// // // vec2.insert(itr, 34);

// // // for(auto i=vec2.begin();i!=vec2.end();i++)
// // // 	cout<<*i<<'\n';

// // // vec2.pop_back();
// // // vec2.clear();
// // // vec2.swap(vec1);
// // // //size, empty, capacity, front, back are same

// // //____________________________________________________________

// // // 	pair<int,int> pair1, pair3;    //creats pair of integers
// // //    pair<int,string> pair2;    // creates pair of an integer an a string
    
// // //    pair1 = make_pair(1, 2);     // insert 1 and 2 to the pair1
// // //    pair2 = make_pair(1, "Studytonight"); // insert 1 and "Studytonight" in pair2
// // //    pair3 = make_pair(2, 4);
// // //    cout<< pair1.first << endl;  // prints 1, 1 being 1st element of pair1
// // //    cout<< pair2.second << endl; // prints Studytonight

// // //    if(pair1 == pair3)
// // //         cout<< "Pairs are equal" << endl;
// // //    else
// // //         cout<< "Pairs are not equal" << endl;

// // // _______________________________________________________

// // 	list<int> l1;
// // 	list<int> l2{1,2,3};
// // 	list<int> myNewList = l2;

// // 	list<int> l = {1,2,3,4,5};
// //     list<int>::iterator it = l.begin();           
    
// //     l.insert (it++, 100);    // insert 100 before 2 position
// //     /* now the list is 1 100 2 3 4 5 */
    
// //     list<int> new_l = {10,20,30,40};   // new list
    
// //     new_l.insert (new_l.begin(), l.begin(), l.end());
// //     /* 
// //         insert elements from beginning of list l to end of list l 
// //         before 1 position in list new_l */
    
// //     /* now the list new_l is 1 100 2 3 4 5 10 20 30 40 */
    
// //     l.insert(l.begin(), 5, 10);  // insert 10 before beginning 5 times
// //     /* now l is 10 10 10 10 10 1 100 2 3 4 5 */

// //     l.push_back(6);
// //     l.push_back(7);
// //     /* now the list becomes 1,2,3,4,5,6,7 */
    
// //     l.push_front(8);
// //     l.push_front(9);
// //     /*now the list becomes 9,8,1,2,3,4,5,6,7 */

// //     l.pop_back();
// //     /* now the list becomes 1,2,3,4 */
    
// //     l.pop_front();
// //     /* now the list becomes 2,3,4 */
// //         l.reverse();
// //     /* now the list becomes 5,4,3,2,1 */

// //         l1.merge(l2);
// //         //merge l2 in l1.

// // //_________________________________________________________________

// // // map<int,string> m{{1,"nikhilesh"}, {2,"shrikant"} , {3,"ashish"} };
    
    
// // //     cout << m.at(1) ;  // prints value associated with key 1 ,i.e nikhilesh
// // //     cout << m.at(2) ;  // prints value associated with key 2 ,i.e shrikant
    
// // //     /* note that the parameters in the above at() are the keys not the index */
    
// // //     cout << m[3] ; // prints value associated with key 3 , i.e ashish
    
    
    
// // //     m.at(1) = "vikas";   // changes the value associated with key 1 to vikas
// // //     m[2] = "navneet";   // changes the value associated with key 2 to navneet
    
// // //     m[4] = "doodrah";   
// // //     /* since there is no key with value 4 in the map, 
// // //         it insert a key-value pair in map with key=4 and value = doodrah */
    
// // //     m.at(5) = "umeshwa"; 
// // //      since there is no key with value 5 in the map , 
// // //      it throws an exception  

// // //     map<int,int> m{{1,2} , {2,3} , {3,4} };
    
// // //     m.insert( pair<int,int> (4,5));
// // //     /* inserts a new entry of key = 4 and value = 5 in map m */
    
// // //     /* make_pair() can also be used for creating a pair */
// // //     m.insert( make_pair(5, 6));
// // //     /* inserts a new entry of key = 5 and value = 6 */
    
    
// // //     map::iterator i , j;
// // //     i = m.find(2);    // points to entry having key =2
// // //     j = m.find(5);    // points to entry having key =5
    
// // //     map<int,int> new_m;
    
// // //     new_m.insert(i,j);
// // //      /* insert all the entries which are pointed 
// // //      by iterator i to iterator j*/ 
    
// // //     m.insert(make_pair(3,6));  
// // //      // do not insert the pair as map m already contain key = 3 */ 
    
// // //     m.insert_or_assign(make_pair(3,6));  // assign value = 6 to key =3 
// // //__________________________________________________________________________________

// //     //     stack<int> s;   // creates an empty stack of integer s 
    
// //     // s.push(2);   // pushes 2 in the stack  , now top =2
// //     // s.push(3);   // pushes 3 in the stack  , now top =3

// //     // s.pop();

// //     // s.top();

// // //__________________________________________________________________________________

// //         queue <int> q;   // creates an empty queue of integer q 
    
// //     q.push(2);   // pushes 2 in the queue  , now front = back = 2
// //     q.push(3);   // pushes 3 in the queue  , now front = 2 , and back = 3

// //     q.pop() ;  // removes 2 from the stack , front = 3

// //     //____________________________________________________________________________________

// // int a[] = { 1,5,8,9,3 };
// //     deque<int> dq(a, a+5);
// //     /* creates s deque with elements 1,5,8,9,3  */
    
    
// //     dq.push_back(10);
// //     /* now dq is : 1,5,8,9,3,10 */
    
// //     dq.push_front(20);
// //     /* now dq is : 20,1,5,8,9,3,10  */
    
// //     deque<int>::iterator i;
    
// //     i=dq.begin()+2;
// //     /* i points to 3rd element in dq */
    
// //     dq.insert(i,15);
// //     /* now dq 20,1,15,5,8,9,3,10  */
    
// //     int b[]={7,7,7,7};
    
// //     dq.insert(dq.begin() , b , b+4 );
// //     /* now dq is 7,7,7,7,20,1,15,5,8,9,3,10  */
// //     nt a[] = { 1,5,8,9,3,5,6,4 };
// //     deque<int> dq(a,a+8);
// //     /* creates s deque with elements 1,5,8,9,3,5,6,4  */
    
    
// //     dq.pop_back();
// //     /* removes an element from the back */
// //     /* now the deque dq is : 1,5,8,9,3,5,6 */
    
// //     dq.pop_front();
// //     /* now dq is : 1,5,8,9,3,5,6  */

// // //_______________________________________________________________________

// //     vector<int>  v(10) ;    // create a vector of 10 0's
// //     vector<int>::iterator i;  // defines an iterator i to the vector of integers
    
// //     i = v.begin();
// //     /* i now points to the beginning of the vector v */
    
// //     advance(i,5);
// //     /* i now points to the fifth element form the 
// //     beginning of the vector v */
    
// //     advance(i,-1);
// //     /* i  now points to the fourth element from the 
// //     beginning of the vector */ 

// //     vector<int>  v(10) ;    // create a vector of 10 0's
// //     vector<int>::iterator i, j;  // defines iterators i,j to the vector of integers  
    
// //     i = v.begin();
// //     /* i now points to the beginning of the vector v */
    
    
// //     j = v.end();
// //     /* j now points to the end() of the vector v */
    
// //     cout <<distance(i,j)<< endl;
// //     /* prints 10 , */


// //     binary_search(a, a+a.size(), /*the value you have to search*/);
// //     binary_search(s, s+4, "nickt" , compare_string_by_length);
// //     //binary search

// //     sort(arr, arr+5);
// //     sort(a2,a2+9,compare_function);

// //     int values[] = {5,1,6,9,10,1,12,5,5,5,1,8,9,7,46};
    
// //     int count_5 = count(values, values+15, 5);
// //     /* now count_5 is equal to 4 */
    
// //     vector<int> v(values, values+15);
    
// //     int count_1 = count(v.begin(), v.end(), 1);
// //     /* now count_1 is equal to  */

// //________________________________________________________________________
// 	int i,j;
// 	for(i=0, j=100; i<100,j<500; i++,j++)
// 		cout<<i<<' '<<j<<'\n';

// }




// #include<bits/stdc++.h>
// #pragma GCC optimize ("-O3")
// #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define ll long long
// #define double long double
// #define pb push_back
// #define mod 1000000007
// #define int long long
// #define endl "\n"
// #define ss second
// #define ff first
// #define INF 1000000000
// #define all(a) a.begin(),a.end()
// #define gcd(a, b) __gcd((a), (b))
// //ceil(a/b) is equal to (a+b-1)/b
// using namespace std;
 
 
// int power(int a,int n,int p)
// {
//     int res=1;
//     while(n)
//     {
//         if(n%2)
//         {
//         res=(res*a)%p;
//         n--;}
//         else
//         {
//         a=(a*a)%p;
//         n=n/2;}
//     }
//     return res;
// }
 
 
// int binarySearch(int arr[],int l,int r,int x) 
// { 
//     int mid;
//     while(l<=r)
//     {
//         mid=(l+r)/2;
//         if(arr[mid]==x)
//             return mid;
//         if(arr[mid]<x)
//             l=mid+1;
//         else
//             r=mid-1;
//     }
//     return -1;
// } 
 
 
// int fact(int n,int k)       //for calculating nCk
// {
//     int ans=1;
//     if(k>n-k)
//     {
//         k=n-k;
//     }
//     for(int i=1;i<=k;i++)
//     {
//         ans*=(n-i+1);
//         ans/=i;
//     }
//     return ans;
// }
// // cout << std::fixed;
// // std::cout << std::setprecision(9); 
// // auto it = lower_bound(v.begin(), v.end(), n); 
 
 
//  int32_t main()
// {
//     IOS;
//     long long T,N,M,count;bool flag=0;
//   cin>>T;
//   while(T--)
//   { 
//     cin>>M;
    
//     int i;
//     for(i=M;i<1000000000000000001;i++)
//     { flag=0;
//       N=i;
      
//       while(N>0)
//       {
//         int L=N%10;
//         if(L!=0 && i%L!=0)
//           {flag=1;}
//         N=N/10;
//       }
//       if(flag==0)
//       {
//         break;
//       }
//     }
//     cout<<i<<'\n';
    
//   }
// }      




#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T,N,M;       
    cin>>T;
                    
    bool flag=0;int count;
    while(T--)
    { 
      cin>>N;
      long long red[N];
      for(long long i=0;i<N;i++)
      {
        cin>>red[i];
      }
                    // cout<<"check\n";
      cin>>M;
      long long blue[M];
      for(long long i=0;i<M;i++)
      {
        cin>>blue[i];
      }
                    // cout<<"check\n";
      long long maxr=0, maxb=0;

      long long maxi=0;
      for(long long i=0;i<N;i++)
      { maxi+=red[i];
      	long long max0=maxr;
        maxr=max(maxr, maxi);
      }
                    // cout<<"check\n";
      maxi=0;
      for(long long i=0;i<M;i++)
      { maxi+=blue[i];
      	long long max0=maxb;
        maxb=max(max0, maxi);
      }
                  // cout<<"check\n";
      long long ans=max(maxb,maxr);
      long long ans1=max(ans,(maxb+maxr));
      cout<<ans1<<'\n';
    }
}
    
 
 
 
 
        