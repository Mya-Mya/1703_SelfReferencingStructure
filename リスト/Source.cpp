//�Q�l-> http://www.wakayama-u.ac.jp/~tac/pointer/

///�����̕ϐ�
int i;//�ϐ�i�ɑΉ����锠����������ɗp�ӂ���B

///�\����
struct prefecture {//���̌`�����߂Ă��邾���ŁA��������ɔ��͗p�ӂ���Ă��Ȃ��B
	char name[16];
	int population;
	int area;
	double density;
};
struct prefecture pref;//��������ɔ������B
pref.population = 10000;//�\���̂̃����o�ϐ��������B

///�|�C���^
int *ap;//�|�C���^���w����̏ꏊ��int�^�̔������邱�Ƃ�\���B
int *aq;
int ai;
ai = 5;//ai�̒��ɂT���������B
ap = &ai;//�u�T�v�������Ă���ai�̃A�h���X�̒l���������B
aq = ap;//�R�s�[���ł���B�ʏ�̕ϐ��Ɠ����B
*aq = 3;//�uaq�̔��̒��ɂ���A�h���X���w���Ă���ꏊ�v�܂�ϐ�ai�̔��̒��@�ɂR���������B

int *bp, *bq;
int **br;
int bi,bj,bk;
bi = 5;//bi�̒��ɂT���������B
bp = &bi;//bp�̒��Ɂu�T�v�������Ă���bi�̃A�h���X�l���������B
bq = bp;//�R�s�[
bj = *bq;//�ubq�̔��̒��ɂ���A�h���X���w���Ă���ꏊ�v�܂�ϐ�bi�̔��̒��̂T
br = &bq;//�u�w�T�x�������Ă���bi�̃A�h���X�l�v�������Ă���bq�̃A�h���X�l
bk = **br;//�w�ubr�̔��̒��ɂ���A�h���X���w���Ă���ꏊ�v�܂�ϐ�bq�̔��̒��ɂ���A�h���X���w���Ă���ꏊ�x�܂�ϐ�bi�̔��̒��̂T

///���X�g�\��
//���ȎQ�ƍ\���́B���̍\���̂̔��Ɏ��̍\���̂̔��̃A�h���X�����ĒH���B
struct list
{
	int data;
	struct list *next;//�\���̂̃����o�ϐ��̌^�Ƃ��āA�������g���g���Ă���B
};

//�|�C���^�̐錾
struct list *root;
struct list *p;
p = malloc(sizeof(struct list));//�\���̂̔������B������������Bp�͍\���̂̃������̈�̃A�h���X�l�B
//p�̒��g���T�O�ɂȂ����Bp�̃A�h���X�͂Q�O�Ԓn�ƂȂ����B
if (p != NULL) {
	root = p;//root�̒��g���T�O�ɂȂ����Broot�̃A�h���X�͂P�O�Ԓn�ƂȂ����B
	p->data = 0;//�T�O�Ԓn��data�̒��g���O�B
	p->next = NULL;//�T�O�Ԓn��next�̒��g��NULL�B
}

p = malloc(sizeof(struct list));
//p�̒��g���P�T�O�ɂȂ����Bp�̃A�h���X�͕ς�炸�Q�O�Ԓn�B
if (p != NULL) {
	p->data = 2;//�P�T�O�Ԓn��data�̒��g���Q�B
	p->next = root->next;//�P�T�O�Ԓn��next�̒��g���T�O�B
	root->next = p;//root->next�̒��g���P�T�O�B
}

p = malloc(sizeof(struct list));
//p�̒��g���W�O�ɂȂ����Bp�̃A�h���X�͕ς�炸�Q�O�Ԓn�B
if (p != NULL) {
	p->data = 1;//�W�O�Ԓn��data�̒��g���O�B
	p->next = NULL;//�W�O�Ԓn��next��NULL�B
	root->next = p;//�T�O�Ԓn(�������ځI�T�O�Ԓn�I)��next�̒��g���W�O�B
}

