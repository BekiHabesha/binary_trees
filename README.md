# $$\mathbb{\color{teal}\Huge\ {README.md} \ \color{Green}{FILE}}$$
## 🔢0️⃣1️⃣2️⃣3️⃣4️⃣ $\mathbb{\color{green}\Huge\ {0x1D.C-} \ \color{teal}{Binary\ Trees}\}$ 5️⃣6️⃣7️⃣8️⃣9️⃣🔢

<p align="center">
  <img src="https://i.ibb.co/5shjN7W/0x1-D-C-Binary-trees-Alx-logo.png" />
</p>

### [*0x1D. C - Binary trees*](https://intranet.alxswe.com/projects/270) *is a project to be done in teams of 2 people or alone (solo)*
* ***Done by:*** ***Bereket Dereje Mekkonen***

<p align="center">
  <img src="https://learnloner.com/wp-content/uploads/2023/04/10-1.png" />
  <img src="https://res.cloudinary.com/practicaldev/image/fetch/s--od-naD9n--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://miro.medium.com/max/975/1%2APWJiwTxRdQy8A_Y0hAv5Eg.png" />
</p>

###

* **File_name:📋** 📖 [**README.md**](https://github.com/BekiHabesha/binary_trees/blob/master/README.md) **File**
* **Created: 📅** <ins>**On February 28, 2024**</ins>🕙
* **Author:🖊️** 👨🏻‍💻 [***Bereket Dereje Mekkonen***](https://intranet.alxswe.com/users/BereketDerejeMekkonen) 🧑‍💻
* **Project Title: 🔠**  💻 [**0x1D. C - Binary trees**](https://intranet.alxswe.com/projects/270) 📝🔡
* **GitHub repository: 📦** 📀 [**binary_trees**](https://github.com/BekiHabesha/binary_trees) 💼
* **Project Tasks: 📚** <ins>**Mandatory💯 and Advanced ⁉️**</ins>
* **Tasks in number: 🔢** <ins>**42 Tasks (19-Mandatory & 23-Advanced)**</ins>
* **Mandatory_Tasks:** 💯 <ins>**From Task 0 to 18**</ins> 💯
* **Advanced_Tasks:** ⁉️ <ins>**From Task 19 to 41**</ins> ♨️

###

<p align="center">
  <img src="https://dz2cdn1.dzone.com/storage/temp/13820661-1596719409020.png" />
</p>

##

## <ins>**PROJECT_TITLE</ins>: 🔠**  💻 [**0x1D. C - Binary trees**](https://intranet.alxswe.com/projects/270) 📝🔡

## <ins>**GITHUB_REPOSITORY</ins>: 📦** 📀 [**binary_trees**](https://github.com/BekiHabesha/binary_trees) 💼

### 

<p align="center">
<img src="https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/Picture1-1.jpg" />
</p>

###

<H1> 📚<ins>Project Files</ins>📑 </H1>

<H2> 🪜<ins>Helper Files</ins> 📜 </H2>

* [**binary_tree_print.c**](./binary_tree_print.c) : is a C function that prints a binary trees.
  * It prints a binary trees in a pretty way

###

<H2> 📮<ins>Header Files</ins> 🗒 </H2>

* [**binary_trees.h**](./binary_trees.h) : is a Header file containing definitions and prototypes for all types and functions written for the project.

###

<H2> 📮<ins>Data Structures</ins> 🗒 </H2>

* **use the following data structures and types for binary trees. Don’t forget to include them in your header file.**

#### Basic Binary Tree

```js
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### Basic Search Tree

```js
typedef struct binary_tree_s bst_t;
```

#### AVL Tree

```js
typedef struct binary_tree_s avl_t;
```

#### Max Binary Heap

```js
typedef struct binary_tree_s heap_t;
```

<p align="center">
<img src="https://miro.medium.com/v2/resize:fit:16000/1*CMGFtehu01ZEBgzHG71sMg.png" />
</p>

###

<H1> 📔<ins>Function Prototypes:</ins> 📱</H1>

| <H3 align="center">Task NO.</H3> | <H3 align="center">Title</H3> | <H3 align="center">File</H3> | <H3 align="center">Prototype</H3> |
| :----: | :----:| :---- | :---- |
|   |   |   |   |
|   |   |   |   |
|   |   | <H3 align="center"><ins>Helper</ins></H3> |   |
|   |   |   |   |
|   |   |   |   |
| **🌍** | **Print Array** | [**binary_tree_print.c**](./binary_tree_print.c) | [**void binary_tree_print(const binary_tree_t *tree)**](./binary_tree_print.c) |
|   |   |   |   |
|   |   |   |   |
|   |   | <H3 align="center">MANDATORY TASKS</H3> |  |
|   |   |   |   |
|   |   |   |   |
| **0** | **New<br>node** | [**0-binary_tree_node.c**](./0-binary_tree_node.c) | [**binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);**](./0-binary_tree_node.c) |
|   |   |   |   |
|   |   |   |   |
| **1** | **Insert<br>left** | [**1-binary_tree_insert_left.c**](./1-binary_tree_insert_left.c) | [**binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);**](./1-binary_tree_insert_left.c) |
|   |   |   |   |
|   |   |   |   |
| **2** | **Insert<br>right** | [**2-binary_tree_insert_right.c**](./2-binary_tree_insert_right.c) | [**binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);**](./2-binary_tree_insert_right.c) |
|   |   |   |   |
|   |   |   |   |
| **3** | **Delete** | [**3-binary_tree_delete.c**](./3-binary_tree_delete.c) | [**void binary_tree_delete(binary_tree_t *tree);**](./3-binary_tree_delete.c) |
|   |   |   |   |
|   |   |   |   |
| **4** | **Is<br>leaf** | [**4-binary_tree_is_leaf.c**](./4-binary_tree_is_leaf.c) | [**int binary_tree_is_leaf(const binary_tree_t *node);**](./4-binary_tree_is_leaf.c) |
|   |   |   |   |
|   |   |   |   |
| **5** | **Is<br>root** | [**5-binary_tree_is_root.c**](./5-binary_tree_is_root.c) | [**int binary_tree_is_root(const binary_tree_t *node);**](./5-binary_tree_is_root.c) |
|   |   |   |   |
|   |   |   |   |
| **6** | **Pre-order<br>traversal** | [**6-binary_tree_preorder.c**](./6-binary_tree_preorder.c) | [**void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));**](./6-binary_tree_preorder.c) |
|   |   |   |   |
|   |   |   |   |
| **7** | **In-order<br>traversal** | [**7-binary_tree_inorder.c**](./7-binary_tree_inorder.c) | [**void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));**](./7-binary_tree_inorder.c) |
|   |   |   |   |
|   |   |   |   |
| **8** | **Post-order<br>traversal** | [**8-binary_tree_postorder.c**](./8-binary_tree_postorder.c) | [**void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));**](./8-binary_tree_postorder.c) |
|   |   |   |   |
|   |   |   |   |
| **9** | **Height** | [**9-binary_tree_height.c**](./9-binary_tree_height.c) | [**size_t binary_tree_height(const binary_tree_t *tree);**](./9-binary_tree_height.c) |
|   |   |   |   |
|   |   |   |   |
| **10** | **Depth** | [**10-binary_tree_depth.c**](./10-binary_tree_depth.c) | [**size_t binary_tree_depth(const binary_tree_t *tree);**](./10-binary_tree_depth.c) |
|   |   |   |   |
|   |   |   |   |
| **11** | **Size** | [**11-binary_tree_size.c**](./11-binary_tree_size.c) | [**size_t binary_tree_size(const binary_tree_t *tree);**](./11-binary_tree_size.c) |
|   |   |   |   |
|   |   |   |   |
| **12** | **Leaves** | [**12-binary_tree_leaves.c**](./12-binary_tree_leaves.c) | [**size_t binary_tree_leaves(const binary_tree_t *tree);**](./12-binary_tree_leaves.c) |
|   |   |   |   |
|   |   |   |   |
| **13** | **Nodes** | [**13-binary_tree_nodes.c**](./13-binary_tree_nodes.c) | [**size_t binary_tree_nodes(const binary_tree_t *tree);**](./13-binary_tree_nodes.c) |
|   |   |   |   |
|   |   |   |   |
| **14** | **Balance<br>factor** | [**14-binary_tree_balance.c**](./14-binary_tree_balance.c) | [**int binary_tree_balance(const binary_tree_t *tree);**](./14-binary_tree_balance.c) |
|   |   |   |   |
|   |   |   |   |
| **15** | **Is<br>full** | [**15-binary_tree_is_full.c**](./15-binary_tree_is_full.c) | [**int binary_tree_is_full(const binary_tree_t *tree);**](./15-binary_tree_is_full.c) |
|   |   |   |   |
|   |   |   |   |
| **16** | **Is<br>perfect** | [**16-binary_tree_is_perfect.c**](./16-binary_tree_is_perfect.c) | [**int binary_tree_is_perfect(const binary_tree_t *tree);**](./16-binary_tree_is_perfect.c) |
|   |   |   |   |
|   |   |   |   |
| **17** | **Sibling** | [**17-binary_tree_sibling.c**](./17-binary_tree_sibling.c) | [**binary_tree_t *binary_tree_sibling(binary_tree_t *node);**](./17-binary_tree_sibling.c) |
|   |   |   |   |
|   |   |   |   |
| **18** | **Uncle** | [**18-binary_tree_uncle.c**](./18-binary_tree_uncle.c) | [**binary_tree_t *binary_tree_uncle(binary_tree_t *node);**](./18-binary_tree_uncle.c) |
|   |   |   |   |
|   |   |   |   |
|   |   |   |   |
|   |   |   |   |
|   |   | <H3 align="center">ADVANCED TASKS</H3> |   |
|   |   |   |   |
|   |   |   |   |
|   |   |   |   |
|   |   |   |   |
| **19** | **Lowest<br>common<br>ancestor** | [**100-binary_trees_ancestor.c**](./100-binary_trees_ancestor.c) | [**binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);**](./100-binary_trees_ancestor.c) |
|   |   |   |   |
|   |   |   |   |
| **20** | **Level<br>-order<br>traversal** | [**101-binary_tree_levelorder.c**](./101-binary_tree_levelorder.c) | [**void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));**](./101-binary_tree_levelorder.c) |
|   |   |   |   |
|   |   |   |   |
| **21** | **Is<br>complete** | [**102-binary_tree_is_complete.c**](./102-binary_tree_is_complete.c) | [**int binary_tree_is_complete(const binary_tree_t *tree);**](./102-binary_tree_is_complete.c) |
|   |   |   |   |
|   |   |   |   |
| **22** | **Rotate<br>left** | [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c) | [**binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);**](./103-binary_tree_rotate_left.c) |
|   |   |   |   |
|   |   |   |   |
| **23** | **Rotate<br>right** | [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c) | [**binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);**](./104-binary_tree_rotate_right.c) |
|   |   |   |   |
|   |   |   |   |
| **24** | **Is<br>BST** | [**110-binary_tree_is_bst.c**](./110-binary_tree_is_bst.c) | [**int binary_tree_is_bst(const binary_tree_t *tree);**](./110-binary_tree_is_bst.c) |
|   |   |   |   |
|   |   |   |   |
| **25** | **BST<br>-<br>Insert** | [**111-bst_insert.c**](./111-bst_insert.c) | [**bst_t *bst_insert(bst_t** __**tree, int value);__](./111-bst_insert.c) |
|   |   |   |   |
|   |   |   |   |
| **26** | **BST<br>-Array<br>to BST** | [**112-array_to_bst.c**](./112-array_to_bst.c) | [**bst_t *array_to_bst(int *array, size_t size);**](./112-array_to_bst.c) |
|   |   |   |   |
|   |   |   |   |
| **27** | **BST<br>-<br>Search** | [**113-bst_search.c**](./113-bst_search.c) | [**bst_t *bst_search(const bst_t *tree, int value);**](./113-bst_search.c) |
|   |   |   |   |
|   |   |   |   |
| **28** | **BST<br>-<br>Remove** | [**114-bst_remove.c**](./114-bst_remove.c) | [**bst_t *bst_remove(bst_t *root, int value);**](./114-bst_remove.c) |
|   |   |   |   |
|   |   |   |   |
| **29** | **Big<br>O<br>#BST** | [**115-O**](./115-O) |  |
|   |   |   |   |
|   |   |   |   |
| **30** | **Is<br>AVL** | [**120-binary_tree_is_avl.c**](./120-binary_tree_is_avl.c) | [**int binary_tree_is_avl(const binary_tree_t *tree);**](./120-binary_tree_is_avl.c) |
|   |   |   |   |
|   |   |   |   |
| **31** | **AVL<br>-<br>Insert** | [**121-avl_insert.c**](./121-avl_insert.c) | [**avl_t *avl_insert(avl_t** __**tree, int value);__](./121-avl_insert.c) |
| **32** | **AVL<br>-Array<br>to AVL** | [**122-array_to_avl.c**](./122-array_to_avl.c) | [**avl_t *array_to_avl(int *array, size_t size);**](./122-array_to_avl.c) |
| **33** | **AVL<br>-<br>Remove** | [**123-avl_remove.c**](./123-avl_remove.c) | [**avl_t *avl_remove(avl_t *root, int value);**](./123-avl_remove.c) |
| **34** | **AVL<br>-From<br>sorted<br>array** | [**124-sorted_array_to_avl.c**](./124-sorted_array_to_avl.c) | [**avl_t *sorted_array_to_avl(int *array, size_t size);**](./124-sorted_array_to_avl.c) |
| **35** | **Big<br>O #AVL<br>Tree** | [**125-O**](./125-O) |  |
|   |   |   |   |
|   |   |   |   |
| **36** | **Is<br>Binary<br>heap** | [**130-binary_tree_is_heap.c**](./130-binary_tree_is_heap.c) | [**int binary_tree_is_heap(const binary_tree_t *tree);**](./130-binary_tree_is_heap.c) |
|   |   |   |   |
|   |   |   |   |
| **37** | **Heap<br>-<br>Insert** | [**131-heap_insert.c**](./131-heap_insert.c) | [**heap_t *heap_insert(heap_t** __**root, int value);__](./131-heap_insert.c) |
|   |   |   |   |
|   |   |   |   |
| **38** | **Heap<br>- Array<br>to<br>Binary<br>Heap** | [**132-array_to_heap.c**](./132-array_to_heap.c) | [**heap_t *array_to_heap(int *array, size_t size);**](./132-array_to_heap.c) |
|   |   |   |   |
|   |   |   |   |
| **39** | **Heap<br>-<br>Extract** | [**133-heap_extract.c**](./133-heap_extract.c) | [**int heap_extract(heap_t** __**root);__](./133-heap_extract.c) |
|   |   |   |   |
|   |   |   |   |
| **40** | **Heap<br>-<br>Sort** | [**134-heap_to_sorted_array.c**](./134-heap_to_sorted_array.c) | [**int *heap_to_sorted_array(heap_t *heap, size_t *size);**](./134-heap_to_sorted_array.c) |
|   |   |   |   |
|   |   |   |   |
| **41** | **Big O<br>#Binary<br>Heap** | [**135-O**](./135-O) |   |
|   |   |   |   |
|   |   |   |   |
<p align="center">
  <img src="https://storage.googleapis.com/algodailyrandomassets/curriculum/trees/balanced-binary-tree-example1.png" />
</p>

####

<H2> 💎🕰<ins>The big O notations of the time complexity:</ins> ⌚️💼</H2>

| <H3 align="center">Task NO.</H3> | <H3 align="center">Title</H3> | <H3 align="center">big O File</H3> | <H3 align="center"> time complexity<br> cases</H3> |
| :----: | :----:| :---- | :---- |
|   |   |   |   |
|   |   |   |   |
|   | <H3 align="center">MANDATORY TASKS</H3> |  |  |
|   |   |   |   |
|   |   |   |  |
| **29** | **Big O #BST** | [**115-O**](./115-O) | 🟢 [**best case**](./115-O)<br> 🟡 [**average case**](./115-O)<br> 🔴 [**worst case**](./115-O) |
| **35** | **Big O #AVL Tree** | [**125-O**](./125-O) | 🟢 [**best case**](./125-O)<br> 🟡 [**average case**](./125-O)<br> 🔴 [**worst case**](./125-O) |
| **41** | **Big O #Binary Heap** | [**135-O**](./135-O) | 🟢 [**best case**](./135-O)<br> 🟡 [**average case**](./135-O)<br> 🔴 [**worst case**](./135-O) |
|   |   |   |   |
|   |   |   |   |

<p align="center">
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTu20VNTjtJZE02dXm6XYEib65WYnnLuc9lcg&usqp=CAU" />
</p>

###

<H1> 🗂<ins>Project Test Folder</ins>📁📂 </H1>

* [**tests**](./tests) : Folder is a folder of test folders and files. 
  * There are two Folder inside [**tests**](./tests) folder, this are
    * [**tests-main.c**](./tests/tests-main.c) Folder
    * [**tests-output**](./tests/tests-output) Folder
###

<H2> Tests-main.c Folder 📁 And Files 📋🔖 </H2> 

* [**tests-main.c**](./tests/tests-main.c) Folder is a folder of [**main.c**](./tests/tests-main.c) **files**.
  * [**main.c**](./tests/tests-main.c) **files** are a files we can use them to test our functions.

* Files📚 inside [**tests-main.c**](./tests/tests-main.c) Folder 📂
  * [**0-main.c**](./tests/tests-main.c/0-main.c)
  * [**1-main.c**](./tests/tests-main.c/1-main.c)
  * [**2-main.c**](./tests/tests-main.c/2-main.c)
  * [**3-main.c**](./tests/tests-main.c/3-main.c)
  * [**4-main.c**](./tests/tests-main.c/4-main.c)
  * [**5-main.c**](./tests/tests-main.c/5-main.c)
  * [**6-main.c**](./tests/tests-main.c/6-main.c)
  * [**7-main.c**](./tests/tests-main.c/7-main.c)
  * [**8-main.c**](./tests/tests-main.c/8-main.c)
  * [**9-main.c**](./tests/tests-main.c/9-main.c)
  * [**10-main.c**](./tests/tests-main.c/10-main.c)
  * [**11-main.c**](./tests/tests-main.c/11-main.c)
  * [**12-main.c**](./tests/tests-main.c/12-main.c)
  * [**13-main.c**](./tests/tests-main.c/13-main.c)
  * [**14-main.c**](./tests/tests-main.c/14-main.c)
  * [**15-main.c**](./tests/tests-main.c/15-main.c)
  * [**16-main.c**](./tests/tests-main.c/16-main.c)
  * [**17-main.c**](./tests/tests-main.c/17-main.c)
  * [**18-main.c**](./tests/tests-main.c/18-main.c)
  * [**100-main.c**](./tests/tests-main.c/100-main.c)
  * [**101-main.c**](./tests/tests-main.c/101-main.c)
  * [**102-main.c**](./tests/tests-main.c/102-main.c)
  * [**103-main.c**](./tests/tests-main.c/103-main.c)
  * [**104-main.c**](./tests/tests-main.c/104-main.c)
  * [**110-main.c**](./tests/tests-main.c/110-main.c)
  * [**111-main.c**](./tests/tests-main.c/111-main.c)
  * [**112-main.c**](./tests/tests-main.c/112-main.c)
  * [**113-main.c**](./tests/tests-main.c/113-main.c)
  * [**114-main.c**](./tests/tests-main.c/114-main.c)
  * [**120-main.c**](./tests/tests-main.c/120-main.c)
  * [**121-main.c**](./tests/tests-main.c/121-main.c)
  * [**122-main.c**](./tests/tests-main.c/122-main.c)
  * [**123-main.c**](./tests/tests-main.c/123-main.c)
  * [**124-main.c**](./tests/tests-main.c/124-main.c)
  * [**130-main.c**](./tests/tests-main.c/130-main.c)
  * [**131-main.c**](./tests/tests-main.c/131-main.c)
  * [**132-main.c**](./tests/tests-main.c/132-main.c)
  * [**133-main.c**](./tests/tests-main.c/133-main.c)
  * [**134-main.c**](./tests/tests-main.c/134-main.c)

<p align="center">
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRzYSfRTydvTqAEc7MhESiFMuok1-76d0VxTA&usqp=CAU" />
</p>

###

<H2> Tests-Output Folders📂 And Files 📋 🔖</H2> 

* [**tests-output**](./tests/tests-output) Folder is a folder of [**output**](./tests/tests-output) **files**.
  * [**output**](./tests/tests-output) **files** are a **compiled** files <ins>**output on Ubuntu 20.04 LTS**</ins> Using <ins>**gcc**</ins>, Using the options <ins>**-Wall -Werror -Wextra -pedantic -std=gnu89**</ins> plus using [**tests-main.c**](./tests/tests-main.c) **files**.

* Files📚 inside [**tests-output**](./tests/tests-output) Folder 📂 are 
  * [**0-node**](./tests/tests-output/0-node)
  * [**1-left**](./tests/tests-output/1-left)
  * [**2-right**](./tests/tests-output/2-right)
  * [**3-del**](./tests/tests-output/3-del)
  * [**4-leaf**](./tests/tests-output/4-leaf)
  * [**5-root**](./tests/tests-output/5-root)
  * [**6-pre**](./tests/tests-output/6-pre)
  * [**7-in**](./tests/tests-output/7-in)
  * [**8-post**](./tests/tests-output/8-post)
  * [**9-height**](./tests/tests-output/9-height)
  * [**10-depth**](./tests/tests-output/10-depth)
  * [**11-size**](./tests/tests-output/11-size)
  * [**12-leaves**](./tests/tests-output/12-leaves)
  * [**13-nodes**](./tests/tests-output/13-nodes)
  * [**14-balance**](./tests/tests-output/14-balance)
  * [**15-full**](./tests/tests-output/15-full)
  * [**16-perfect**](./tests/tests-output/16-perfect)
  * [**17-sibling**](./tests/tests-output/17-sibling)
  * [**18-uncle**](./tests/tests-output/18-uncle)
  * [**100-ancestor**](./tests/tests-output/100-ancestor)
  * [**101-lvl**](./tests/tests-output/101-lvl)
  * [**102-complete**](./tests/tests-output/102-complete)
  * [**103-rotl**](./tests/tests-output/103-rotl)
  * [**104-rotr**](./tests/tests-output/104-rotr)
  * [**110-is_bst**](./tests/tests-output/110-is_bst)
  * [**111-bst_insert**](./tests/tests-output/111-bst_insert)
  * [**112-bst_array**](./tests/tests-output/112-bst_array)
  * [**113-bst_search**](./tests/tests-output/113-bst_search)
  * [**114-bst_rm**](./tests/tests-output/114-bst_rm)
  * [**120-is_avl**](./tests/tests-output/120-is_avl)
  * [**121-avl_insert**](./tests/tests-output/121-avl_insert)
  * [**122-avl_array**](./tests/tests-output/122-avl_array)
  * [**123-avl_rm**](./tests/tests-output/123-avl_rm)
  * [**124-avl_sorted**](./tests/tests-output/124-avl_sorted)
  * [**130-is_heap**](./tests/tests-output/130-is_heap)
  * [**131-heap_insert**](./tests/tests-output/131-heap_insert)
  * [**132-heap_array**](./tests/tests-output/132-heap_array)
  * [**133-heap_extract**](./tests/tests-output/133-heap_extract)
  * [**134-heap_sort**](./tests/tests-output/134-heap_sort)

<p align="center">
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSAIRM5MXEQrPVPUdbmVAiqiEoUabbDRkCAQg&usqp=CAU" />
</p>

##

<h1 align="center"> 📍 <ins>Resources</ins> 📌 :floppy_disk:</H1>

### **Read 📖 or watch🎞:** 🔖
* [**Binary tree**](https://intranet.alxswe.com/rltoken/1F2x42-8vUbOmU4L1C1KMg) (note the first line: ${{\color{red}{\textsf{ Not to be confused with B-tree.\ \}}}}\$ )
* [**Data Structure and Algorithms - Tree**](https://intranet.alxswe.com/rltoken/QmcTMCkQyrgMjrqoWxYdhw)
* [**Tree Traversal**](https://intranet.alxswe.com/rltoken/z6ZaXr_RxwE5nTHAUx_dfQ)
* [**Binary Search Tree**](https://intranet.alxswe.com/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)
* [**Data structures: Binary Tree**](https://intranet.alxswe.com/rltoken/BeyJ2gjlE7_djwRiDyeHig)

<p align="center">
  <img src="https://image.slidesharecdn.com/1-150507090843-lva1-app6891/85/11-binary-tree-2-320.jpg?cb=1665729451" />
  <img src="https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/introduction-to-binary-trees-1.png" />
  <img src="https://hideoushumpbackfreak.com/algorithms/images/binary_tree_delete_two_child.png" />
</p>

###

<H1 align="center">📝 <ins>Learning Objectives</ins> 🔖 :floppy_disk:</H1>

* At the end of this project, You are expected to be able to [**explain to anyone**](https://intranet.alxswe.com/rltoken/rDjGcLNoVZsZG1Br0UbX6A), **Without the help of Google:**

<p align="center">
  <img src="https://i.ibb.co/VLNRkLS/final-the-feynman-technique.png" />
</p>

###

<H2> 🖇️ <ins>General Learning Objectives</ins> 🪜 :heavy_check_mark:</H2>

* **What is a binary tree**
* **What is the difference between a binary tree and a Binary Search Tree**
* **What is the possible gain in terms of time complexity compared to linked lists**
* **What are the depth, the height, the size of a binary tree**
* **What are the different traversal methods to go through a binary tree**
* **What is a complete, a full, a perfect, a balanced binary tree**

<p align="center">
  <img src="https://examradar.com/wp-content/uploads/2016/10/Figure-5.2.7.-Linked-representation-for-the-binary-tree.png?x50549" />
</p>

###

<H2> ⛔ <ins>Copyright©️- ♻️Plagiarism 🕹</ins> 🚫</H2>

* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

<p align="center">
  <img src="https://i.ibb.co/8csnv7s/Alx-do-hard-things.jpg" />
</p>

##

<H1>🔰 <ins>Requirements</ins> 🛡 :floppy_disk:</H1>

<H2>General Requirements 📋:heavy_check_mark:</H2>

* **Allowed editors:** ${{\color{red}{\textsf{ vi\ \}}}}\$ , ${{\color{red}{\textsf{ vim\ \}}}}\$ , ${{\color{red}{\textsf{ emacs\ \}}}}\$.
* All your files will be **compiled** on <ins>**Ubuntu 20.04 LTS**</ins> Using <ins>**gcc**</ins>, Using the options <ins>**-Wall -Werror -Wextra -pedantic -std=gnu89**</ins>
* All your files should **end with a new line**
* A ${{\color{red}{\textsf{ README.md\ \}}}}\$ <ins>**file**</ins>🧾, at the root of the folder 📂 of the project is mandatory.
* **Your code should use the** ${{\color{red}{\textsf{ Betty\ \}}}}\$ <ins>**style**</ins>. It will be checked using [**betty-style.pl**](https://github.com/alx-tools/Betty/blob/master/betty-style.pl), and [**betty-doc.pl**](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl).
* You are **not allowed to use <ins>global variables</ins>.**
* **No more** than <ins>**5 functions**</ins> per **file.**
* You are **not allowed to use the <ins>standard library</ins>.**
* In the following examples, <ins>**the</ins>** ${{\color{red}{\textsf{ main.c\ \}}}}\$ <ins>**files</ins>** are shown as examples. You can use them to <ins>**test your functions</ins>, but you don’t have to push them to your repo** (if you do we won’t take them into account). We will **use our <ins>own main.c files</ins> at compilation**. <ins>**Our main.c files**</ins> might be different from the one shown in the examples.
* The <ins>**prototypes</ins> of all <ins>your functions**</ins> should be included in your [**header file**](./binary_trees.h) called [**binary_trees.h**](./binary_trees.h)
* **<ins>Don’t forget to push</ins> your** [**header file**](./binary_trees.h) .
* All your <ins>**header files</ins>** should be <ins>**include guarded</ins>**

<p align="center">
  <img src="https://opendatastructures.org/ods-cpp/img4566.png" />
</p>

##

<H1><ins>GitHub</ins> :floppy_disk: ❗️ </H1>

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

##

<H1><ins>More Info</ins> ℹ️</H1>

<H2>Data structures📌 :heavy_check_mark:</H2>

* **Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.**

<H3>Basic Binary Tree :heavy_check_mark:</H3>

```js
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

<H3>Binary Search Tree :heavy_check_mark:</H3>

```js
typedef struct binary_tree_s bst_t;
```

<H3>AVL Tree :heavy_check_mark:</H3>

```js
typedef struct binary_tree_s avl_t;
```

<H3>Max Binary Heap :heavy_check_mark:</H3>

```js
typedef struct binary_tree_s heap_t;
```

* **Note:** For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

##

<H2>Print function :heavy_check_mark:</H2>

* To match the examples in the tasks, you are given [**this function**](https://github.com/alx-tools/0x1C.c).
  * This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction

<p align="center">
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRqy1hWXbw2BWqv-hjYkMzZ1J4JLpmVe37yzVN7LI4VwWLFpSxx45e7zGbe_PakIhNiqh8&usqp=CAU" />
</p>

##

## <ins>**PROJECT_TITLE</ins>: 🔠**  💻 [**0x1D. C - Binary trees**](https://intranet.alxswe.com/projects/270) 📝🔡

## <ins>**GITHUB_REPOSITORY</ins>: 📦** 📀 [**binary_trees**](https://github.com/BekiHabesha/binary_trees) 💼

<p align="center">
  <img src="https://i.ibb.co/y5wmQyd/Alx-enginn-Build-ur-future.png" />
</p>

### 

* **File_name:📋** 📖 [**README.md**](https://github.com/BekiHabesha/binary_trees/blob/master/README.md) **File**
* **Created: 📅** <ins>**On February 28, 2024**</ins>🕙
* **Author:🖊️** 👨🏻‍💻 [***Bereket Dereje Mekkonen***](https://intranet.alxswe.com/users/BereketDerejeMekkonen) 🧑‍💻
* **Project Title: 🔠**  💻 [**0x1D. C - Binary trees**](https://intranet.alxswe.com/projects/270) 📝🔡
* **GitHub repository: 📦** 📀 [**binary_trees**](https://github.com/BekiHabesha/binary_trees) 💼
* **Project Tasks: 📚** <ins>**Mandatory💯 and Advanced ⁉️**</ins>
* **Tasks in number: 🔢** <ins>**42 Tasks (19-Mandatory & 23-Advanced)**</ins>
* **Mandatory_Tasks:** 💯 <ins>**From Task 0 to 18**</ins> 💯
* **Advanced_Tasks:** ⁉️ <ins>**From Task 19 to 41**</ins> ♨️

###

<p align="center">
  <img src="https://i.ibb.co/y5wmQyd/Alx-enginn-Build-ur-future.png" />
</p>

<H1 align="center"> <ins> PROJECT TASKS (Mandatory and Advanced)</ins>:floppy_disk:</H1>

<H1 align="center">MANDATORY_TASKS (From Task 0 to 18) :cd:</h1>

## **No. 0. New node** :heavy_check_mark:
* **File:**
  * [**0-binary_tree_node.c**](./0-binary_tree_node.c)
###
* **Write a function that creates a binary tree node**
  * **<ins>Prototype</ins>:** [**binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);**](./0-binary_tree_node.c)
  * Where ${{\color{red}{\textsf{ parent\ \}}}}$ is a pointer to the parent node of the node to create
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to put in the new node
  * When created, a node does not have any child
  * Your function must return a pointer to the new node, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure

```js
alex@/tmp/binary_trees$ cat 0-main.c 
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
alex@/tmp/binary_trees$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
alex@/tmp/binary_trees$
```

###

## **No. 1. Insert left** :heavy_check_mark:
* **File:**
  * [**1-binary_tree_insert_left.c**](./1-binary_tree_insert_left.c)
###
* **Write a function that inserts a node as the left-child of another node**
  * **<ins>Prototype</ins>:** [**binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);**](./1-binary_tree_insert_left.c)
  * Where ${{\color{red}{\textsf{ parent\ \}}}}$ is a pointer to the node to insert the left-child in
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to store in the new node
  * Your function must return a pointer to the created node, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure or if ${{\color{red}{\textsf{ parent\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$
  * If ${{\color{red}{\textsf{ parent\ \}}}}$ already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

```js
alex@/tmp/binary_trees$ cat 1-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
alex@/tmp/binary_trees$ ./1-left
  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)                                            
alex@/tmp/binary_trees$
```

###

## **No. 2. Insert right** :heavy_check_mark:
* **File:**
  * [**2-binary_tree_insert_right.c**](./2-binary_tree_insert_right.c)
###
* **Write a function that inserts a node as the right-child of another node**
  * **<ins>Prototype</ins>:** [**binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);**](./2-binary_tree_insert_right.c)
  * Where ${{\color{red}{\textsf{ parent\ \}}}}$ is a pointer to the node to insert the right-child in
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to store in the new node
  * Your function must return a pointer to the created node, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure or if ${{\color{red}{\textsf{ parent\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$
  * If ${{\color{red}{\textsf{ parent\ \}}}}$ already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

```js
alex@/tmp/binary_trees$ cat 2-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right
alex@/tmp/binary_trees$ ./2-right 
  .--(098)--.
(012)     (402)

  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
alex@/tmp/binary_trees$
```

###

## **No. 3. Delete** :heavy_check_mark:
* **File:**
  * [**3-binary_tree_delete.c**](./3-binary_tree_delete.c)
###
* **Write a function that deletes an entire binary tree**
  * **<ins>Prototype</ins>:** [[**void binary_tree_delete(binary_tree_t *tree);**](./3-binary_tree_delete.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to delete
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , do nothing

```js
alex@/tmp/binary_trees$ cat 3-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    binary_tree_delete(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del
alex@/tmp/binary_trees$ valgrind ./3-del
==13264== Memcheck, a memory error detector
==13264== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==13264== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==13264== Command: ./3-del
==13264== 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
==13264== 
==13264== HEAP SUMMARY:
==13264==     in use at exit: 0 bytes in 0 blocks
==13264==   total heap usage: 9 allocs, 9 frees, 949 bytes allocated
==13264== 
==13264== All heap blocks were freed -- no leaks are possible
==13264== 
==13264== For counts of detected and suppressed errors, rerun with: -v
==13264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```

###

## **No. 4. Is leaf** :heavy_check_mark:
* **File:**
  * [**4-binary_tree_is_leaf.c**](./4-binary_tree_is_leaf.c)
###
* **Write a function that checks if a node is a leaf**
  * **<ins>Prototype</ins>:** [**int binary_tree_is_leaf(const binary_tree_t *node);**](./4-binary_tree_is_leaf.c)
  * Where ${{\color{red}{\textsf{ node\ \}}}}$ is a pointer to the node to check
  * Your function must return ${{\color{red}{\textsf{ 1\ \}}}}$ if ${{\color{red}{\textsf{ node\ \}}}}$ is a leaf, otherwise ${{\color{red}{\textsf{ 0\ \}}}}$
  * If ${{\color{red}{\textsf{ node\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 4-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int ret;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    ret = binary_tree_is_leaf(root);
    printf("Is %d a leaf: %d\n", root->n, ret);
    ret = binary_tree_is_leaf(root->right);
    printf("Is %d a leaf: %d\n", root->right->n, ret);
    ret = binary_tree_is_leaf(root->right->right);
    printf("Is %d a leaf: %d\n", root->right->right->n, ret);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf
alex@/tmp/binary_trees$ ./4-leaf 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a leaf: 0
Is 128 a leaf: 0
Is 402 a leaf: 1
alex@/tmp/binary_trees$
```

###

## **No. 5. Is root** :heavy_check_mark:
* **File:**
  * [**5-binary_tree_is_root.c**](./5-binary_tree_is_root.c)
###
* **Write a function that checks if a given node is a root**
  * **<ins>Prototype</ins>:** [**int binary_tree_is_root(const binary_tree_t *node);**](./5-binary_tree_is_root.c)
  * Where ${{\color{red}{\textsf{ node\ \}}}}$ is a pointer to the node to check
  * Your function must return ${{\color{red}{\textsf{ 1\ \}}}}$ if ${{\color{red}{\textsf{ node\ \}}}}$ is a root, otherwise ${{\color{red}{\textsf{ 0\ \}}}}$
  * If ${{\color{red}{\textsf{ node\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 5-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int ret;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    ret = binary_tree_is_root(root);
    printf("Is %d a root: %d\n", root->n, ret);
    ret = binary_tree_is_root(root->right);
    printf("Is %d a root: %d\n", root->right->n, ret);
    ret = binary_tree_is_root(root->right->right);
    printf("Is %d a root: %d\n", root->right->right->n, ret);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root
alex@/tmp/binary_trees$ ./5-root 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a root: 1
Is 128 a root: 0
Is 402 a root: 0
alex@/tmp/binary_trees$
```

###

## **No. 6. Pre-order traversal** :heavy_check_mark:
* **File:**
  * [**6-binary_tree_preorder.c**](./6-binary_tree_preorder.c)
###
* **Write a function that goes through a binary tree using pre-order traversal**
  * **<ins>Prototype</ins>:** [**void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));**](./6-binary_tree_preorder.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to traverse
  * And ${{\color{red}{\textsf{ func\ \}}}}$ is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ or ${{\color{red}{\textsf{ func\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , do nothing 

```js
alex@/tmp/binary_trees$ cat 6-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    binary_tree_preorder(root, &print_num);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre
alex@/tmp/binary_trees$ ./6-pre
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
98
12
6
56
402
256
512
alex@/tmp/binary_trees$
```

###

## **No. 7. In-order traversal** :heavy_check_mark:
* **File:**
  * [**7-binary_tree_inorder.c**](./7-binary_tree_inorder.c)
###
* **Write a function that goes through a binary tree using in-order traversal**
  * **<ins>Prototype</ins>:** [**void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));**](./7-binary_tree_inorder.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to traverse
  * And ${{\color{red}{\textsf{ func\ \}}}}$ is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ or ${{\color{red}{\textsf{ func\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , do nothing 

```js
alex@/tmp/binary_trees$ cat 7-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    binary_tree_inorder(root, &print_num);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in
alex@/tmp/binary_trees$ ./7-in
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
6
12
56
98
256
402
512
alex@/tmp/binary_trees$
```

###

## **No. 8. Post-order traversal** :heavy_check_mark:
* **File:**
  * [**8-binary_tree_postorder.c**](./8-binary_tree_postorder.c)
###
* **Write a function that goes through a binary tree using post-order traversal**
  * **<ins>Prototype</ins>:** [**void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));**](./8-binary_tree_postorder.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to traverse
  * And ${{\color{red}{\textsf{ func\ \}}}}$ is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ or ${{\color{red}{\textsf{ func\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , do nothing

```js
alex@/tmp/binary_trees$ cat 8-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    binary_tree_postorder(root, &print_num);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post
alex@/tmp/binary_trees$ ./8-post
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
6
56
12
256
512
402
98
alex@/tmp/binary_trees$
```

###

## **No. 9. Height** :heavy_check_mark:
* **File:**
  * [**9-binary_tree_height.c**](./9-binary_tree_height.c) 
###
* **Write a function that measures the height of a binary tree**
  * **<ins>Prototype</ins>:** [**size_t binary_tree_height(const binary_tree_t *tree);**](./9-binary_tree_height.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to measure the height.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , your function must return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 9-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t height;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    height = binary_tree_height(root);
    printf("Height from %d: %lu\n", root->n, height);
    height = binary_tree_height(root->right);
    printf("Height from %d: %lu\n", root->right->n, height);
    height = binary_tree_height(root->left->right);
    printf("Height from %d: %lu\n", root->left->right->n, height);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height
alex@/tmp/binary_trees$ ./9-height 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Height from 98: 2
Height from 128: 1
Height from 54: 0
alex@/tmp/binary_trees$
```

###

## **No. 10. Depth** :heavy_check_mark:
* **File:**
  * [**10-binary_tree_depth.c**](./10-binary_tree_depth.c) 
###
* **Write a function that measures the depth of a node in a binary tree**
  * **<ins>Prototype</ins>:** [**size_t binary_tree_depth(const binary_tree_t *tree);**](./10-binary_tree_depth.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the node to measure the depth.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , your function must return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 10-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t depth;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    depth = binary_tree_depth(root);
    printf("Depth of %d: %lu\n", root->n, depth);
    depth = binary_tree_depth(root->right);
    printf("Depth of %d: %lu\n", root->right->n, depth);
    depth = binary_tree_depth(root->left->right);
    printf("Depth of %d: %lu\n", root->left->right->n, depth);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth
alex@/tmp/binary_trees$ ./10-depth 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Depth of 98: 0
Depth of 128: 1
Depth of 54: 2
alex@/tmp/binary_trees$
```

###

## **No. 11. Size** :heavy_check_mark:
* **File:**
  * [**11-binary_tree_size.c**](./11-binary_tree_size.c) 
###
* **Write a function that measures the size of a binary tree**
  * **<ins>Prototype</ins>:** [**size_t binary_tree_size(const binary_tree_t *tree);**](./11-binary_tree_size.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to measure the size.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , your function must return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 11-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t size;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    size = binary_tree_size(root);
    printf("Size of %d: %lu\n", root->n, size);
    size = binary_tree_size(root->right);
    printf("Size of %d: %lu\n", root->right->n, size);
    size = binary_tree_size(root->left->right);
    printf("Size of %d: %lu\n", root->left->right->n, size);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size
alex@/tmp/binary_trees$ ./11-size 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Size of 98: 5
Size of 128: 2
Size of 54: 1
alex@/tmp/binary_trees$
```

###

## **No. 12. Leaves** :heavy_check_mark:
* **File:**
  * [**12-binary_tree_leaves.c**](./12-binary_tree_leaves.c) 
###
* **Write a function that counts the leaves in a binary tree**
  * **<ins>Prototype</ins>:** [**size_t binary_tree_leaves(const binary_tree_t *tree);**](./12-binary_tree_leaves.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to count the number of leaves.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , the function must return ${{\color{red}{\textsf{ 0\ \}}}}$
  * A ${{\color{red}{\textsf{ NULL\ \}}}}$ pointer is not a leaf

```js
alex@/tmp/binary_trees$ cat 12-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t leaves;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    leaves = binary_tree_leaves(root);
    printf("Leaves in %d: %lu\n", root->n, leaves);
    leaves = binary_tree_leaves(root->right);
    printf("Leaves in %d: %lu\n", root->right->n, leaves);
    leaves = binary_tree_leaves(root->left->right);
    printf("Leaves in %d: %lu\n", root->left->right->n, leaves);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves
alex@/tmp/binary_trees$ ./12-leaves 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Leaves in 98: 2
Leaves in 128: 1
Leaves in 54: 1
alex@/tmp/binary_trees$
```

###

## **No. 13. Nodes** :heavy_check_mark:
* **File:**
  * [**13-binary_tree_nodes.c**](./13-binary_tree_nodes.c)
###
* **Write a function that counts the nodes with at least 1 child in a binary tree**
  * **<ins>Prototype</ins>:** [**size_t binary_tree_nodes(const binary_tree_t *tree);**](./13-binary_tree_nodes.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to count the number of nodes.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , the function must return ${{\color{red}{\textsf{ 0\ \}}}}$
  * A ${{\color{red}{\textsf{ NULL\ \}}}}$ pointer is not a node

```js
alex@/tmp/binary_trees$ cat 13-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t nodes;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    nodes = binary_tree_nodes(root);
    printf("Nodes in %d: %lu\n", root->n, nodes);
    nodes = binary_tree_nodes(root->right);
    printf("Nodes in %d: %lu\n", root->right->n, nodes);
    nodes = binary_tree_nodes(root->left->right);
    printf("Nodes in %d: %lu\n", root->left->right->n, nodes);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes
alex@/tmp/binary_trees$ ./13-nodes
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Nodes in 98: 3
Nodes in 128: 1
Nodes in 54: 0
alex@/tmp/binary_trees$
```

###

## **No. 14. Balance factor** :heavy_check_mark:
* **File:**
  * [**14-binary_tree_balance.c**](./14-binary_tree_balance.c)
###
* **Write a function that measures the balance factor of a binary tree**
  * **<ins>Prototype</ins>:** [**int binary_tree_balance(const binary_tree_t *tree);**](./14-binary_tree_balance.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to measure the balance factor.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 14-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int balance;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_insert_left(root, 45);
    binary_tree_insert_right(root->left, 50);
    binary_tree_insert_left(root->left->left, 10);
    binary_tree_insert_left(root->left->left->left, 8);
    binary_tree_print(root);

    balance = binary_tree_balance(root);
    printf("Balance of %d: %+d\n", root->n, balance);
    balance = binary_tree_balance(root->right);
    printf("Balance of %d: %+d\n", root->right->n, balance);
    balance = binary_tree_balance(root->left->left->right);
    printf("Balance of %d: %+d\n", root->left->left->right->n, balance);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance
alex@/tmp/binary_trees$ ./14-balance
                      .-------(098)--.
            .-------(045)--.       (128)--.
       .--(012)--.       (050)          (402)
  .--(010)     (054)
(008)
Balance of 98: +2
Balance of 128: -1
Balance of 54: +0
alex@/tmp/binary_trees$
```

###

## **No. 15. Is full** :heavy_check_mark:
* **File:**
  * [**15-binary_tree_is_full.c**](./15-binary_tree_is_full.c) 
###
* **Write a function that checks if a binary tree is full**
  * **<ins>Prototype</ins>:** [**int binary_tree_is_full(const binary_tree_t *tree);**](./15-binary_tree_is_full.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to check.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , your function must return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 15-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int full;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    root->left->left = binary_tree_node(root->left, 10);
    binary_tree_print(root);

    full = binary_tree_is_full(root);
    printf("Is %d full: %d\n", root->n, full);
    full = binary_tree_is_full(root->left);
    printf("Is %d full: %d\n", root->left->n, full);
    full = binary_tree_is_full(root->right);
    printf("Is %d full: %d\n", root->right->n, full);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full
alex@/tmp/binary_trees$ ./15-full
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 full: 0
Is 12 full: 1
Is 128 full: 0
alex@/tmp/binary_trees$
```

###

## **No. 16. Is perfect** :heavy_check_mark:
* **File:**
  * [**16-binary_tree_is_perfect.c**](./16-binary_tree_is_perfect.c)
###
* **Write a function that checks if a binary tree is perfect**
  * **<ins>Prototype</ins>:**  [**int binary_tree_is_perfect(const binary_tree_t *tree);**](./16-binary_tree_is_perfect.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to check.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , your function must return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 16-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int perfect;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 10);

    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    root->right->right->left = binary_tree_node(root->right->right, 10);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    root->right->right->right = binary_tree_node(root->right->right, 10);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n", perfect);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect
alex@/tmp/binary_trees$ ./16-perfect 
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (010)     (402)
Perfect: 1

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)
                              (010)
Perfect: 0

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)--.
                              (010)     (010)
Perfect: 0
alex@/tmp/binary_trees$
```

###

## **No. 17. Sibling** :heavy_check_mark:
* **File:**
  * [**17-binary_tree_sibling.c**](./17-binary_tree_sibling.c)
###
* **Write a function that creates a binary tree node**
  * **<ins>Prototype</ins>:** [**binary_tree_t *binary_tree_sibling(binary_tree_t *node);**](./17-binary_tree_sibling.c)
  * Where ${{\color{red}{\textsf{ node\ \}}}}$ is a pointer to the node to find the sibling.
  * Your function must return a pointer to the ${{\color{red}{\textsf{ sibling node\ \}}}}$
  * If ${{\color{red}{\textsf{ node\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ or the parent is ${{\color{red}{\textsf{ NULL\ \}}}}$ , return ${{\color{red}{\textsf{ NULL\ \}}}}$
  * If ${{\color{red}{\textsf{ node\ \}}}}$ has no sibling , return ${{\color{red}{\textsf{ NULL\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 17-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    binary_tree_t *sibling;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root->right, 402);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 110);
    root->right->right->left = binary_tree_node(root->right->right, 200);
    root->right->right->right = binary_tree_node(root->right->right, 512);

    binary_tree_print(root);
    sibling = binary_tree_sibling(root->left);
    printf("Sibling of %d: %d\n", root->left->n, sibling->n);
    sibling = binary_tree_sibling(root->right->left);
    printf("Sibling of %d: %d\n", root->right->left->n, sibling->n);
    sibling = binary_tree_sibling(root->left->right);
    printf("Sibling of %d: %d\n", root->left->right->n, sibling->n);
    sibling = binary_tree_sibling(root);
    printf("Sibling of %d: %p\n", root->n, (void *)sibling);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling
alex@/tmp/binary_trees$ ./17-sibling
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Sibling of 12: 128
Sibling of 110: 402
Sibling of 54: 10
Sibling of 98: (nil)
alex@/tmp/binary_trees$
```

###

## **No. 18. Uncle** :heavy_check_mark:
* **File:**
  * [**18-binary_tree_uncle.c**](./18-binary_tree_uncle.c)
###
* **Write a function that finds the uncle of a node**
  * **<ins>Prototype</ins>:** [**binary_tree_t *binary_tree_uncle(binary_tree_t *node);**](./18-binary_tree_uncle.c)
  * Where ${{\color{red}{\textsf{ node\ \}}}}$ is a pointer to the node to find the uncle.
  * Your function must return a pointer to the ${{\color{red}{\textsf{ uncle node\ \}}}}$
  * If ${{\color{red}{\textsf{ node\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , return ${{\color{red}{\textsf{ NULL\ \}}}}$
  * If ${{\color{red}{\textsf{ node\ \}}}}$ has no uncle , return ${{\color{red}{\textsf{ NULL\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 18-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    binary_tree_t *uncle;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root->right, 402);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 110);
    root->right->right->left = binary_tree_node(root->right->right, 200);
    root->right->right->right = binary_tree_node(root->right->right, 512);

    binary_tree_print(root);
    uncle = binary_tree_uncle(root->right->left);
    printf("Uncle of %d: %d\n", root->right->left->n, uncle->n);
    uncle = binary_tree_uncle(root->left->right);
    printf("Uncle of %d: %d\n", root->left->right->n, uncle->n);
    uncle = binary_tree_uncle(root->left);
    printf("Uncle of %d: %p\n", root->left->n, (void *)uncle);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle
alex@/tmp/binary_trees$ ./18-uncle
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Uncle of 110: 12
Uncle of 54: 128
Uncle of 12: (nil)
alex@/tmp/binary_trees$
```

###

<H1 align="center">ADVANCED_TASKS (From Task 19 to 41) :cd:</h1>


## **No. 19. Lowest common ancestor** :heavy_check_mark:
* **File:**
  * [**100-binary_trees_ancestor.c**](./100-binary_trees_ancestor.c)
###
* **Write a function that finds the lowest common ancestor of two nodes**
  * **<ins>Prototype</ins>:** [**binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);**](./100-binary_trees_ancestor.c)
  * Where ${{\color{red}{\textsf{ first\ \}}}}$ is a pointer to the first node
  * And ${{\color{red}{\textsf{ second\ \}}}}$ is a pointer to the second node
  * Your function must return a pointer to the lowest common ancestor node of the two given nodes
  * If no common ancestor was found, your function must return ${{\color{red}{\textsf{ NULL\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 100-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * launch_test - Test ancestor function and print informations
 *
 * @n1: First node
 * @n2: Second node
 */
void launch_test(binary_tree_t *n1, binary_tree_t *n2)
{
    binary_tree_t *ancestor;

    ancestor = binary_trees_ancestor(n1, n2);
    printf("Ancestor of [%d] & [%d]: ", n1->n, n2->n);
    if (!ancestor)
        printf("(nil)\n");
    else
        printf("%d\n", ancestor->n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root->right, 128);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 45);
    root->right->right->left = binary_tree_node(root->right->right, 92);
    root->right->right->right = binary_tree_node(root->right->right, 65);
    binary_tree_print(root);

    launch_test(root->left, root->right);
    launch_test(root->right->left, root->right->right->right);
    launch_test(root->right->right, root->right->right->right);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor
alex@/tmp/binary_trees$ ./100-ancestor
       .-------(098)-------.
  .--(012)--.         .--(402)-------.
(010)     (054)     (045)       .--(128)--.
                              (092)     (065)
Ancestor of [12] & [402]: 98
Ancestor of [45] & [65]: 402
Ancestor of [128] & [65]: 128
alex@/tmp/binary_trees$
```

###

## **No. 20. Level-order traversal** :heavy_check_mark:
* **File:**
  * [**101-binary_tree_levelorder.c**](./101-binary_tree_levelorder.c)
###
* **Write a function that goes through a binary tree using level-order traversal**
  * **<ins>Prototype</ins>:** [**void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));**](./101-binary_tree_levelorder.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to traverse
  * And ${{\color{red}{\textsf{ func\ \}}}}$ is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ or ${{\color{red}{\textsf{ func\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , do nothing 

```js
alex@/tmp/binary_trees$ cat 101-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    binary_tree_levelorder(root, &print_num);
    binary_tree_delete(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 101-main.c 101-binary_tree_levelorder.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 101-lvl
alex@/tmp/binary_trees$ valgrind ./101-lvl
==23445== Memcheck, a memory error detector
==23445== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==23445== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==23445== Command: ./101-lvl
==23445== 
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
98
12
402
6
56
256
512
==23445== 
==23445== HEAP SUMMARY:
==23445==     in use at exit: 0 bytes in 0 blocks
==23445==   total heap usage: 19 allocs, 19 frees, 1,197 bytes allocated
==23445== 
==23445== All heap blocks were freed -- no leaks are possible
==23445== 
==23445== For counts of detected and suppressed errors, rerun with: -v
==23445== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```

###

## **No. 21. Is complete** :heavy_check_mark:
* **File:**
  * [**102-binary_tree_is_complete.c**](./102-binary_tree_is_complete.c)
###
* **Write a function that checks if a binary tree is complete**
  * **<ins>Prototype</ins>:** [**int binary_tree_is_complete(const binary_tree_t *tree);**](./102-binary_tree_is_complete.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to check
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , your function must return ${{\color{red}{\textsf{ 0\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 102-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int complete;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);

    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);
    complete = binary_tree_is_complete(root->left);
    printf("Is %d complete: %d\n", root->left->n, complete);

    root->right->left = binary_tree_node(root->right, 112);
    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);

    root->left->left->left = binary_tree_node(root->left->left, 8);
    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);

    root->left->right->left = binary_tree_node(root->left->right, 23);
    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);

    binary_tree_delete(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 102-main.c 102-binary_tree_is_complete.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 102-complete
alex@/tmp/binary_trees$ ./102-complete
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 complete: 0
Is 12 complete: 1
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (112)     (402)
Is 98 complete: 1
            .-------(098)-------.
       .--(012)--.         .--(128)--.
  .--(010)     (054)     (112)     (402)
(008)
Is 98 complete: 1
            .------------(098)-------.
       .--(012)-------.         .--(128)--.
  .--(010)       .--(054)     (112)     (402)
(008)          (023)
Is 98 complete: 0
alex@/tmp/binary_trees$
```

###

## **No. 22. Rotate left** :heavy_check_mark:
* **File:**
  * [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c)
###
* **Write a function that performs a left-rotation on a binary tree**
  * **<ins>Prototype</ins>:** [**binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);**](./103-binary_tree_rotate_left.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to rotate
  * Your function must return a pointer to the new root node of the tree once rotated

```js
alex@/tmp/binary_trees$ cat 103-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->right = binary_tree_node(root, 128);
    root->right->right = binary_tree_node(root->right, 402);
    binary_tree_print(root);
    printf("Rotate-left %d\n", root->n);
    root = binary_tree_rotate_left(root);
    binary_tree_print(root);
    printf("\n");

    root->right->right = binary_tree_node(root->right, 450);
    root->right->left = binary_tree_node(root->right, 420);
    binary_tree_print(root);
    printf("Rotate-left %d\n", root->n);
    root = binary_tree_rotate_left(root);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 103-binary_tree_rotate_left.c 103-main.c 0-binary_tree_node.c -o 103-rotl
alex@/tmp/binary_trees$ ./103-rotl
(098)--.
     (128)--.
          (402)
Rotate-left 98
  .--(128)--.
(098)     (402)

  .--(128)-------.
(098)       .--(402)--.
          (420)     (450)
Rotate-left 128
       .-------(402)--.
  .--(128)--.       (450)
(098)     (420)
alex@/tmp/binary_trees$
```

###

## **No. 23. Rotate right** :heavy_check_mark:
* **File:**
  * [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c)
###
* **Write a function that performs a right-rotation on a binary tree**
  * **<ins>Prototype</ins>:** [**binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);**](./104-binary_tree_rotate_right.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to rotate
  * Your function must return a pointer to the new root node of the tree once rotated

```js
alex@/tmp/binary_trees$ cat 104-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 64);
    root->left->left = binary_tree_node(root->left, 32);
    binary_tree_print(root);
    printf("Rotate-right %d\n", root->n);
    root = binary_tree_rotate_right(root);
    binary_tree_print(root);
    printf("\n");

    root->left->left = binary_tree_node(root->left, 20);
    root->left->right = binary_tree_node(root->left, 56);
    binary_tree_print(root);
    printf("Rotate-right %d\n", root->n);
    root = binary_tree_rotate_right(root);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 104-binary_tree_rotate_right.c 104-main.c 0-binary_tree_node.c -o 104-rotr
alex@/tmp/binary_trees$ ./104-rotr
       .--(098)
  .--(064)
(032)
Rotate-right 98
  .--(064)--.
(032)     (098)

       .-------(064)--.
  .--(032)--.       (098)
(020)     (056)
Rotate-right 64
  .--(032)-------.
(020)       .--(064)--.
          (056)     (098)
alex@/tmp/binary_trees$
```

###

## **No. 24. Is BST** :heavy_check_mark:
* **File:**
  * [**110-binary_tree_is_bst.c**](./110-binary_tree_is_bst.c)
###
* **Write a function that checks if a binary tree is a valid** [**Binary Search Tree**](https://intranet.alxswe.com/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)
  * **<ins>Prototype</ins>:** [**int binary_tree_is_bst(const binary_tree_t *tree);**](./110-binary_tree_is_bst.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$  is a pointer to the root node of the tree to check
  * Your function must return ${{\color{red}{\textsf{ 1\ \}}}}$ if ${{\color{red}{\textsf{ tree\ \}}}}$ is a  valid BST, and ${{\color{red}{\textsf{ 0\ \}}}}$ otherwise
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , return ${{\color{red}{\textsf{ 0\ \}}}}$
###

<h3>Properties of a Binary Search Tree:</h3>
  * The left subtree of a node contains only nodes with values less than the node’s value
  * The right subtree of a node contains only nodes with values greater than the node’s value
  * The left and right subtree each must also be a binary search tree
  * There must be no duplicate values

```js
alex@/tmp/binary_trees$ cat 110-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int bst;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);

    binary_tree_print(root);
    bst = binary_tree_is_bst(root);
    printf("Is %d bst: %d\n", root->n, bst);
    bst = binary_tree_is_bst(root->left);
    printf("Is %d bst: %d\n", root->left->n, bst);

    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    bst = binary_tree_is_bst(root);
    printf("Is %d bst: %d\n", root->n, bst);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 110-main.c 110-binary_tree_is_bst.c 0-binary_tree_node.c -o 110-is_bst
alex@/tmp/binary_trees$ ./110-is_bst
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 bst: 1
Is 12 bst: 1
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (097)     (402)
Is 98 bst: 0
alex@/tmp/binary_trees$
```

### 

## **No. 25. BST-Insert** :heavy_check_mark:
* **File:**
  * [**111-bst_insert.c**](./111-bst_insert.c) ,
  * [**0-binary_tree_node.c**](./0-binary_tree_node.c)
###
* **Write a function that inserts a value in a Binary Search Tree**
  * **<ins>Prototype</ins>:** [**bst_t *bst_insert(bst_t** __**tree, int value);__](./111-bst_insert.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a double pointer to the root node of the BST to insert the value
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to store in the node to be inserted
  * Your function must return a pointer to the created node, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure
  * When created, a node does not have any child
  * If the address stored in ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , the created node must become the root node.
  * If the value is already present in the tree, it must be ignored
* Your file [**0-binary_tree_node.c**](./0-binary_tree_node.c) will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 111-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    bst_t *root;
    bst_t *node;

    root = NULL;
    node = bst_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 402);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 12);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 46);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 128);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 256);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 512);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 1);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 128);
    printf("Node should be nil -> %p\n", (void *)node);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 111-bst_insert.c 111-main.c 0-binary_tree_node.c -o 111-bst_insert
alex@/tmp/binary_trees$ ./111-bst_insert
Inserted: 98
Inserted: 402
Inserted: 12
Inserted: 46
Inserted: 128
Inserted: 256
Inserted: 512
Inserted: 1
Node should be nil -> (nil)
       .-------(098)------------.
  .--(012)--.         .-------(402)--.
(001)     (046)     (128)--.       (512)
                         (256)
alex@/tmp/binary_trees$
```

###

## **No. 26. BST-Array to BST** :heavy_check_mark:
* **File:**
  * [**112-array_to_bst.c**](./112-array_to_bst.c)
  * [**111-bst_insert.c**](./111-bst_insert.c]
  * [**0-binary_tree_node.c**](./0-binary_tree_node.c)
###
* **Write a function that builds a Binary Search Tree from an array**
  * **<ins>Prototype</ins>:** [**bst_t *array_to_bst(int *array, size_t size);**](./112-array_to_bst.c)
  * Where ${{\color{red}{\textsf{ array\ \}}}}$ is a pointer to the first element of the array to be converted
  * And ${{\color{red}{\textsf{ size\ \}}}}$ is the number of element in the array
  * Your function must return a pointer to the root node of the created BST, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure
  * If the value of the array is already present in the tree, this value must be ignored
* Your files [**111-bst_insert.c**](./111-bst_insert.c] and [**0-binary_tree_node.c**](./0-binary_tree_node.c) will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 112-main.c 
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    bst_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_bst(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 112-array_to_bst.c 112-main.c 111-bst_insert.c 0-binary_tree_node.c -o 112-bst_array
alex@/tmp/binary_trees$ ./112-bst_array
                                     .------------(079)-------.
                 .-----------------(047)-------.         .--(087)--.
       .-------(021)-------.              .--(068)     (084)     (091)-------.
  .--(002)--.         .--(032)--.       (062)                           .--(098)
(001)     (020)     (022)     (034)                                   (095)
alex@/tmp/binary_trees$
```

###

## **No. 27. BST-Search** :heavy_check_mark:
* **File:**
  * [**113-bst_search.c**](./113-bst_search.c)
###
* **Write a function that searches for a value in a Binary Search Tree**
  * **<ins>Prototype</ins>:** [**bst_t *bst_search(const bst_t *tree, int value);**](./113-bst_search.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the BST to search
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to search in the tree
  * Your function must return a pointer to the node containing a value equals to ${{\color{red}{\textsf{ value\ \}}}}$
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ or if nothing is found, your function must return ${{\color{red}{\textsf{ NULL\ \}}}}$

```js
alex@/tmp/binary_trees$ cat 113-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    bst_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    bst_t *node;

    tree = array_to_bst(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    node = bst_search(tree, 32);
    printf("Found: %d\n", node->n);
    binary_tree_print(node);
    node = bst_search(tree, 512);
    printf("Node should be nil -> %p\n", (void *)node);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 113-bst_search.c 113-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c -o 113-bst_search
alex@/tmp/binary_trees$ ./113-bst_search 
                                     .------------(079)-------.
                 .-----------------(047)-------.         .--(087)--.
       .-------(021)-------.              .--(068)     (084)     (091)-------.
  .--(002)--.         .--(032)--.       (062)                           .--(098)
(001)     (020)     (022)     (034)                                   (095)
Found: 32
  .--(032)--.
(022)     (034)
Node should be nil -> (nil)
alex@/tmp/binary_trees$
```

###

## **No. 28. BST-Remove** :heavy_check_mark:
* **File:**
  * [**114-bst_remove.c**](./114-bst_remove.c)
###
* **Write a function that creates a binary tree node**
  * **<ins>Prototype</ins>:** [**bst_t *bst_remove(bst_t *root, int value);**](./114-bst_remove.c)
  * Where ${{\color{red}{\textsf{ root\ \}}}}$  is a pointer to the root node of the tree where you will remove a node
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to remove in the tree
  * Once located, the node containing a value equals to ${{\color{red}{\textsf{ value\ \}}}}$ must be removed and freed
  * If the node to be deleted has two children, it must be replaced with its first ${{\color{red}{\textsf{ in\ \}}}}$**-**${{\color{red}{\textsf{ order\ \}}}}$ ${{\color{red}{\textsf{ successor\ \}}}}$ (not predecessor)
  * Your function must return a pointer to the new root node of the tree after removing the desired value

```js
alex@/tmp/binary_trees$ cat 114-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    bst_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_bst(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);

    tree = bst_remove(tree, 79);
    printf("Removed 79...\n");
    binary_tree_print(tree);

    tree = bst_remove(tree, 21);
    printf("Removed 21...\n");
    binary_tree_print(tree);

    tree = bst_remove(tree, 68);
    printf("Removed 68...\n");
    binary_tree_print(tree);
    binary_tree_delete(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 114-bst_remove.c 114-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 114-bst_rm
alex@/tmp/binary_trees$ valgrind ./114-bst_rm
==14720== Memcheck, a memory error detector
==14720== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==14720== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==14720== Command: ./114-bst_rm
==14720== 
                                     .------------(079)-------.
                 .-----------------(047)-------.         .--(087)--.
       .-------(021)-------.              .--(068)     (084)     (091)-------.
  .--(002)--.         .--(032)--.       (062)                           .--(098)
(001)     (020)     (022)     (034)                                   (095)
Removed 79...
                                     .------------(084)--.
                 .-----------------(047)-------.       (087)--.
       .-------(021)-------.              .--(068)          (091)-------.
  .--(002)--.         .--(032)--.       (062)                      .--(098)
(001)     (020)     (022)     (034)                              (095)
Removed 21...
                                .------------(084)--.
                 .------------(047)-------.       (087)--.
       .-------(022)--.              .--(068)          (091)-------.
  .--(002)--.       (032)--.       (062)                      .--(098)
(001)     (020)          (034)                              (095)
Removed 68...
                                .-------(084)--.
                 .------------(047)--.       (087)--.
       .-------(022)--.            (062)          (091)-------.
  .--(002)--.       (032)--.                             .--(098)
(001)     (020)          (034)                         (095)
==14720== 
==14720== HEAP SUMMARY:
==14720==     in use at exit: 0 bytes in 0 blocks
==14720==   total heap usage: 40 allocs, 40 frees, 5,772 bytes allocated
==14720== 
==14720== All heap blocks were freed -- no leaks are possible
==14720== 
==14720== For counts of detected and suppressed errors, rerun with: -v
==14720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```

###

## **No. 29. Big O #BST** :heavy_check_mark:
* **File:**
  * [**115-O**](./115-O)
###
* **What are the average time complexities of those operations on a Binary Search Tree (one answer per line):**
  * Inserting the value ${{\color{red}{\textsf{ n\ \}}}}$
  * Removing the node with the value ${{\color{red}{\textsf{ n\ \}}}}$
  * Searching for a node in a BST of size n

###

## **No. 30. Is AVL** :heavy_check_mark:
* **File:**
  * [**120-binary_tree_is_avl.c**](./120-binary_tree_is_avl.c)
###
* **Write a function that checks if a binary tree is a valid** [**AVL Tree**](https://intranet.alxswe.com/rltoken/fMAZ9aBS-rDWgeIAvdTKWw)
  * **<ins>Prototype</ins>:** [**int binary_tree_is_avl(const binary_tree_t *tree);**](./120-binary_tree_is_avl.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to check
  * Your function must return ${{\color{red}{\textsf{ 1\ \}}}}$ if ${{\color{red}{\textsf{ tree\ \}}}}$ is a valid AVL Tree, and ${{\color{red}{\textsf{ 0\ \}}}}$ otherwise
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , return ${{\color{red}{\textsf{ 0\ \}}}}$
###

<h3>Properties of an AVL Tree:</h3>
  * An AVL Tree is a BST
  * The difference between heights of left and right subtrees cannot be more than one
  * The left and right subtrees must also be AVL trees

```js
alex@/tmp/binary_trees$ cat 120-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int avl;

    root = basic_tree();

    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);
    avl = binary_tree_is_avl(root->left);
    printf("Is %d avl: %d\n", root->left->n, avl);

    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);

    root = basic_tree();
    root->right->right->right = binary_tree_node(root->right->right, 430);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);

    root->right->right->right->left = binary_tree_node(root->right->right->right, 420);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 120-main.c 120-binary_tree_is_avl.c 0-binary_tree_node.c -o 120-is_avl
alex@/tmp/binary_trees$ ./120-is_avl
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 avl: 1
Is 12 avl: 1
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (097)     (402)
Is 98 avl: 0
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)--.
                              (430)
Is 98 avl: 0
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)-------.
                                .--(430)
                              (420)
Is 98 avl: 0
alex@/tmp/binary_trees$
```

###

## **No. 31. AVL-Insert** :heavy_check_mark:
* **File:**
  * [**121-avl_insert.c**](./121-avl_insert.c)
  * [**14-binary_tree_balance.c**](./14-binary_tree_balance.c), 
  * [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c), 
  * [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c], 
  * [**0-binary_tree_node.c**](./0-binary_tree_node.c)
###
* **Write a function that inserts a value in an AVL Tree**
  * **<ins>Prototype</ins>:** [**avl_t *avl_insert(avl_t** __**tree, int value);__](./121-avl_insert.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is is a double pointer to the root node of the AVL tree for inserting the value
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to store in the node to be inserted
  * Your function must return a pointer to the created node, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure
  * If the address stored in ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$, the created node must become the root node.
  * The resulting tree after insertion, must be a balanced AVL Tree
* Your files [**14-binary_tree_balance.c**](./14-binary_tree_balance.c), [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c), [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c] and [**0-binary_tree_node.c**](./0-binary_tree_node.c) will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 121-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *root;
    avl_t *node;

    root = NULL;
    node = avl_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 402);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 12);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 46);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 128);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 256);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 512);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = avl_insert(&root, 50);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 121-avl_insert.c 121-main.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 0-binary_tree_node.c -o 121-avl_insert
alex@/tmp/binary_trees$ ./121-avl_insert
Inserted: 98
(098)

Inserted: 402
(098)--.
     (402)

Inserted: 12
  .--(098)--.
(012)     (402)

Inserted: 46
  .-------(098)--.
(012)--.       (402)
     (046)

Inserted: 128
  .-------(098)-------.
(012)--.         .--(402)
     (046)     (128)

Inserted: 256
  .-------(098)-------.
(012)--.         .--(256)--.
     (046)     (128)     (402)

Inserted: 512
  .-------(098)-------.
(012)--.         .--(256)--.
     (046)     (128)     (402)--.
                              (512)

Inserted: 50
       .-------(098)-------.
  .--(046)--.         .--(256)--.
(012)     (050)     (128)     (402)--.
                                   (512)
alex@/tmp/binary_trees$
```

###

## **No. 32. AVL-Array to AVL** :heavy_check_mark:
* **File:**
  * [**122-array_to_avl.c**](./122-array_to_avl.c)
  * [**121-avl_insert.c**](./121-avl_insert.c)
  * [**14-binary_tree_balance.c**](./14-binary_tree_balance.c), 
  * [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c), 
  * [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c], 
  * [**0-binary_tree_node.c**](./0-binary_tree_node.c)
###
* **Write a function that builds an AVL tree from an array**
  * **<ins>Prototype</ins>:** [**avl_t *array_to_avl(int *array, size_t size);**](./122-array_to_avl.c)
  * Where ${{\color{red}{\textsf{ array\ \}}}}$ is a pointer to the first element of the array to be converted
  * And ${{\color{red}{\textsf{ size\ \}}}}$ is the number of element in the array
  * Your function must return a pointer to the root node of the created AVL tree, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure
  * If a value of the array is already present in the tree, this value must be ignored
* Your files [**121-avl_insert.c**](./121-avl_insert.c), [**14-binary_tree_balance.c**](./14-binary_tree_balance.c), [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c), [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c] and [**0-binary_tree_node.c**](./0-binary_tree_node.c) will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 122-main.c 
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_avl(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 122-array_to_avl.c 122-main.c 121-avl_insert.c 0-binary_tree_node.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c -o 122-avl_array
alex@/tmp/binary_trees$ ./122-avl_array 
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)-------.
(001)     (020)     (022)     (034)     (062)     (079)     (087)       .--(098)
                                                                      (095)
alex@/tmp/binary_trees$
```

###

## **No. 33. AVL-Remove** :heavy_check_mark:
* **File:**
  * [**123-avl_remove.c**](./123-avl_remove.c)
  * [**14-binary_tree_balance.c**](./14-binary_tree_balance.c), 
  * [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c), 
  * [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c]
###
* **Write a function that creates a binary tree node**
  * **<ins>Prototype</ins>:** [**avl_t *avl_remove(avl_t *root, int value);**](./123-avl_remove.c)
  * Where ${{\color{red}{\textsf{ root\ \}}}}$ is a pointer to the root node of the tree for removing a node
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to remove in the tree
  * Once located, the node containing a value equals to ${{\color{red}{\textsf{ value\ \}}}}$ must be removed and freed
  * If the node to be deleted has two children, it must be replaced with its first ${{\color{red}{\textsf{ in\ \}}}}$**-**${{\color{red}{\textsf{ order\ \}}}}$ ${{\color{red}{\textsf{ successor\ \}}}}$ (not predecessor)
  * After deletion of the desired node, the tree must be rebalanced if necessary
  * Your function must return a pointer to the new root node of the tree after removing the desired value, and after rebalancing
* Your files [**14-binary_tree_balance.c**](./14-binary_tree_balance.c), [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c) and [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c] will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 123-main.c
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_avl(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);

    tree = avl_remove(tree, 47);
    printf("Removed 47...\n");
    binary_tree_print(tree);

    tree = avl_remove(tree, 79);
    printf("Removed 79...\n");
    binary_tree_print(tree);

    tree = avl_remove(tree, 32);
    printf("Removed 32...\n");
    binary_tree_print(tree);

    tree = avl_remove(tree, 34);
    printf("Removed 34...\n");
    binary_tree_print(tree);

    tree = avl_remove(tree, 22);
    printf("Removed 22...\n");
    binary_tree_print(tree);
    binary_tree_delete(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 123-avl_remove.c 123-main.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 122-array_to_avl.c 121-avl_insert.c 14-binary_tree_balance.c 3-binary_tree_delete.c 0-binary_tree_node.c -o 123-avl_rm
alex@/tmp/binary_trees$ valgrind ./123-avl_rm
==15646== Memcheck, a memory error detector
==15646== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==15646== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==15646== Command: ./123-avl_rm
==15646== 
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)-------.
(001)     (020)     (022)     (034)     (062)     (079)     (087)       .--(098)
                                                                      (095)
Removed 47...
                 .-----------------(062)------------.
       .-------(021)-------.              .-------(084)-------.
  .--(002)--.         .--(032)--.       (068)--.         .--(091)-------.
(001)     (020)     (022)     (034)          (079)     (087)       .--(098)
                                                                 (095)
Removed 79...
                 .-----------------(062)-----------------.
       .-------(021)-------.                   .-------(091)-------.
  .--(002)--.         .--(032)--.         .--(084)--.         .--(098)
(001)     (020)     (022)     (034)     (068)     (087)     (095)
Removed 32...
                 .------------(062)-----------------.
       .-------(021)-------.              .-------(091)-------.
  .--(002)--.         .--(034)       .--(084)--.         .--(098)
(001)     (020)     (022)          (068)     (087)     (095)
Removed 34...
                 .-------(062)-----------------.
       .-------(021)--.              .-------(091)-------.
  .--(002)--.       (022)       .--(084)--.         .--(098)
(001)     (020)               (068)     (087)     (095)
Removed 22...
       .------------(062)-----------------.
  .--(002)-------.              .-------(091)-------.
(001)       .--(021)       .--(084)--.         .--(098)
          (020)          (068)     (087)     (095)
==15646== 
==15646== HEAP SUMMARY:
==15646==     in use at exit: 0 bytes in 0 blocks
==15646==   total heap usage: 48 allocs, 48 frees, 7,350 bytes allocated
==15646== 
==15646== All heap blocks were freed -- no leaks are possible
==15646== 
==15646== For counts of detected and suppressed errors, rerun with: -v
==15646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```

###

## **No. 34. AVL-From sorted array** :heavy_check_mark:
* **File:**
  * [**124-sorted_array_to_avl.c**](./124-sorted_array_to_avl.c)
  * [**0-binary_tree_node.c**](./0-binary_tree_node.c)
###
* **Write a function that creates a binary tree node**
  * **<ins>Prototype</ins>:** [**avl_t *sorted_array_to_avl(int *array, size_t size);**](./124-sorted_array_to_avl.c)
  * Where ${{\color{red}{\textsf{ array\ \}}}}$ is a pointer to the first element of the array to be converted
  * And ${{\color{red}{\textsf{ size\ \}}}}$ is the number of element in the array
  * Your function must return a pointer to the root node of the created AVL tree, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure
  * You can assume there will be no duplicate value in the array
  * You are not allowed to rotate
  * You can only have 2 functions in your file
* Your file [**0-binary_tree_node.c**](./0-binary_tree_node.c) will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 124-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Size of the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; ++i)
        printf("(%03d)", array[i]);
    printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        1, 2, 20, 21, 22, 32, 34, 47, 62, 68,
        79, 84, 87, 91, 95, 98
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = sorted_array_to_avl(array, n);
    if (!tree)
        return (1);
    print_array(array, n);
    binary_tree_print(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 124-main.c 124-sorted_array_to_avl.c 0-binary_tree_node.c -o 124-avl_sorted
alex@/tmp/binary_trees$ ./124-avl_sorted
(001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
(001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                           (098)
alex@/tmp/binary_trees$
```

###

## **No. 35. Big O #AVL Tree** :heavy_check_mark:
* **File:**
  * [**125-O**](./125-O)
###
* **What are the average time complexities of those operations on an AVL Tree (one answer per line):**
  * Inserting the value ${{\color{red}{\textsf{ n\ \}}}}$
  * Removing the node with the value ${{\color{red}{\textsf{ n\ \}}}}$
  * Searching for a node in an AVL tree of size n

###

## **No. 36. Is Binary heap** :heavy_check_mark:
* **File:**
  * [**130-binary_tree_is_heap.c**](./130-binary_tree_is_heap.c)
###
* **Write a function that checks if a binary tree is a valid** [**Max Binary Heap**](https://intranet.alxswe.com/rltoken/TU_7dyDvU6XqO_T0elQk4Q)
  * **<ins>Prototype</ins>:** [**int binary_tree_is_heap(const binary_tree_t *tree);**](./130-binary_tree_is_heap.c)
  * Where ${{\color{red}{\textsf{ tree\ \}}}}$ is a pointer to the root node of the tree to check
  * Your function must return ${{\color{red}{\textsf{ 1\ \}}}}$ if ${{\color{red}{\textsf{ tree\ \}}}}$ is a Max Binary Heap, and ${{\color{red}{\textsf{ 0\ \}}}}$ otherwise
  * If ${{\color{red}{\textsf{ tree\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$ , return ${{\color{red}{\textsf{ 0\ \}}}}$
###

<h3>Properties of a Max Binary Heap:</h3>
  * It’s a complete tree
  * In a Max Binary Heap, the value at root must be maximum among all values present in Binary Heap
  * The last property must be recursively true for all nodes in Binary Tree

```js
alex@/tmp/binary_trees$ cat 130-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 90);
    root->right = binary_tree_node(root, 85);
    root->left->right = binary_tree_node(root->left, 80);
    root->left->left = binary_tree_node(root->left, 79);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int heap;

    root = basic_tree();

    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);
    heap = binary_tree_is_heap(root->left);
    printf("Is %d heap: %d\n", root->left->n, heap);

    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);

    root = basic_tree();
    root->right->right = binary_tree_node(root->right, 79);
    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 130-main.c 130-binary_tree_is_heap.c 0-binary_tree_node.c -o 130-is_heap
alex@/tmp/binary_trees$ ./130-is_heap
       .-------(098)--.
  .--(090)--.       (085)
(079)     (080)
Is 98 heap: 1
Is 90 heap: 1
       .-------(098)-------.
  .--(090)--.         .--(085)
(079)     (080)     (097)
Is 98 heap: 0
       .-------(098)--.
  .--(090)--.       (085)--.
(079)     (080)          (079)
Is 98 heap: 0
alex@/tmp/binary_trees$
```

###

## **No. 37. Heap-Insert** :heavy_check_mark:
* **File:**
  * [**131-heap_insert.c**](./131-heap_insert.c)
###
* **Write a function that inserts a value in Max Binary Heap**
  * **<ins>Prototype</ins>:** [**heap_t *heap_insert(heap_t** __**root, int value);__](./131-heap_insert.c)
  * Where ${{\color{red}{\textsf{ root\ \}}}}$ is a double pointer to the root node of the Heap to insert the value
  * And ${{\color{red}{\textsf{ value\ \}}}}$ is the value to store in the node to be inserted
  * Your function must return a pointer to the created node, or ${{\color{red}{\textsf{ NULL\ \}}}}$ on failure
  * If the address stored in ${{\color{red}{\textsf{ root\ \}}}}$ is ${{\color{red}{\textsf{ NULL\ \}}}}$, the created node must become the root node.
  * You have to respect a ${{\color{red}{\textsf{ Max\ \}}}}$ ${{\color{red}{\textsf{ Heap\ \}}}}$ ordering
  * You are allowed to have up to ${{\color{red}{\textsf{ 6\ \}}}}$ functions in your file
* Your file [**0-binary_tree_node.c**](./0-binary_tree_node.c) will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 131-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *root;
    heap_t *node;

    root = NULL;
    node = heap_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 402);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 12);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 46);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 128);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 256);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 512);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 50);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 131-main.c 131-heap_insert.c 0-binary_tree_node.c -o 131-heap_insert
alex@/tmp/binary_trees$ ./131-heap_insert
Inserted: 98
(098)

Inserted: 402
  .--(402)
(098)

Inserted: 12
  .--(402)--.
(098)     (012)

Inserted: 46
       .--(402)--.
  .--(098)     (012)
(046)

Inserted: 128
       .-------(402)--.
  .--(128)--.       (012)
(046)     (098)

Inserted: 256
       .-------(402)-------.
  .--(128)--.         .--(256)
(046)     (098)     (012)

Inserted: 512
       .-------(512)-------.
  .--(128)--.         .--(402)--.
(046)     (098)     (012)     (256)

Inserted: 50
            .-------(512)-------.
       .--(128)--.         .--(402)--.
  .--(050)     (098)     (012)     (256)
(046)
alex@/tmp/binary_trees$
```

###

## **No. 38. Heap - Array to Binary Heap** :heavy_check_mark:
* **File:**
  * [**132-array_to_heap.c**](./132-array_to_heap.c),
  * [**131-heap_insert.c**](./131-heap_insert.c], 
  * [**0-binary_tree_node.c**](./0-binary_tree_node.c)
###
* **Write a function that builds a Max Binary Heap tree from an array**
  * **<ins>Prototype</ins>:** [**heap_t *array_to_heap(int *array, size_t size);**](./132-array_to_heap.c)
  * Where array is a pointer to the first element of the array to be converted
  * And size is the number of element in the array
  * Your function must return a pointer to the root node of the created Binary Heap, or NULL on failure
* Your files [**131-heap_insert.c**](./131-heap_insert.c] and [**0-binary_tree_node.c**](./0-binary_tree_node.c) will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 132-main.c
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_heap(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 132-main.c 132-array_to_heap.c 131-heap_insert.c 0-binary_tree_node.c -o 132-heap_array
alex@/tmp/binary_trees$ ./132-heap_array
                      .-----------------(098)-----------------.
            .-------(095)-------.                   .-------(091)-------.
       .--(084)--.         .--(079)--.         .--(087)--.         .--(062)--.
  .--(047)     (034)     (002)     (020)     (022)     (068)     (001)     (021)
(032)
alex@/tmp/binary_trees$
```

###

## **No. 39. Heap-Extract** :heavy_check_mark:
* **File:**
  * [**133-heap_extract.c**](./133-heap_extract.c)
###
* **Write a function that extracts the root node of a Max Binary Heap**
  * **<ins>Prototype</ins>:** [**int heap_extract(heap_t** __**root);__](./133-heap_extract.c)
  * Where ${{\color{red}{\textsf{ root\ \}}}}$ is a double pointer to the root node of heap
  * Your function must return the value stored in the root node
  * The root node must be freed and replace with the last ${{\color{red}{\textsf{ level\ \}}}}$**-**${{\color{red}{\textsf{ order\ \}}}}$ node of the heap
  * Once replaced, the heap must be rebuilt if necessary
  * If your function fails, return ${{\color{red}{\textsf{ 0\ \}}}}$ 

```js
alex@/tmp/binary_trees$ cat 133-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    int extract;

    tree = array_to_heap(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);

    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);

    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);

    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);
    binary_tree_delete(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 133-main.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c 3-binary_tree_delete.c -o 133-heap_extract
alex@/tmp/binary_trees$ valgrind ./133-heap_extract
==29133== Memcheck, a memory error detector
==29133== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==29133== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==29133== Command: ./133-heap_extract
==29133== 
                      .-----------------(098)-----------------.
            .-------(095)-------.                   .-------(091)-------.
       .--(084)--.         .--(079)--.         .--(087)--.         .--(062)--.
  .--(047)     (034)     (002)     (020)     (022)     (068)     (001)     (021)
(032)
Extracted: 98
                 .-----------------(095)-----------------.
       .-------(084)-------.                   .-------(091)-------.
  .--(047)--.         .--(079)--.         .--(087)--.         .--(062)--.
(032)     (034)     (002)     (020)     (022)     (068)     (001)     (021)
Extracted: 95
                 .-----------------(091)-----------------.
       .-------(084)-------.                   .-------(087)-------.
  .--(047)--.         .--(079)--.         .--(068)--.         .--(062)
(032)     (034)     (002)     (020)     (022)     (021)     (001)
Extracted: 91
                 .-----------------(087)-----------------.
       .-------(084)-------.                   .-------(068)--.
  .--(047)--.         .--(079)--.         .--(022)--.       (062)
(032)     (034)     (002)     (020)     (001)     (021)
==29133== 
==29133== HEAP SUMMARY:
==29133==     in use at exit: 0 bytes in 0 blocks
==29133==   total heap usage: 213 allocs, 213 frees, 9,063 bytes allocated
==29133== 
==29133== All heap blocks were freed -- no leaks are possible
==29133== 
==29133== For counts of detected and suppressed errors, rerun with: -v
==29133== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```

###

## **No. 40. Heap-Sort** :heavy_check_mark:
* **File:**
  * [**134-heap_to_sorted_array.c**](./134-heap_to_sorted_array.c)
  * [**133-heap_extract.c**](./133-heap_extract.c]
###
* **Write a function that creates a binary tree node**
  * **<ins>Prototype</ins>:** [**int *heap_to_sorted_array(heap_t *heap, size_t *size);**](./134-heap_to_sorted_array.c)
  * Where ${{\color{red}{\textsf{ heap\ \}}}}$  is a pointer to the root node of the heap to convert
  * And ${{\color{red}{\textsf{ size\ \}}}}$  is an address to store the size of the array
  * You can assume ${{\color{red}{\textsf{ size\ \}}}}$ is a valid address 
  * Since we are using Max Heap, the returned array must be sorted in descending order
* Your files [**133-heap_extract.c**](./133-heap_extract.c] will be compile during the correction

```js
alex@/tmp/binary_trees$ cat 134-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    int *sorted;
    size_t sorted_size;

    print_array(array, n);
    tree = array_to_heap(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    sorted = heap_to_sorted_array(tree, &sorted_size);
    print_array(sorted, sorted_size);
    free(sorted);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 134-main.c 134-heap_to_sorted_array.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c -o 134-heap_sort
alex@/tmp/binary_trees$ valgrind ./134-heap_sort
==46529== Memcheck, a memory error detector
==46529== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==46529== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==46529== Command: ./134-heap_sort
==46529== 
79, 47, 68, 87, 84, 91, 21, 32, 34, 2, 20, 22, 98, 1, 62, 95
                      .-----------------(098)-----------------.
            .-------(095)-------.                   .-------(091)-------.
       .--(084)--.         .--(079)--.         .--(087)--.         .--(062)--.
  .--(047)     (034)     (002)     (020)     (022)     (068)     (001)     (021)
(032)
98, 95, 91, 87, 84, 79, 68, 62, 47, 34, 32, 22, 21, 20, 2, 1
==46529== 
==46529== HEAP SUMMARY:
==46529==     in use at exit: 0 bytes in 0 blocks
==46529==   total heap usage: 301 allocs, 301 frees, 8,323 bytes allocated
==46529== 
==46529== All heap blocks were freed -- no leaks are possible
==46529== 
==46529== For counts of detected and suppressed errors, rerun with: -v
==46529== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
```

###

## **No. 41. Big O #Binary Heap** :heavy_check_mark:
* **File:**
  * [**135-O**](./135-O)
###
* **What are the average time complexities of those operations on a Binary Heap (one answer per line):**
  * Inserting the value n
  * Extracting the root node
  * Searching for a node in a binary heap of size n

###
