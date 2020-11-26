
- Proszę wpisać do pliku ulubiony cytat, nazywając plik nazwiskiem osoby, która go powiedziała:
- Do powyższego pliku dopisać na koniec kolejny cytat tej samej osoby:
int main()
{
    FILE *fp;

    const char tekst[] = "Losting all hope was freedom\n ";
    if ((fp=fopen("Fight_club.txt", "w")) == NULL) {

        printf("Nie moge otworzyć pliku Fight_club.txt do zapisu!\n");
        exit(1);
    }

    fprintf (fp, "%s", tekst);
    fclose (fp);

    fp=fopen("Fight_club.txt", "a");
    const char tekst2[]= "Jak się nie wie, czego się chce, to się kończy w otoczeniu mnóstwa rzeczy, których się nie chce.";
    fprintf (fp, "%s", tekst2);
    fclose(fp);

    return 0;
}

- Program, który spróbuje odczytać pewien plik i wyświetlić na ekran, jednakże w razie gdy plik nie istnieje proszę wyświetlić informacje o błędzie na standardowe wyjście błędów.
int main(){

    FILE *fp;

    if ((fp=fopen("Plik.txt", "r")) == NULL) {

        perror("błąd otwarcia pliku");
        exit(-10);
        }
    char tekst[100];
    fscanf(fp, "%s", tekst);
    printf("%s", tekst);
    return 0;
}

- Program, który odczyta z pliku imię i wiek, format danych w pliku: "Jestem Imie, mam 20 lat", po odczytaniu powinno się wyświetlić "Imie", oraz 20

int main(){

    FILE *fp;
    fp=fopen("Dane.txt", "r");
    if(fp == NULL) {

        perror("błąd otwarcia pliku");
        exit(-10);
        }

    char jestem[6], imie[20], mam[3], wiek[2];
    fscanf(fp, "%s %s %s %s", &jestem, &imie, &mam, &wiek);
    printf("%s,%s", imie, wiek );
    return 0;
}
