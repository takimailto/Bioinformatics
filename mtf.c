#include <iostream>
#include <algorithm>
#include <string>
#include <list>
using namespace std;

int MTF_transform(const string &text,int* result_MTF,list<char> &mylist){
    list<char>::iterator it;
    for(int i=0;i<text.size();i++){
        it=find(mylist.begin(), mylist.end(),text[i]);  ///查找当前字符
        result_MTF[i]=distance(mylist.begin(),it);  ///保存当前字符在mylist中的索引
        mylist.erase(it);   ///删除元素
        mylist.push_front(text[i]); ///把当然元素添加到index为0的位置
    }
    return 0;
}

int main(int argc,char* argv[])
{
    string text = "bananaaa";
    int *result_MTF = new int[text.size()];
    list<char> mylist;
    for(int i=0;i<26;i++){
        mylist.push_back('a'+i);
    }

    MTF_transform(text,result_MTF,mylist);
    for(int i=0;i<text.size();i++){
        cout<<result_MTF[i]<<" ";
    }
    delete [] result_MTF;
    return  0;
}
