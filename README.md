# Lab1
这节Lab课中，希望大家完成Java版本和C版本的CharCount，具体来说，就是给你一个文本，你统计一下字符的频率并输出到新的文件中（注意'\n'不算）。比如说，给了你以下文本：
```
Thunder and lightning. Enter three Witches
When shall we three meet again
In thunder, lightning, or in rain?
```
需要你输出文本，只需要输出字符和对应的频率就好了。
```
t 13
```

## 要求
1. 输入文本为res目录下的macbeth.txt，要求输出字符及频率到output中的output.txt中。
2. output/ref.txt可以供参考。
3. 需要在CharCountC和CharCountJava的src目录下写入你的代码。
4. 需要你记录一下两者的用时（用代码实现）。
5. 将整个Lab1CharCount打包并命名为"姓名-学号"，上传work_upload/lab1中。


## 思考题
1. Java与C语言有什么不同之处？
2. 你觉得Java的优缺点是什么？C的优缺点是什么？
3. 对比一下两者的用时。

## 选做
将麦克白文本的词汇进行分割，统计各个词汇的频率。比如输入：
```
Thunder and lightning. Enter three Witches
When shall we three meet again
In thunder, lightning, or in rain?
```
输出
```
thunder, 1
lightning, 1
```
不需要分割标点符号，只需要将" "空格作为分隔符就好了。
