#include <stdio.h>
#include <unistd.h>

int main(void){
    char ch[100];
    int n=0;

    printf("Saisir votre chaine: ");
    //fget du string
    gets(ch);//-std=c99 to compile
    //scanf("%s", ch);
    //we will work with read
    //read(0, ch, sizeof(ch));
    while (ch[n] != '\0')
    {
        n++;
    }

    printf("La taille de votre chaine est: %d", n);

    return 0;
}