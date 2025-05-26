#include <stdio.h>
struct book{
    char title[70];
    char Auther[30];
    int price;
}flowers;

void input_bookdetailes(){
printf("enter title:");
fgets(flowers.title,70,stdin);
printf("enter Authher:");
fgets(flowers.Auther,30,stdin);
printf("enter price:");
scanf("%d",&flowers.price);

}

void save_detailes(){
        FILE*PETER;
        PETER = fopen("big.txt","a");
        if(PETER == NULL) {
            printf("file not found");
        return;
        }
        fprintf(PETER,"%s %s %d",flowers.title,flowers.Auther,flowers.price);
        fclose(PETER);
    }
    void display_savedbookdetails(){
       FILE*PETER = fopen("big.txt","r");
        if(PETER == NULL) {
           printf("file not READ"); 
           return;
        } 
         

    fgets(flowers.title, 70,PETER);
    fgets(flowers.Auther, 30,PETER);
    fscanf(PETER,"%d",&flowers.price);
  
    printf("\n saved details\n");
    printf("title:%s",flowers.title);
    printf("author:%s",flowers.Auther);
    printf("price:%d",flowers.price);
    fclose(PETER);
}

int main(){
    input_bookdetailes();
    
 save_detailes();
  display_savedbookdetails();

    return 0; 
}