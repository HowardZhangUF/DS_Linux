/*malloc() 配置 size bytes 的記憶體區塊，會回傳一個指向該記憶體開頭的指標，
這些記憶體的內容是尚未被初始化的，也就是說裡面目前存放的數值是未知的，如果配置失敗的話會回傳 null pointer (NULL)，配置成功的話會回傳 void * 指標,
void * 指標能被轉成任何一種類型的指標，來看看下面的 malloc 用法範例吧！

使用 malloc 配置 20 bytes 記憶體大小的區塊，回傳的 ptr 檢查一下是不是 NULL，
之後使用 strcpy() 複製字串到 ptr 裡並印出來，使用完 ptr 後別忘記了要使用 free() 歸還記憶體區塊。*/
#include<iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    char * ptr ;
    ptr = (char*) malloc(20 * sizeof(char));
    // In a C++ file, explicitly cast malloc's return.  For example,
   // string = (char *)malloc( _MAX_PATH );
    strcpy(ptr,"hello world");
    cout<<ptr<<endl; 
    cout<<*ptr<<endl;
    free(ptr);

}

/*int main() {
    char * ptr;
    ptr = (char *) malloc(sizeof(char) * 20);

    if (ptr == NULL) {
        printf("malloc failed\n");
        exit(1);
    }

    strcpy(ptr, "Hello World");
    printf("%s\n", ptr);
    free(ptr);
    return 0;
}*/
