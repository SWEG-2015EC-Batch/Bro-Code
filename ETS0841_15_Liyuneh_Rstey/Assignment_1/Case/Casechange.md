3->
input-- a letter
operation--- change the letter to upper case if it is lower or to lower if it is upper
output upper/lower case letter
pseudo code
1. start
2. input a letter
3. if the letter is lower change to upper and if it is upper change to lower
4. print the case
5. end
flow chart
```mermaid
graph LR;
id1([Start]);
id2[/Input letter/];
id4{letter is lowercase?};
id3(change to lowercase);
id5[/Print letter/];
id7[/change to uppercase/];
id6([End]);
id1-->id2;
id2-->id4;
id4--yes-->id7;
id4--no-->id3;
id3-->id5;
id5-->id6;
id7-->id5;
```
