class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int a = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>a){
                a = arr[i];
            }
        }
        return a;
    }
};