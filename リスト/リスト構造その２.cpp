struct list {
	char data[20];//内容
	struct list *next;//次のデータのポインタ
};

struct list *FirstList;//一番最初のA構造体のポインタ
struct list *TmpList;//一時的な今の構造体のポインタ
struct list *LastList;//前の構造体のポインタ

//Aの追加
TmpList = malloc(sizeof(struct list));
///TmpList=１０と仮定する
if (TmpListPointer != 0) {
	TmpList->data ="わーー！！";//Aのdataに「わーー！！」
	///１０番地のdataに「わーー！！」
	TmpList->next = NULL;//AのnextにNULL
	///１０番地のnextにNULL

	LastList = TmpList;//次のBでの処理の時にAの居場所を覚えていてもらう
	///LastList=１０

	FirstList = TmpList;//一番最初のAの居場所を覚えていてもらう
}

//Bの追加
TmpList = malloc(sizeof(struct list));
///TmpList=３０と仮定する
if (TmpList != 0) {
	TmpList->data = "すごーい！！";//Bのdataに「すごーい！！」
	///３０番地のdataに「すごーい！！」
	TmpList->next = NULL;//BのnextにNULL
	///３０番地のnextにNULL

	LastList->next = TmpList;//AのnextにBのアドレス。
	///１０番地のnextに３０

	LastList = TmpList;//次のCでの処理の時にBの居場所を覚えていてもらう
	///LastList=３０
}

//Cの追加
TmpList = malloc(sizeof(struct list));
///TmpList=５０と仮定する
if (TmpList != 0) {
	TmpList->data = "たっのしー！！";//Cのdataに「たっのしー！！」
	///５０番地のdataに「たっのしー！！」
	TmpList->next = NULL;//CのnextにNULL
	///５０番地のnextにNULL

	LastList->next = TmpList;//BのnextにCのアドレス。
	///３０番地のnextに５０

	LastList = TmpList;//次の処理の時にCの居場所を覚えていてもらう
	///LastList=５０
}

/*
仮にここでリストの追加が終わったとしてもCのnextはNULLだし、
LastListにCのアドレスがメモできているので、いつ追加してもOK。
*/

//