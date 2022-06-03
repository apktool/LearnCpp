# 顺序容器

- vector
- deque
- list
- froward_list
- array
- string

# 顺序容器适配器

- stack
- queue
- priority

# 关联容器

- map
- multimap
- unordered_map
- unordered_multimap
- set
- multiset
- unordered_set
- unordered_multiset

# iterator定义的迭代器

|     名称      | 说明                                  |
|:-----------:|:------------------------------------|
|    插入迭代器    | back_insert, front_insert, inserter |
| iostream迭代器 | istream_iterator, ostream_iterator  |
|    反向迭代器    | reverse_iterator                    |

# 迭代器分类

| 名称 | 说明 |
|:---------:|:------------|
| 输入迭代器 | 只读，不写；单遍扫描，只能递增 |
| 输出迭代器 | 只写，不读；单遍扫描，只能递增 |
| 前向迭代器 | 可读写；多遍扫描，只能递增 |
| 双向迭代器 | 可读写；多遍扫描，可递增递减 |
| 随机访问迭代器 | 可读写；多遍扫描，支持全部迭代器运算 |
