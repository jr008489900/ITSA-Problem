#include<iostream>
#include<algorithm>
using namespace std;
const int maxs=50;
int heap[maxs];
void initial()
{
    fill(heap,heap+maxs,0);
}
void heapify(int cur)
{
    while(heap[cur/2]>heap[cur]&&cur!=0)
    {
        swap(heap[cur/2],heap[cur]);
        cur/=2;
    }
    return ;
}
void print(int n)
{
    for(int i=1;i<=n;i++)
        {
            cout << heap[i] ;
            if(i!=n) cout << " ";
        }
        cout << endl;
}
int main()
{
    int n;
    while(cin >> n )
    {
        initial();
        int cur=0;
        for(int i=0;i<n;i++)
        {
            int temp; cin >> temp;
            heap[++cur]=temp;
            heapify(cur);
        }
        print(n);
        sort(heap+1,heap+n+1);
        print(n);
    }
}
