// Enumeration or Enum in C is a special kind of data type defined by
// the user.
// • Enumerated data consists of named integer constants as a list.
// • Its value by default starts from zero and incremented by one
// sequentially
#include <stdio.h>
enum days{Sunday=1, Monday, Tuesday, Wednesday,
Thursday, Friday, Saturday};
void main(){
for(int i=Sunday ; i<=Saturday; i++) {
printf("%d, ",i);
}
return 0;
}