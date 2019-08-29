#ifndef __MOTION_H
#define __MOTION_H
//��Ľṹ�� ��λmm
typedef struct
{
	float x;
	float y;
}Point_t;
//��бʽ�ṹ�� ��б���ýǶ��ƵĽǶȴ���
typedef struct
{
	Point_t point;
	//�Ƕ���
	float   direction;
	//�ٶ�
	float vel;
}Pose_t;
typedef struct
{
	Point_t point;
	float u;
	float direction;
	unsigned short startPtr;
	unsigned short endPtr;
}PointU_t;
typedef struct
{
	float module;
	float direction;
}vector_t;
//�Ƕ���ת��Ϊ������ϵ��
#define CHANGE_TO_RADIAN    0.01745329251994f   
//������ת��Ϊ�Ƕ���ϵ��
#define CHANGE_TO_ANGLE     57.29577951308232f				
//Բ����
#ifndef PI
#define PI                  3.1415926f
#endif

#endif 
