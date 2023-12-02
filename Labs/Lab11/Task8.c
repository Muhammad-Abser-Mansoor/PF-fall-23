/* Programmer: Abser Mansoor
 * Date: 23/11/2023
 * Desc.: Use structs to find if boxes will fit into a tunnel
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct boxes {
    int length;
    int width;
    int height;
};

int main() {
    struct boxes box[4] = {{5,5,5},{1,2,40},{10,5,41},{7,2,42}};
    for (int i = 0;i < 4;i++) {
        if (box[i].height < 41) {
            int volume = box[i].height * box[i].length * box[i].width;
            printf("Volume of box %d is %d\n",i+1,volume);
        }
        else {
            printf("Box will not fit\n");
        }
    }
    return 0;
}
