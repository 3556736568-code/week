#include<stdio.h>
struct GPIO
{
	int GPIO_Speed;
}a;
enum GPIO2
{
	GPIO_Speed_10MHz,
    GPIO_Speed_50MHz,
    GPIO_Speed_2MHz,
}b;
void GPIO_StructureInit(struct GPIO*c)
{
	c->GPIO_Speed = GPIO_Speed_2MHz;
}
int main()
{
	struct GPIO a;
	GPIO_StructureInit(&a);
	printf("%d\n", a.GPIO_Speed);
	return 0;
}