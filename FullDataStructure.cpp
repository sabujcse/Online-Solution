/*****************************************************
*#*##################################################*                                                  *
*#****************************************************                                                  *
*#*       URI:          sabujbd,                   *#*
*#*       UVA:          sabuj_coder.               *#*
*#*       LIGHTOJ:      return_SS,                 *#*
*#*       DEVSKILL:     return_SS                  *#*
*#*       CODEFORCES:   return_SS                  *#*
*#*       TIMUS:        return_SS                  *#*
*#*       CODEMARSHAL:  return_SS                  *#*
*#*       HACKERRANK    return_SSP                 *#*
*#*                                                *#*
*#*                                                *#*
*#*          Sabuj sarker                          *#*
*#*          def: CSE;                             *#*
*#*    Daffodil International University           *#*
*#*                                                *#*
*#*                                                *#*
*****************************************************
*####################################################
*****************************************************/
#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
typedef      string                  S;
typedef      long long               ll;
typedef      long long int           lli;
typedef      unsigned int            ui ;
typedef      unsigned long long int  ulli;
typedef      double                  D;
typedef      float                   f;
typedef      int                     I;
#define      Clear(a) memset( a, 0, sizeof(a))
#define      sc     scanf
#define      pf     printf
#define      cn     cin
#define      ct     cout
#define      en     endl
#define      pb     push_back
#define      pp     pop_back
#define      t_r     true
#define      f_r     false
#define      PI    a(cos)
#define      nl     NULL
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      priority_queue<int,vector<int>,compare>pq;
#define      N 100000
int prime[N];
void  permutation(string ss)
{sort(ss.begin(),ss.end());
    do{cout<<ss<<endl;}while(next_permutation(ss.begin(),ss.end()));}

I Bigmod( I b , lli p, I m )
{if( p== 0 ){return 1;}
    if( p % 2 == 0 )
    {lli re = Bigmod( b, p/2, m );return ( re*re )%m;}
    else if( p%2 == 1 ){lli p1 = b%m;lli p2 = Bigmod( b, p-1, m );return ( p1 * p2 )%m;}}

void Sieve_of_Eratosthenes()
{   for( int i = 2; i<=N; i++){prime[i] = 1;}
    prime[0] = prime[1] = 0;
    int root = sqrt(N);
    for( int i = 2; i<=root; i++ ){
    for( int j = i*i; j<=N; j+=i ){if(prime[j]){prime[j] = 0;}}}}


 struct Node{

    int data;
    struct Node* link;

 };
 struct Node* head;

 /**
     Delete Node Function

 **/
 void dalete_node( int position)
 {
     if( position == 1){
        struct Node* fp;
        fp = head;
        head = head ->link;
        free(fp);
     }
     else{
        struct Node* ap;
        ap = head;
        for( int i = 1; i<=position-2; i++ ){
            ap = ap->link;
        }
        struct Node* dp;
        dp = ap->link;
        ap->link = dp->link;
        free(dp);

     }
 }

  /**
     Print Function

 **/

 void print_structure()
 {
     struct Node* p;
     p = head;
     while( p != nl ){
        pf("%d\n",p->data);
        p = p->link;
     }
     pf("\n");
 }

  /**
     Insert Data target position Function

 **/

 void position_insert( int dd, int position)
 {
     struct Node* pi = (struct Node*) malloc(sizeof(struct Node));
     struct Node* pi2 = (struct Node*) malloc(sizeof(struct Node));

     pi ->data =  dd;
     pi ->link = nl;

     pi2 = head;
     int i;
     for(  i = 1; i<=position-2; i++){
         pi2 = pi2->link;
     }
      struct Node* d;
      d = pi2;
     for( int j = 1; j<=1; j++){
        d = d->link;
     }
     pi2->link = pi;
    pi->link = d;

 }

  /**
     Insert data To the End Function

 **/
 void insert_number( int n)
 {
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     temp -> data = n;
     temp ->link  = nl;
     if( head == nl){
        head = temp;
     }
     else{struct Node* tmp;
        tmp = head;
        while( tmp->link != nl){tmp = tmp ->link;}
        tmp ->link = temp;
        }
}
 /**
    Insert Begining Function

 **/
 void insert_begining( int num )
 {
     struct Node* bg = (struct Node*)malloc(sizeof(struct Node));
     bg -> data = num;
     bg -> link = head;
     head = bg;}
int  main()
{
     head = nl;
     int t_c;
     int number;
     sc("%d",&t_c);
     for( int i = 1; i<=t_c; i++ ){

        sc("%d",&number);
        insert_number(number);
     }
     pf("Before delete\n");
     print_structure();
     position_insert(5,3);
     pf("After Delete\n");
     print_structure();
     return 0;
}

