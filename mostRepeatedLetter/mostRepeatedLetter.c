#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Burak Önce  20120205052
//Bu program string dizisinde en çok geçen harfi bulur


void encokf(char s1[],char s2[],int b[],int c[]) //Fonksiyon
{

  for(int x=0;x<7;x++)  //en çok bulunan harfi bulması için gerekli döngü
  {
    for(int y=0;y<7;y++)    //tüm elemanlar için bu döngü de gerek
    {

      if(s1[x]==s1[y])
      b[x]++;

    }

  }
    for(int x=0;x<16;x++)  //en çok bulunan harfi bulması için gerekli döngü
    {
        for(int y=0;y<16;y++)  //tüm elemanlar için bu döngü de gerek
        {
            if(s2[x]==s2[y])
            c[x]++;

        }

    }

            for(int x=0; x<7; x++)
            { // dizi sıralanması için döngü

                for(int y=0,atama; y<7; y++)

                if(b[x] > b[y])
                {

                atama=b[x];  //dizi içi yer değiştirme
                b[x]=b[y];
                b[y]=atama;

                atama=s1[x];  //dizi içi yer değiştirme
                s1[x]=s1[y];
                s1[y]=atama;

                }

            }
                                for(int x=0; x<16; x++)
                                { // dizi sıralanması için döngü

                                    for(int y=0,atama; y<16; y++)

                                        if(c[x] > c[y])
                                        {

                                        atama=c[x];  //dizi içi yer değiştirme
                                        c[x]=c[y];
                                        c[y]=atama;

                                        atama=s2[x];  //dizi içi yer değiştirme
                                        s2[x]=s2[y];
                                        s2[y]=atama;

                                         }

                                }

printf("%c",s1[0]);
printf("\n%c",s2[0]);
}


int main() {
  
char s1[7]="ankara";
    char s2[16]="Bu bir stringdir";
    
int b[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int c[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
encokf(s1,s2,b,c);




  return 0;
}