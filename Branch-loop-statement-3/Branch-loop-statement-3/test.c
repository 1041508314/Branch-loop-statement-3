#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//	
//	int mid = (left + right) / 2;
//	if (arr[mid] < k)
//	{
//		left = mid + 1;
//
//	}
//	else if (arr[mid]>k)
//	{
//		right = mid + 1;
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", mid);
//		break;
//
//	}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!";
//	char arr2[] = "######################";
//	
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯�ߺ���  ��λ�Ǻ���
//		system("cls");//ִ��ϵͳ���� cls �����Ļ��Ϣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//        return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (0 == strcmp(password, "123456"))//�����ַ����Ƚϴ�С����ֱ����==��Ӧ��ʹ��strcmp������string compare
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//    if (i == 3)
//    {
//		printf("������������˳�����\n");
//	}
//	
//
//	return 0;
//}






//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("****************************\n");
//	printf("***   1.play    0.exit   ***\n");
//	printf("****************************\n");
//}
////RAND_MAX  32767
////rand��������0-32767֮��������
//
//void game()
//{
//	int guess = 0;
//	/*srand((unsigned int)time(NULL));*///time���� 
//	//����һ��ʱ��� 
//	//ʱ���ָ���Ǽ�����ڵ���time���������ʱ��ͼ������ʼʱ�䣨1970.1.1 0��0��0��֮���һ����ֵ����λ����
//	
//	int ret=rand()%100+1;
//	/*printf("%d\n", ret);*/
//	//1.��������һ��������� 2.������
//	while (1)
//	{
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//	    case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//
//				
//		}
//
//	} while (input);
//	return 0;
//}



//#include<stdlib.h>
//int main()
//{
//	//�ػ�
//	//shutdown
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	printf("������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");//ȡ���ػ�
//
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//#include<stdlib.h>
//int main()
//{
//	//�ػ�
//	//shutdown
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//			printf("��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//			printf("������:>");
//			scanf("%s", input);
//			if (0 == strcmp(input, "������"))
//			{
//				system("shutdown -a");//ȡ���ػ�
//				break;
//			}
//		
//	}
//			return 0;
//}
//	//goto ��������ѭ�����



#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("****************************\n");
	printf("***  1.play   0.exit  ***\n");
	printf("****************************\n");
}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (input);
	return 0;
}