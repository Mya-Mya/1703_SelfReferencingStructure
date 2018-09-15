//参考-> http://www.wakayama-u.ac.jp/~tac/pointer/

///ただの変数
int i;//変数iに対応する箱をメモリ上に用意する。

///構造体
struct prefecture {//箱の形を決めているだけで、メモリ上に箱は用意されていない。
	char name[16];
	int population;
	int area;
	double density;
};
struct prefecture pref;//メモリ上に箱を作る。
pref.population = 10000;//構造体のメンバ変数を扱う。

///ポインタ
int *ap;//ポインタが指す先の場所にint型の箱があることを表す。
int *aq;
int ai;
ai = 5;//aiの中に５が入った。
ap = &ai;//「５」が入っているaiのアドレスの値が入った。
aq = ap;//コピーもできる。通常の変数と同じ。
*aq = 3;//「aqの箱の中にあるアドレスが指している場所」つまり変数aiの箱の中　に３が入った。

int *bp, *bq;
int **br;
int bi,bj,bk;
bi = 5;//biの中に５が入った。
bp = &bi;//bpの中に「５」が入っているbiのアドレス値が入った。
bq = bp;//コピー
bj = *bq;//「bqの箱の中にあるアドレスが指している場所」つまり変数biの箱の中の５
br = &bq;//「『５』が入っているbiのアドレス値」が入っているbqのアドレス値
bk = **br;//『「brの箱の中にあるアドレスが指している場所」つまり変数bqの箱の中にあるアドレスが指している場所』つまり変数biの箱の中の５

///リスト構造
//自己参照構造体。その構造体の箱に次の構造体の箱のアドレスを入れて辿れる。
struct list
{
	int data;
	struct list *next;//構造体のメンバ変数の型として、自分自身が使われている。
};

//ポインタの宣言
struct list *root;
struct list *p;
p = malloc(sizeof(struct list));//構造体の箱を作る。何個も箱が作れる。pは構造体のメモリ領域のアドレス値。
//pの中身が５０になった。pのアドレスは２０番地となった。
if (p != NULL) {
	root = p;//rootの中身が５０になった。rootのアドレスは１０番地となった。
	p->data = 0;//５０番地のdataの中身を０。
	p->next = NULL;//５０番地のnextの中身をNULL。
}

p = malloc(sizeof(struct list));
//pの中身が１５０になった。pのアドレスは変わらず２０番地。
if (p != NULL) {
	p->data = 2;//１５０番地のdataの中身を２。
	p->next = root->next;//１５０番地のnextの中身を５０。
	root->next = p;//root->nextの中身を１５０。
}

p = malloc(sizeof(struct list));
//pの中身が８０になった。pのアドレスは変わらず２０番地。
if (p != NULL) {
	p->data = 1;//８０番地のdataの中身を０。
	p->next = NULL;//８０番地のnextにNULL。
	root->next = p;//５０番地(ここ注目！５０番地！)のnextの中身を８０。
}

