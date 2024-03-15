# include <stdio.h>

int main (){
    int m=10;
    int n,o;
    int *z =&m;

    printf ("z stored the address of m: 0x%X\n",z);
    printf ("*z stored the value of m: %d\n",*z);
    printf ("&m stored the address of m: 0x%X\n",&m);

    z= &n;
    *z=5;
    printf ("&n sotored the address of n: 0x%X\n",&n);
    printf ("*z sotored the value of n: %d\n",*z);

    z= &o;
    *z=6;
    printf ("&o sotored the address of o: 0x%X\n",&o);
    printf ("*z sotored the value of o: %d\n",*z);

    printf ("&z stored the address of z: 0x%X\n",&z);

}