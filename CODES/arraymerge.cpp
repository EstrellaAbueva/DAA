#include<iostream>
using namespace std;
int main(){
    int arr1[50], arr2[50], arrMerge[100];
	int n, m, i, k;
    
	cout<<"Enter the Size for First Array: ";
    cin >> n;
    
	cout<<"Enter " << n << " Elements for First Array: ";
    for(i = 0; i < n; i++){
        cin >> arr1[i];
        arrMerge[i] = arr1[i];
    }
    
    k = i;//for mrging
    
    cout<<"\nEnter the Size for Second Array: ";
    cin >> m;
    
    cout <<"Enter " << m << " Elements for Second Array: ";
    for(i = 0; i < m; i++){
        cin >> arr2[i];
        arrMerge[k] = arr2[i];
        k++;
    }
  
    cout<<"\nThe New Array (Merged Array):\n";
    for(i = 0; i < k; i++)
        cout << arrMerge[i] << " ";
    

    return 0;
}
