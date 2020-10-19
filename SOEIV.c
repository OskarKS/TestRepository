#include <stdio.h>
#include <string.h>

int main(void)  {
    int input_sek, rest_sek, s_u, s_d, s_t, s_m, s_s;
    char c_u[] = 'uge';
    char c_d[] = 'dag'; 
    char c_t[] = 'time'; 
    char c_m[] = 'minut'; 
    char c_s[] = 'sekund';   

    printf ("Indtast antal sekunder til beregning:\n");
    scanf  ("%d", &input_sek);               /* gemmer indtastet værdi som heltalsvariabel */

    s_u = input_sek / 604800;                /* sekunder på en uge 60*60*24*7 = 604800     */ 
    rest_sek = input_sek % 604800;           /* resterende sekunder efter heltalsdivision  */

    s_d = rest_sek / 86400;                  /* sekunder på en dag 60*60*24 = 86400        */
    rest_sek = rest_sek % 86400;

    s_t = rest_sek / 3600;                   /* sekunder på en time 60*60 = 3600           */
    rest_sek = rest_sek % 3600;
   
    s_m = rest_sek / 60;                     /* sekunder på et minut 60                    */
    rest_sek = rest_sek % 60;

    s_s = rest_sek;                          /* rest sekunder                              */

    if (s_u > 1) {
        c_u = 'uger';
    } else {
        c_u = 'uge';
    }

    if (s_d > 1) {
        c_d = 'dage';
    } else {
        c_d = 'dag';
    }

    if (s_t > 1) {
        c_t = 'timer';
    } else {
        c_t = 'time';
    }

    if (s_m > 1) {
        c_m = 'minutter';
    } else {
        c_m = 'minut';
    }

    if (s_s > 1) {
        c_s = 'sekunder';
    } else {
        c_s = 'sekund';
    }

    if (s_u > 0) {
      printf ("%d %s, %d %s, %d %s, %d %s, %d %s.\n",   /* print værdier  */
      s_u, c_u, s_d, c_d, s_t, c_t, s_m, c_m, s_s, c_s);  
    } 
    else if (s_d > 0) {
      printf ("%d %s, %d %s, %d %s, %d %s.\n",   /* print værdier  */
      s_d, c_d, s_t, c_t, s_m, c_m, s_s, c_s);  
    }
    else if (s_t > 0) {
      printf ("%d %s, %d %s, %d %s.\n",   /* print værdier  */
      s_t, c_t, s_m, c_m, s_s, c_s);  
    }
    else if (s_m > 0) {
      printf ("%d %s, %d %s.\n",   /* print værdier  */
      s_m, c_m, s_s, c_s); 
    }
    else {
        printf ("%d %s.\n",   /* print værdier  */
      s_s, c_s);
    }
     return (0);
}