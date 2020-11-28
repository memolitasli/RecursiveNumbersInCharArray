#include <stdio.h>
#include <stdlib.h>
int rek(char arr[10]){
if(*arr == '\0'){
    return 0;
}
else{
    if(*arr >= '0' && *arr <= '9'){
        return 1+rek(arr+1);
    }
    else{
        return rek(arr+1);
    }
}
}
int main()
{
    char dizi[100];
    printf("char dizisi giriniz");
    scanf("%s",dizi);
    int adet = rek(dizi);
    printf(" %d ",adet);
    return 0;
}
