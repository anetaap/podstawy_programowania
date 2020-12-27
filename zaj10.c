//- Funkcja porównująca dwa czasy (godzina, minuta, sekunda) i zwracająca późniejszy
#include <stdio.h>
#include <time.h>


int main () {
    

   double diff_t;
   time_t start_t, end_t;

   time(&start_t);
   printf("Start: %s \n", ctime(&start_t));
   
   printf("Sleeping for 5 seconds...\n");
   sleep(5);

   time(&end_t);
   printf("End: %s", ctime(&end_t));
   diff_t = difftime(end_t, start_t);
  
   
   if(diff_t<0){
       printf("%s", ctime(&start_t));
   }
   else 
    printf("%s", ctime(&end_t));
    
return 0;
}
