# (NYOJ)数据数据生成器
## 食用说明
生成器包含
 - Generate (随机数生成器)
 - ExampleGenerate (题目数据生成器)
 - ExampleDataGenerate (题目输入数据生成器)
 - ExampleAnswer (标程)

关于 Generate 随机数生成器,我们只需要再DataGenerate中导入Generate类使用即可
```cpp
#include <bits/stdc++.h>
#include "Generate.cpp"

int main()
{
    Generate gen;
    gen.nextInt(1,100000);
    gen.nextDouble(0,1);
    gen.nextChar('a','z');
}
```

对于除了Example以外的题目,我们只需要简单的按照我们的需求更改DataGenerate,把std当作Answer,再在Generate(题目数据生成器)把DATA_GENERATE替换为DataGenerate的可执行程序名,把ANSWER替换为std的可执行程序文件名,编译运行输入希望生成的数据数目即可.