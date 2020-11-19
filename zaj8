// Funkcja sort(), która sortuje tablice 

#include <stdio.h>

void sortuj(int tablica[]){
    int a, i, j;
    for(i = 0; i < (sizeof tablica[i]); ++i){
        
        for(j = 0; j < (sizeof tablica[j]); ++j){
            
            if(tablica[j] > tablica[i]){
                
            a = tablica[i];
            tablica[i]  = tablica[j];
            tablica[j] = a;
            }
        }
    }
}

int main() {
    int tablica[] = {5, 9, 0, 6, 4};
    int i;
    sortuj(tablica);
    for(i = 0; i < (sizeof tablica[i]); ++i)
    printf("%d/n", tablica[i]);
  
     return 0;
}

//Funkcja, która otrzymuje dane przez void* i zwiększa pierwszego inta w tak wskazanej pamięci, proszę to przetestować dla inta, struktury zaczynającej się od inta:

#include <stdio.h>
#include <stdlib.h>

struct numbers{
    int a;
    int b;
};

int add(void* number){
	 int i;
	 i = *(int*)number += 1;
	 printf("%d", i);
	 
	 return 0;
}

int main() {
    struct numbers *wsk;
    wsk = (struct numbers*) malloc(sizeof (struct numbers));
    
    (*wsk).a = 10;
    (*wsk).b = 7;
    
    add(wsk);
    
    return 0;
}
  
