#include <stdio.h>
#include <string.h>
int main()
{
    char textBefore[100] ="dfffffeeeeettttrrrrttttt";
    char textAfter[100];
    memset(textAfter,0,sizeof(textAfter));

    char c;
    int num,i,j;
    for(i=0;i<strlen(textBefore);){
        c   = textBefore[i];    ///临时保存字符
        num = 1;    ///保存个数
        for(j=i+1;j<strlen(textBefore);j++){
            if(c == textBefore[j])
                num++;
            else
                break;
        }
        i = j;

        sprintf(textAfter,"%s%c",textAfter,c);
        sprintf(textAfter,"%s%d",textAfter,num);
    }
    printf("textBefore : %s\n",textBefore);
    printf("textAfter  : %s\n",textAfter);
    return  0;
}

/// 转自 https://www.cnblogs.com/xudong-bupt/p/3761417.html
