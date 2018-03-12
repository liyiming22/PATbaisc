#include "iostream"
#include "algorithm"
#include "cstring"
#include "vector"
using namespace std;

struct Student{
    char sid[10];
    int moral;
    int talent;
};

bool Cmp(Student a,Student b)
{
    if(a.moral + a.talent != b.moral + b.talent)
        return a.moral + a.talent > b.moral + b.talent;
    else if(a.moral != b.moral)
        return a.moral > b.moral;
    else
        return strcmp(a.sid,b.sid) < 0;
}

int main()
{
    int count = 0;
    vector<Student> v1,v2,v3,v4;
    Student students;
    int N,L,H;
    scanf("%d%d%d",&N,&L,&H);
    for(int i = 0; i < N; i++){
        scanf("%s%d%d",students.sid,&students.moral,&students.talent);
        if(L <= students.moral && L <= students.talent){
            ++count;
            if(H <= students.moral && H <= students.talent)
                v1.push_back(students);
            else if(H <= students.moral && H > students.talent)
                v2.push_back(students);
            else if(H > students.moral && H > students.talent && students.moral >= students.talent)
                v3.push_back(students);
            else
                v4.push_back(students);
        }
    }
    //用自定义的Cmp排序规则来对四类学生进行排序
    sort(v1.begin(),v1.end(),Cmp);
    sort(v2.begin(),v2.end(),Cmp);
    sort(v3.begin(),v3.end(),Cmp);
    sort(v4.begin(),v4.end(),Cmp);
    printf("%d\n",count);
    //迭代器遍历vector
    vector<Student> :: iterator iter;
    for(iter = v1.begin(); iter != v1.end(); iter++)
        printf("%s %d %d\n",iter->sid,iter->moral,iter->talent);
    for(iter = v2.begin(); iter != v2.end(); iter++)
        printf("%s %d %d\n",iter->sid,iter->moral,iter->talent);
    for(iter = v3.begin(); iter != v3.end(); iter++)
        printf("%s %d %d\n",iter->sid,iter->moral,iter->talent);
    for(iter = v4.begin(); iter != v4.end(); iter++)
        printf("%s %d %d\n",iter->sid,iter->moral,iter->talent);
    return 0;
}
