#include<set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
   set <int> s;

   for(int i = 0 ; i < a.size() ; i++){
       s.insert(a[i]);
   }

   for(int i = 0 ; i < b.size() ; i++){
       s.insert(b[i]);
   }

   vector<int> merged;

   for(auto it:s)
   {
       merged.push_back(it);
   }

   return merged;
}
