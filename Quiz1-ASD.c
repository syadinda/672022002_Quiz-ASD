
#include <stdio.h>

int main ()
{
    int n;

    printf ("================ \n");
    printf ("Tugas Quiz ASD \n");
    printf ("================ \n");
    puts ("1. Level 1");
    puts ("2. Level 2");
    puts ("3. Level 3");
    puts ("4. Next");
    printf ("Pilih level :");
    scanf ("%d", &n);

    system ("cls");

    switch (n) {
        case 1 :
            printf ("Ini adalah level satu \n");
            int i,j,l;
            {
                printf ("Masukkan angka :");
                scanf ("%3d", &n);

                    for (i=0; i<=n+1; i++) {
                        l=i;
                        for (j=0; j<i; j++) {
                            printf ("%3d", l-1);
                            l++;
                        }
                        printf ("\n");
                    }
                    break;
            }

        case 2 :
             printf ("Ini adalah level dua \n");
            int p,q, r;
            {
                printf ("Masukkan angka :");
                scanf ("%3d", &n);

                    for (int p=1; p<=10; p++)
                    {
                        for (int r=1; r<=p; r++)
                        {
                            printf ("%3d", r*p);
                        }
                        printf ("\n");
                    }
                    break;

            }

        case 3 :;
            int e, g=1;
            printf("Masukkan jumlah angka (max 9): ");
            scanf("%d",&e);
            e = e-1;
            // Menambah jumlah pattern
            for(int k=1; k<=e+1; k++)
            {
              // Menambah spasi awal
              for(int h=k; h<=e; h++)
              {
                printf(" ");
              }
              // Menambah digit angka
              for(int d=1; d<=2*k-1; d++)
              {
                 if(d<k) printf("%d",g++);
                 else if(d==k) printf("%d",g);
                 else printf("%d",--g);
               }
               printf("\n");
             }
             // Mengurangi jumlah angka
             for(int k=e; k>=1; k--)
             {
               // Menambah spasi awal
               for(int h=e; h>=k; h--)
               {
                 printf(" ");
               }
               // Menambah angka
               for(int d=1; d<=2*k-1; d++)
               {
                 if(d<k) printf("%d",g++);
                 else if(d==k) printf("%d",g);
                 else printf("%d",--g);
               }
               printf("\n");
             }
            break;

        case 4 :
            printf("Terima Kasih! Sangat Menyenangkan!!");
            return 0;
            break;
    }
}

