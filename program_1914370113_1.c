#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main ()
{
	printf("\tBIODATA PRIBADI\n\n");
    printf("NAMA 		: ALICIA YUNIKE RIONA\n");
    printf("NPM 		: 1914370113\n");
    printf("KELAS 		: REGULER 1D\n");
    printf("PRODI 		: SISTEM KOMPUTER\n");
    printf("FAKULTAS 	: SAINS & TEKNOLOGI\n");
    
int a,b,c,x;
printf("Menghitung Nilai Mahasiswa\n\n");
printf("Masukan Nilai UTS\n\n"); scanf("%d",&a);
printf("Masukan Nilai UAS\n\n"); scanf("%d",&b);
printf("Masukan Nilai TUGAS\n\n");scanf("%d",&c);
printf("a=%d b=%d c=%d\n",a,b,c);
if(a==0)printf("Nilai akhir=K,karena nilai UTS =0\n");
else if (b==0)printf("Nilai akhir=K,karena nilai UAS =0\n") ;
else if (c==0) printf("Nilai akhir=K,karena nilai TUGAS =0\n");
else
{
x=(0.40*a+0.60*b+0.40*c)/(0.40+0.60+0.40);
printf("Nilai akhir:(40*%d+60*%d+40*%d)/(40+60+40)= %d\n",a,b,c,x);
}
if(85<=x && x<=100)
printf("lulus\n");
else if(70>=x && x<85)printf("LULUS\n");
else if(56<=x && x<70)printf("kurang \n");
else if(40<=x && x<56)printf("kurang\n");
else if(0<x && x<40)printf("tidak lulus\n");
else printf ("maaf nilai akhir anda tidak jelas");
system("PAUSE");
return(0);

}
