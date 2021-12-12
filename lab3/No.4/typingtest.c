//CH7. File

#include <stdio.h>
#include <termios.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#define PASSWORDSIZE 12

int main(void){
	
	int fd; 
	int nread, cnt = 0, errcnt = 0;
	char ch, text[] = "The maginc thing is that you can change it.";
	struct termios init_attr, new_attr;
	
	fd = open(ttyname(fileno(stdin)), O_RDWR);
	tcgetattr(fd, &init_attr);

	new_attr = init_attr;
	new_attr.c_lflag &= ~ICANON;
	new_attr.c_lflag &= ~ECHO;
	new_attr.c_cc[VMIN] = 1;
	new_attr.c_cc[VTIME] = 0;
	if(tcsetattr(fd, TCSANOW, &new_attr) != 0){
		fprintf(stderr, "터미널 속성 설정 불가능\n");
	}
	printf("다음 문장을 입력하세요.\n%s\n", text);
	while ((nread = read(fd, &ch, 1)) > 0 && ch != '\n')
	{
		if(ch == text[cnt++])
		{
			write(fd, &ch, 1);
		}

		else
		{
			write(fd, "*", 1);
			errcnt++;
		}

	}
	
	printf("타이핑 오류 횟수: %d\n", errcnt);
	tcsetattr(fd, TCSANOW,  &init_attr);
	close(fd);
}