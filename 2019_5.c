#include <stdio.h>

struct fruitinfo{
    unsigned int id;
    char name[21];
    float sales, price;
};

void set(struct fruitinfo *t){
    scanf("%d %s %f %f", &t->id, &t->name, &t->sales, &t->price);
}

void print(struct fruitinfo *t){
    printf("%d %s %.2f %.2f", t->id, t->name, t->sales, t->price);
}

void sortfruit(struct fruitinfo *t){
    float total[6];
    for (int i = 0; i < 6; i++){
        total[i] = t[i].price * t[i].sales;
    }
    for (int i = 1; i < 6; i++)
    {
        float tmp = total[i];
        struct fruitinfo temp = t[i];
        int j;
        for (j = i; j > 0 && total[j - 1] > tmp; j--){
            total[j] = total[j - 1];
            t[j] = t[j - 1];
        }
        total[j] = tmp;
        t[j] = temp;
    }
}

int main(){
    struct fruitinfo fruits[6];
    for (int i = 0; i < 6; i++){
        set(&fruits[i]);
    }
    sortfruit(fruits);
    for (int i = 0; i < 6; i++){
        print(&fruits[i]);
        printf("\n");
    }
}