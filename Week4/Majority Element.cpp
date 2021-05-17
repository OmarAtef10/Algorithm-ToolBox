#include <iostream>
using namespace std;
#include <vector>

int Majority_Elem(vector<int> a, int start , int end){
    if (start == end) return -1;
    if (start+1==end)return a[start];

    int start_elem = Majority_Elem(a,start,(start+end-1)/2+1);
    int end_elem = Majority_Elem(a,(start+end-1)/2+1,end);

    int Scount = 0;
    for(int i = start ; i<end;i++){
        if(a[i]==start_elem)
            Scount++;
    }
    if(Scount>(end-start)/2)
        return start_elem;
    int Ecount = 0 ;
    for(int i = start;i<end;i++){
        if(a[i]==end_elem)
            Ecount++;
    }
    if(Ecount>(end-start)/2)
        return end_elem;

    return -1;

}
int main() {

int n ;
cin>>n;
vector<int>a(n);
for (int i = 0 ; i<a.size();i++){
    cin>>a[i];

}
cout<<(Majority_Elem(a,0,a.size())!=-1)<<'\n';
    return 0;
}
