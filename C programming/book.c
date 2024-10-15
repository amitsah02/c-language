#include <stdio.h>
Struct book {
Char b_name[20];
Char a_name[10];
Float price;
Int page;
}x,y,z;
Void main () {
Printf(“enter the information of first book “);
Scanf(“%s %s %f %d”, x.b_name, &x.a_name, &x.price, &x.page);
Printf(“enter the information of second book “);
Scanf(“%s %s %f %d”, &y.b_name, &y.a_name, &y.price, &y.page);
Printf(“enter the information of Third book “);
Scanf(“%s %s %f %d \n”, &z.b_name, &z.a_name, &z.price, &z.page);
Printf(“information of first book are \n“);
Printf(“name =%s \n author name =%s \n prince =%f \n number of pages =%d\n”,x.b_name, x.a_name, x.price, x.page);
Printf(“information of second book are \n“);
 Printf(“name =%s \n author name =%s \n prince =%f \n number of pages =%d”, y.b_name, y.a_name, y.price, y.page);
Printf(“information of Third book are \n“);
Printf(“name =%s \n author name =%s \n prince =%f \n number of pages =%d”, z.b_name, z.a_name, z.price, z.page);
}
