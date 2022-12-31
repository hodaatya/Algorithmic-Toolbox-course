#include <iostream>
#include <vector>
int n ;
using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here

 //   if(stops[0]>tank||(dist-stops[n-1]>tank)) {

  //      return -1;
  //  }
 //   if (dist<=tank)
 //   {
       // return 0;
 //   }
  //  else
  //  {
         n+=1;
       int numRefills=0 ,curentrefill=0,lastrefil=0;

        while (curentrefill<=n){
            lastrefil=curentrefill;
            while (curentrefill<=n&& stops[curentrefill+1]-stops[lastrefil]<=tank)
            {
                curentrefill++;
            }

            if (curentrefill==lastrefil)
            {
                return -1;
            }
            if(curentrefill<=n)
            {
                numRefills++;
            }
        }
        return numRefills;

    }



int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;

    cin >> n;

    vector<int> stops(n+2);
    stops[0]=0;
    for (int  i = 1; i <= n; ++i)
        cin >> stops[i];
    stops[n+1]=d;
        cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}

