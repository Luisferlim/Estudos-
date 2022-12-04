#include <iostream>
#include <stdlib.h>

using namespace std;

void contador (int num);
void recusividade_contador (int num, int cont = 0);
int fibonacci(int n);

int main ()
{
    int n;
    printf("Digite o numero de termos na sequencia: ");
    scanf("%d", &n);
  
    while(n <= 0) {
    printf("ERRO.. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
  }
  
  for (int i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));
  }

  printf("\n");
}

void contador (int num)
{
    for(int x = 0; x <= num; x++)
    {
        cout << x << "\n";
    }
}

void recusividade_contador (int num, int cont)
{
    cout << cont << "\n";
    if (num > cont)
    {
        recusividade_contador(num, ++cont);
    }
}

int fibonacci(int n) {
  int x;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  x = fibonacci(n-1) + fibonacci(n-2);
  return(x);
}

