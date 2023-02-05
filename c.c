#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
    int             value;
    int             index;
    int             head;
    int             tag;
    struct s_list   *next;
};

int markup_gt(t_list *markup_head, t_list *curr)
{
    return curr->value > markup_head->value;
}

int markup_index(t_list *markup_head, t_list *curr)
{
    return curr->index == markup_head->index + 1;
}

int find_best_markup_head(t_list *list, int (*markup)(t_list *, t_list *), t_list **markup_head)
{
    t_list *curr = list;
    int count, max_count = 0;
    while (curr)
    {
        t_list *tmp = curr;
        count = 1;
        while (tmp->next)
        {
            if (markup(curr, tmp->next))
            {
                count++;
                tmp = tmp->next;
            }
            else
                break;
        }
        if (count > max_count)
        {
            max_count = count;
            *markup_head = curr;
        }
        curr = curr->next;
    }
    return max_count;
}

void mark_elements(t_list *list, int (*markup)(t_list *, t_list *), t_list *markup_head)
{
    t_list *curr = list;
    while (curr)
    {
        if (!markup(markup_head, curr))
        {
            curr->head = 0;
            markup_head = curr;
        }
        curr->tag = curr->head;
        curr = curr->next;
    }
}

void display_result(t_list *list)
{
    t_list *curr = list;
    printf("Number\tIndex\tKeep in Stack A\n");
    while (curr)
    {
        printf("%d\t%d\t%s\n", curr->value, curr->index, curr->tag ? "true" : "false");
        curr = curr->next;
    }
}

int main()
{
    t_list *list = NULL;
    // Add elements to the linked list
    // ...

    t_list *markup_head = NULL;
    int max_count = find_best_markup_head(list, markup_gt, &markup_head);
    mark_elements(list, markup_gt, markup_head);
    int max_count_index = find_best_markup_head(list, markup_index, &markup_head);
    if (max_count_index > max_count)
    {
        max_count = max_count_index;
        mark_elements(list,markup_index, markup_head);
}
printf("Maximum count is: %d\n", max_count);
display_result(list);
return 0;
}