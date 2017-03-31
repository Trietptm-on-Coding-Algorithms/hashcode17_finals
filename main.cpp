#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define ff first
#define ss second
#define mp make_pair
#define pb push_back

#define MAXN 1000000

string FILE_IN, FILE_OUT;

int main(int argc, char *argv[]){
    int INPUT_FILE = -1;
    if (argc == 1){
        cerr<<"No input specified, using input 1"<<endl;
        INPUT_FILE = 1;
    }
    if (argc == 2){
        int z = atoi(argv[1]);
        if (z == 0 && strlen(argv[1]) == 1){
            cerr<<"You specified 0 as first arg, but input numbers are from 1 to 4.. Idiot.\nUsing input 1, just for this time"<<endl;
            INPUT_FILE = 1;
        } else if (z == 0)
            INPUT_FILE = 0;
        else {
            if (z < 1 || z > 4){
                cerr<<"Your input file was not in [1,4], using 1 because I'm merciful"<<endl;
                INPUT_FILE = 1;
            } else
                INPUT_FILE = z;
        }
    }
    switch (INPUT_FILE){
        case 1:
            FILE_IN = "A.in";
            FILE_OUT = "A.out";
            break;
        case 2:
            FILE_IN = "B.in";
            FILE_OUT = "B.out";
            break;
        case 3:
            FILE_IN = "C.in";
            FILE_OUT = "C.out";
            break;
        case 4:
            FILE_IN = "D.in";
            FILE_OUT = "D.out";
            break;
        case 0:
            FILE_IN = string(argv[1]);
            FILE_OUT = FILE_IN + ".out";
            break;
        default:
            cerr<<"Look, i dunno how you get there, ask someone.";
            return 1;
    }
    
    int param = 0;
    scanf("%d", &param);
    cout<<"Got parameter"<<param<<endl;
    
    freopen(FILE_IN.c_str(),"r",stdin);
    
    cout<<"Here do the magic"<<endl;
    
    int a;
    scanf("%d", &a);
    cout<<"Now i'll print the score (a+param**2)"<<endl;
    cout<<a+param*param<<endl;
    
    freopen(FILE_OUT.c_str(),"w",stdout);
    cout<<"Here print the solution"<<endl;
    return 0;
}
