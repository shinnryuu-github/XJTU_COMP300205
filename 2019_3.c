#include <stdio.h>
#include <string.h>

void DigiTran(int k, char res[]){
    int digits = 0, copy = k;
    if (k == 0){
        res[0] = 'A';
        res[1] = '\0';
        return;
    }
    while (copy != 0){
        copy /= 10;
        digits++;
    }
    int nums[digits], pos = 0;
    for (int i = 0; i < digits; i++){
        nums[digits - 1 - i] = k % 10;
        k /= 10;
    }
    for (int i = 0; i < digits;){
        if (nums[i] <= 2 && i + 1 < digits && nums[i + 1] <= 5){
            res[pos++] = 10 * nums[i] + nums[i + 1] + 'A';
            i += 2;
        }
        else{
            res[pos++] = nums[i] + 'A';
            i++;
        }
    }
    res[pos] = '\0';
}

int main(){
    int k;
    scanf("%d", &k);
    while (k != -1){
        char res[100];
        DigiTran(k, res);
        printf("%s ", res);
        scanf("%d", &k);
    }
}