#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return (*state);
}

static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;
	for (i = 0; i < DATASET_SIZE; i++)
		dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
			v = -v;
		dataset[i] = v;
	}
}

static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
		sum = (sum * 131ul) + (unsigned long)dataset[i];

	return (sum);
}

int main(void)
{
	unsigned long checksum;
	clock_t t_s, t_e, b_s, b_e, p_s, p_e, r_s, r_e;

	t_s = clock();

	b_s = clock();
	build_dataset();
	b_e = clock();

	p_s = clock();
	process_dataset();
	p_e = clock();

	r_s = clock();
	checksum = reduce_checksum();
	r_e = clock();

	t_e = clock();

	if (checksum == 0ul)
		printf("impossible\n");

	printf("TOTAL seconds: %.6f\n", (double)(t_e - t_s) / CLOCKS_PER_SEC);
	printf("BUILD_DATA seconds: %.6f\n", (double)(b_e - b_s) / CLOCKS_PER_SEC);
	printf("PROCESS seconds: %.6f\n", (double)(p_e - p_s) / CLOCKS_PER_SEC);
	printf("REDUCE seconds: %.6f\n", (double)(r_e - r_s) / CLOCKS_PER_SEC);

	return (0);
}