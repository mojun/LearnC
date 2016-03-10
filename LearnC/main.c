//
//  main.c
//  LearnC
//
//  Created by mojun on 16/3/8.
//  Copyright © 2016年 kimoworks. All rights reserved.
//

#include <stdio.h>
void code_1_1();
void code_1_2();
void code_1_3();
void code_1_4();

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    code_1_1();
//    code_1_2();
//    code_1_3();
    code_1_4();
    return 0;
}


void code_1_1() {
    printf("----------------\n");
    printf("统计空格、制表符与换行符个数；\n");
    int c, nl, nt, ns;
    
    nl = 0;
    nt = 0;
    ns = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        } else if (c == '\t') {
            ++nt;
        } else if (c == ' ') {
            ++ns;
        }
    }
    printf("nl: %d nt: %d ns: %d \n", nl, nt, ns);
}

void code_1_2() {
    printf("----------------\n");
    printf("将连续多个空格用一个空格代替；\n");
    
    int c;
    int preisblank;
    preisblank = 0;
    while ((c = getchar()) != EOF) {
        if (preisblank == 1 && c == ' ') {
            continue;
        }
        
        if (c == ' ') {
            preisblank = 1;
        } else {
            preisblank = 0;
        }
        putchar(c);
    }
    
}

void code_1_3() {
    printf("----------------\n");
    printf("替换\\t \\b \\\\  \n");
    
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
}
















void code_1_4() {
    /// 原始位置
    float s, s1, s2, s3;
    /// 最小值
    float min = 0;
    /// 最大值
    float max = 100;
    s = 50;
    s1 = 20;
    s2 = 75;
    s3 = 50;
    
    /// 当前位置变量
    float x, x1, x2, x3;
    
    /// 原始值调整后的值
    float t, t1, t2, t3;
    
    /// 最终位置
    float r1, r2, r3;
    
    t = s;//当前操作的bar原始值不用调整
    t1 = s1;
    t2 = s2;
    t3 = s3;
    
    float delta = 0;
    
    /// 模拟bar 从s -> 0
    for (x = s; x>= 0; x--) {
        delta = x - s;
        x1 = x - s + t1;
        if (x1 < min) {
            t1 = s1 - x1;
            r1 = t1 + delta;
        } else if (x1 > max) {
            t1 = s1 + max - x1;
            r1 = t1 + delta;
        } else {
            r1 = x1;
        }
        
        
        x2 = x - s + t2;
        if (x2 < min) {
            t2 = x2 + s2;
        } else if (x2 >max) {
            t2 = max + s2 - x2;
        }
        r2 = t2 + delta;
        
        x3 = x - s + t3;
        if (x3 < min) {
            t3 = x3 + s3;
        } else if (x3 > max) {
            t3 = max + s3 - x3;
        }
        r3 = t3 + delta;
        
        printf("r1: %3.0f  r2: %3.0f  r3: %3.0f \n", r1, r2, r3);
    }
    
}













































