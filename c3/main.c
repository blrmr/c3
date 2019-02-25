//
//  main.c
//  c3
//
//  Created by 何会举 on 2019/1/11.
//  Copyright © 2019 hehuiju.com. All rights reserved.
//

#include <stdio.h>
#include <string.h>


/*
 * 增加了一行代码
 */

/**
 * string.h
 * size_t strlen(const char *) 获取字符串长度
 * char *strupr(char *) 转大写
 * char *strlwr(char *) 转小写
 * char *strcpy(char *, const char *) 把第二个字符串复制到第一个字符串中
 * char *strcmp(char *, const char *) 比较字符
 * char *strcat(char *, const char *) 字符串拼接
 */
//void getResult();
double GetSum(double n);
int GetsStrLength(char str[])
{
    int count = 0;
    while (str[count] != '\0') {
        //应为使用的fgets 最后加了一个\n(换行符)
        if(str[count] == '\n')
            break;
        count++;
    }
    return count;
}

/*
void GetString(char str[], int count)
{
    fgets(str, count, stdin);
    char *find = strchr(str, '\n');// 查找‘\n’
    if (find) {//如果找到
        *find = '\0';
    }
    int len = GetsStrLength(str);
    printf("数组的长度是:%d\n",len);
}
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    
    /*
    printf("Hello, World!\n");
    // 这2中声明作用是一样的 静态
    //字符串和字符数组的区别: 最后一个是否是空字符(\0)
    char names1[50];
    char names2[50] = "jack";
    printf("请输入字符的名称:");
//    scanf("%s", names2);
    //gets(names2);//输入字符串 自动换行 不安全容易造成越界
    // 第二个参数是字节 第三个是从标准输入流中读取10字节到数组中
    //fget会默认给最后一个元素设置\n
    fgets(names2, 10, stdin);
    for(int i = 0; i < 50; ++i)
    {
        printf("%c\n", names2[i]);
    }
//    printf("%s\n", names2);
   
    
    int len = GetsStrLength(names2);
    printf("获取数组的长度%d\n",len);
    
    //GetString(names1, 20);
     
     */
    
    /*
      字符数组 会把静态存储区的字符串拷贝到数组中
      左边数组中占据的空间(拷贝了一份)  = (右边)静态淳存储区的空间
    */
    
    /*
    char words1[] = "hello,word";
    char words2[] = {'H', 'E', 'L', 'L',
        'O', ',', 'W' ,'O','R','D','\0'};
    //第一个中文字符3个字节
    char words3[] = "你好北工大";
    char word4[20];
    printf("word1的长度:%lu\n", strlen(words1));
    printf("word2的长度:%lu\n", strlen(words2));
    printf("word3的长度:%lu\n", strlen(words3));
    strcpy(word4, words3);
    printf("%s\n",word4);
    // 如果比较相等返回的是0
    int result = strcmp("a", "a");
    char name[50] = "he";
    strcat(name, "huiju");
    printf("拼接后的字符串:%s\n", name);
    printf("字符串比较:%d\n", result);
    
    //右边就一个固定地址的常量
    
    /*
     * 指针->  拷贝了一份地址(同一片空间)
     */
    
    /*
    char *word = "my heart is still.";
    word += 9; // 移动了指针
    printf("%s", word);
    
    
    //指针指向就是存储的地址
    // 数组名就存储的数组的首地址
    char str[] = "For The Horda";
    char *str2 = "For The Horda";
    
    printf("字符串常量的地址: %p\n", "For The Horda");
    printf("字符串数组首地址: %p\n", str);
    printf("字符串指针的地址: %p\n", str2);
    
    char ch;
    printf("请输入字符串:\n");
    ch = getchar();
    putchar(ch);
    putchar(ch);
    putchar(ch);
    putchar(ch);
    printf("\n");
    putchar(ch);
    putchar(ch);
    putchar(ch);
    putchar(ch);
    
    
    

    printf("%c\n", ch);
    printf("%d\n", ch);
    putchar(ch);
    printf("%c\n", ch);
     
    int sum=0;
    int m;
    for (int i = 0; i < 5; ++i) {
        printf("请输入数据:\n");
        scanf("%d", &m);
        sum = sum + m;
    }
    printf("求和:sum=%d\n", sum);
    getResult();
     */
//    double result = GetSum(3);
    char str[20];
    char *p = str;
    printf("in put string:");
    gets(p);
    printf("%s\n",p);//根据首地址就可以输出字符串
    
//    printf("递归的数列:%lf\n", result);
    return 0;
};


void getResult()
{
    printf("我的是在函数后");
}

// 求和
double GetSum(double n)
{
    if (n == 1 || n == 0) {
        return 1;
    }else{
//        printf("%lf",GetSum(n-1));
        return 1/(n+n-1)+GetSum(n-1);
    }
}

