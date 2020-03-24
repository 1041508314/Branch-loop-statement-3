#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
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
//		printf("找到了，下标是:%d\n", mid);
//		break;
//
//	}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
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
//		Sleep(1000);//睡眠函数  单位是毫秒
//		system("cls");//执行系统命令 cls 清空屏幕信息
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
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (0 == strcmp(password, "123456"))//两个字符串比较大小不能直接用==，应该使用strcmp（），string compare
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//    if (i == 3)
//    {
//		printf("三次密码错误，退出程序\n");
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
////rand函数返回0-32767之间的随机数
//
//void game()
//{
//	int guess = 0;
//	/*srand((unsigned int)time(NULL));*///time函数 
//	//返回一个时间戳 
//	//时间戳指的是计算机在调用time函数的这个时间和计算机起始时间（1970.1.1 0：0：0）之间的一个差值，单位是秒
//	
//	int ret=rand()%100+1;
//	/*printf("%d\n", ret);*/
//	//1.电脑生成一个随机数字 2.猜数字
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//	    case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//	//关机
//	//shutdown
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	printf("请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");//取消关机
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
//	//关机
//	//shutdown
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//			printf("你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//			printf("请输入:>");
//			scanf("%s", input);
//			if (0 == strcmp(input, "我是猪"))
//			{
//				system("shutdown -a");//取消关机
//				break;
//			}
//		
//	}
//			return 0;
//}
//	//goto 语句可以用循环替代



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
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}
	} while (input);
	return 0;
}