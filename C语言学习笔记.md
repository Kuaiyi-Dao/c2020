# C语言学习笔记

# 记录你学习过程中的所见所思！酸甜苦辣！

# 看什么看！ 赶紧填坑啊！ 
#struct 结构体
## 结构体用得比较少，语法容易忘记。
```
struct 结构名{
    代码 1
    代码 2
}结构变量;
```
如果没有“结构变量”，则只是对结构体的说明。
如果只说明，在进行定义变量时，可以这样用：
```
struct StrName{
    int mem;
};

struct StrName S1, S2;
```
也可以不用结构名，称为无名结构，一般用于函数内部。

ps:在用了结构变量时，就定义了一个，或多个结构体（数量较少），如果定义多个（数量较多），要用结构名来定义。

#typedef 定义结构体
如果用typedef来定义结构体，如果在结构体后面没有跟结构变量，则在具体定义时，就和上面没有typedef是一样的用法。
````
typedef struct St1{
    int mem1;
};

struct St1 Name1;
````
如果加了“结构变量”，此时就不代表进行了定义，而是将该类型的结构体用“结构变量”重新命名了。
````
typedef struct St1{
    int mem1;
}st1;
//此时可直接用st1来进行定义
st1 name1;
````
####链表反序
这个简直让人头痛，逻辑太绕了
#####大概有这么两种方法 
#####1：遍历链表各节点，创建一个新的头结点，通过插入的方法一个一个的反序
#####2: 原地反序，这个最绕了，想到的方法为，创建2个临时指针（结构体的类型），然后将这两个指针分别赋值为第一个节点，和第二个节点（这两个指针相当与个这两个节点创建了一个副本，如果要用这两个指针当作中间变量的话，逻辑上还要麻烦一点，而且极易出错，我在这样做的时候主要遇到了这样一个问题：当只创建了一个指针，没给他赋值时，他就是个野指针，如果直接对这个指针的保存下一个节点地址的成员变量赋值时就会有问题，他可能指向了系统内存）通过这两个副实现交换，具体可以自行推到