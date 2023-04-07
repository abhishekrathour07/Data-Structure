// Q.no8
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct pnode
{
      int power, coeff;
      struct pnode *next;
} pnode;
pnode *pol1, *pol2, *res;
void main()
{
      int m, n, i;
      pnode *p, *q, *r;
      res == NULL;
      printf("Enter the nodes of the polynomial 1 ");
      scanf("%d", &n);
      pol1 = (pnode *)malloc(sizeof(pnode));
      printf("Enter power & coffecient ");
      scanf("%d%d", &pol1->coeff, &pol1->power);
      pol1->next = NULL;
      p = pol1;
      for (i = 1; i < n; i++)
      {
            p->next = (pnode *)malloc(sizeof(pnode));
            p = p->next;
            printf("Enter power & coffecient ");
            scanf("%d%d", &p->coeff, &p->power);
            p->next = NULL;
      }

      printf("Enter the nodes of the polynomial 2 ");
      scanf("%d", &m);
      pol2 = (pnode *)malloc(sizeof(pnode));
      printf("Enter power & coffecient ");
      scanf("%d%d", &pol2->coeff, &pol2->power);
      pol2->next = NULL;
      q = pol2;
      for (i = 1; i < m; i++)
      {
            q->next = (pnode *)malloc(sizeof(pnode));
            q = q->next;
            printf("Enter power & coffecient ");
            scanf("%d%d", &q->coeff, &q->power);
            q->next = NULL;
      }
      p = pol1;
      q = pol2;
      while (p != NULL && q != NULL)
      {
            if (res == NULL)
            {
                  res = (pnode *)malloc(sizeof(pnode));
                  res->next = NULL;
                  r = res;
            }
            else
            {
                  r->next = (pnode *)malloc(sizeof(pnode));
                  r = r->next;
                  r->next = NULL;
            }
            if (p->power == q->power)
            {
                  r->power = p->power;
                  r->coeff = p->coeff + q->coeff;
                  p = p->next;
                  q = q->next;
            }
            else if (p->power > q->power)
            {
                  r->power = p->power;
                  r->coeff = p->coeff;
                  p = p->next;
            }
            else
            {
                  r->power = q->power;
                  r->coeff = q->coeff;
                  q = q->next;
            }
      }
      printf("\npolynomial1\n");
      p = pol1;
      while (p != NULL)
      {
            printf("%dx^%d->", p->coeff, p->power);
            p = p->next;
      }
      printf("\npolynomial2\n");
      q = pol2;
      while (q != NULL)
      {
            printf("%dx^%d->", q->coeff, q->power);
            q = q->next;
      }
      printf("\nresult polynomial\n");
      r = res;
      while (r != NULL)
      {
            printf("%dx^%d->", r->coeff, r->power);
            r = r->next;
      }
}