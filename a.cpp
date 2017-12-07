#include <bits/stdc++.h>

using namespace std;
#define inf 1000000000
#define unvisited -1
#define visited 1
#define eps 1e-9
#define mp make_pair
#define pb push_back
#define pi acos(-1.0)
#define uint64 unsigned long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

vector<vi> AdjList;

const int maxn = 1001;

int dist[maxn][maxn];
int nextHop[maxn][maxn];

int main(){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	AdjList.assign(n+1,vi());
	memset(dist,-1,sizeof dist);
	memset(nextHop,-1,sizeof nextHop);
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		AdjList[a].pb(b); AdjList[b].pb(a);
	}
	//iterasi tiap node..catet tentangganya siapa saja'

	for(i=1;i<=n;i++){
		dist[i][i] = 0;
		nextHop[i][i] = i;
		
		int ukuran = AdjList[i].size();
		for(j=0;j<ukuran;j++){
			int v = AdjList[i][j];
			dist[i][v] = 1;
			nextHop[i][v] = v;
			
		}
	}

	int q;
	scanf("%d",&q);
	while(q--){
		int a,b;
		scanf("%d %d",&a,&b);
		//int ukuran = listInfo[a].size();
		for(i=1; i<=n; i++){
			int nodeBerinfo = i;
			if(dist[a][nodeBerinfo]==-1){continue;}
			if(dist[b][nodeBerinfo]==-1){
				dist[b][nodeBerinfo] = dist[a][nodeBerinfo] + 1;
				nextHop[b][nodeBerinfo] = a; // kalo dr B mau ke nodeberinfo dari a..harus lewat a
				
			}else if((dist[a][nodeBerinfo]+1) < dist[b][nodeBerinfo]) {
				dist[b][nodeBerinfo] = (dist[a][nodeBerinfo]+1);
				nextHop[b][nodeBerinfo] = a; // kalo dr B mau ke nodeberinfo dari a..harus lewat a
			}else if((dist[a][nodeBerinfo]+1) == dist[b][nodeBerinfo]) {
				if(nextHop[b][nodeBerinfo] > a) {
					nextHop[b][nodeBerinfo] = a;
				}
			}
		}
	}

	//print hasil
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d %d\n",dist[i][j], nextHop[i][j]);
		}
	}
	return 0;
};