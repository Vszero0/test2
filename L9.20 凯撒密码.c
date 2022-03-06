//凯撒密码：把字符的ASCII码加三输出字符
#include <stdio.h>

void encode(char code[], int n);/* 加密函数原型说明 */

int main(void)
{
	/* 变量定义 */
	char text[100];		/* 明文 */

	/* 输入明文 */
	printf("明文：");
	fgets(text, sizeof(text), stdin);					

	/* 加密 */
	encode(text, 3);	/* 明文为text字符串，密钥为3 */

	/* 输出密文 */
	printf("密文：%s\n", text);

	return 0;
}

//函数功能：加密
void encode(char code[], int n)
{
	int i = 0;
	while(code[i])
	{
		if(code[i] >= 'a' && code[i] <= 'z')		/* 处理小写字母 */
		{
			code[i] += 3;
			if(code[i] > 'z')
				code[i] -= 26;
		}
		else if(code[i] >= 'A' && code[i] <= 'Z')	/* 处理大写字母 */
		{
			code[i] += 3;
			if(code[i] > 'Z')
				code[i] -= 26;
		}

		i++;						/* 下一个字符 */
	}
}
