#include <stdio.h>
#include <string.h>
 
#define STATES  256
#define SYMBOLS 20
 
int N_symbols; 
int NFA_states;
char *NFAtab[STATES][SYMBOLS];
 
int DFA_states; /* number of DFA states */
int DFAtab[STATES][SYMBOLS];
 
/*Print state-transition table.*/
void put_dfa_table(
    int tab[][SYMBOLS], /* DFA table */
    int nstates,    /* number of states */
    int nsymbols)   /* number of input symbols */
{
    int i, j;
 
    puts("STATE TRANSITION TABLE");
 
    /* input symbols: '0', '1', ... */
    printf("     | ");
    for (i = 0; i < nsymbols; i++) printf("  %c  ", '0'+i);
 
    printf("\n-----+--");
    for (i = 0; i < nsymbols; i++) printf("-----");
    printf("\n");
 
    for (i = 0; i < nstates; i++) {
        printf("  %c  | ", 'A'+i);  /* state */
        for (j = 0; j < nsymbols; j++)
            printf("  %c  ", 'A'+tab[i][j]);
        printf("\n");
    }
}
 
/*Initialize NFA table.*/
void init_NFA_table()
{
/*
    NFA table for ex.21 at p.76
 
    NFAtab[0][0] = "01";
    NFAtab[0][1] = "0";
    NFAtab[1][0] = "";
    NFAtab[1][1] = "01";
 
    NFA_states = 2;
    DFA_states = 0;
    N_symbols = 2;
*/
/*
    NFA table for ex.17 at p.72
*/
    NFAtab[0][0] = "12";
    NFAtab[0][1] = "13";
    NFAtab[1][0] = "12";
    NFAtab[1][1] = "13";
    NFAtab[2][0] = "4";
    NFAtab[2][1] = "";
    NFAtab[3][0] = "";
    NFAtab[3][1] = "4";
    NFAtab[4][0] = "4";
    NFAtab[4][1] = "4";
 
    NFA_states = 5;
    DFA_states = 0;
    N_symbols = 2;
}
 
/*String 't' is merged into 's' in an alphabetical order.*/
