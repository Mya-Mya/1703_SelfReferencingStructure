struct list {
	char data[20];//���e
	struct list *next;//���̃f�[�^�̃|�C���^
};

struct list *FirstList;//��ԍŏ���A�\���̂̃|�C���^
struct list *TmpList;//�ꎞ�I�ȍ��̍\���̂̃|�C���^
struct list *LastList;//�O�̍\���̂̃|�C���^

//A�̒ǉ�
TmpList = malloc(sizeof(struct list));
///TmpList=�P�O�Ɖ��肷��
if (TmpListPointer != 0) {
	TmpList->data ="��[�[�I�I";//A��data�Ɂu��[�[�I�I�v
	///�P�O�Ԓn��data�Ɂu��[�[�I�I�v
	TmpList->next = NULL;//A��next��NULL
	///�P�O�Ԓn��next��NULL

	LastList = TmpList;//����B�ł̏����̎���A�̋��ꏊ���o���Ă��Ă��炤
	///LastList=�P�O

	FirstList = TmpList;//��ԍŏ���A�̋��ꏊ���o���Ă��Ă��炤
}

//B�̒ǉ�
TmpList = malloc(sizeof(struct list));
///TmpList=�R�O�Ɖ��肷��
if (TmpList != 0) {
	TmpList->data = "�����[���I�I";//B��data�Ɂu�����[���I�I�v
	///�R�O�Ԓn��data�Ɂu�����[���I�I�v
	TmpList->next = NULL;//B��next��NULL
	///�R�O�Ԓn��next��NULL

	LastList->next = TmpList;//A��next��B�̃A�h���X�B
	///�P�O�Ԓn��next�ɂR�O

	LastList = TmpList;//����C�ł̏����̎���B�̋��ꏊ���o���Ă��Ă��炤
	///LastList=�R�O
}

//C�̒ǉ�
TmpList = malloc(sizeof(struct list));
///TmpList=�T�O�Ɖ��肷��
if (TmpList != 0) {
	TmpList->data = "�����̂��[�I�I";//C��data�Ɂu�����̂��[�I�I�v
	///�T�O�Ԓn��data�Ɂu�����̂��[�I�I�v
	TmpList->next = NULL;//C��next��NULL
	///�T�O�Ԓn��next��NULL

	LastList->next = TmpList;//B��next��C�̃A�h���X�B
	///�R�O�Ԓn��next�ɂT�O

	LastList = TmpList;//���̏����̎���C�̋��ꏊ���o���Ă��Ă��炤
	///LastList=�T�O
}

/*
���ɂ����Ń��X�g�̒ǉ����I������Ƃ��Ă�C��next��NULL�����A
LastList��C�̃A�h���X�������ł��Ă���̂ŁA���ǉ����Ă�OK�B
*/

//