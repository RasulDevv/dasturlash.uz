#include <stdio.h>

void eng_katta_element(int[], int);
void eng_kichik_qiymat(int[], int);
void orta_arifmetik(int[], int);
void arrayda_n_bormi(int[], int, int);
void oxiriga_son_qoshish(int[], int, int);
void sonni_boshiga_qoshish(int[], int, int);
void a_index_ga_b_ni_qoshish(int[], int, int, int);
void nchi_indexni_olib_tashlash(int[], int, int);
void teskari_array(int[], int);
void arrayda_n_nechi_marta_bor(int[], int, int);
void oxshash_elementlar(int[], int);
void ikkita_arrayda_oxshash_elementlar(int[], int[], int, int);
void oxshash_elementlarni_olib_tashlash(int[], int);
void array_elementlarini_osish_tartibida(int[], int);

int main() {
	int arr[] = { 12, 21, 36, 71, 24, 85, 12, 30, 25 }, arr2[] = { 12, 21, 36, 71, 24, 85, 1, 30, 25 };
	int arr3[] = { 6, 25, 91, 23, 72, 9, 18, 6 }, arr4[] = {1,2,3,4,5};
	int array1[] = { 1,2,3 }, array2[] = {1,4,1,2,3,5,7,3,1,9,11}, array3[] = { 2,4,1,5 };
	//eng_kichik_qiymat(arr2, sizeof(arr2)/sizeof(arr2[0]));
	//ikkita_arrayda_oxshash_elementlar(array1, array2, sizeof(array1) / sizeof(array1[0]), sizeof(array2) / sizeof(array2[0]));
	printf("2 4 1 5\n");
	array_elementlarini_osish_tartibida(array3, sizeof(array3) / sizeof(array3[0]));
	return 0;
}




// https://dasturlash.uz/exercise-solving/array/article/36e6b7d0-84a7-11eb-aebe-e83935115a22
void eng_katta_element(int arr[], int len_of_arr) {
	int b = arr[0];
	for (int i = 0; i <= len_of_arr - 1; ++i) {
		for (int j = 0; j <= len_of_arr - 1; ++j) {
			if (b < arr[j]) b = arr[j];
		}
	}
	printf("big num: %d", b);
}



// https://dasturlash.uz/exercise-solving/array/article/57470c2c-84a8-11eb-9e7a-e83935115a22
void eng_kichik_qiymat(int arr[], int len_of_arr) {
	int a = arr[0];
	for (int i = 0; i <= len_of_arr - 1; ++i) {
		for (int j = 0; j <= len_of_arr - 1; ++j) {
			if (a > arr[j]) a = arr[j];
		}
	}
	printf("%d", a);
}



//https://dasturlash.uz/exercise-solving/array/article/34f171f2-84b3-11eb-a777-e83935115a22
void orta_arifmetik(int arr[], int len_of_arr) {
	int sum=0;
	for (int i = 0; i <= len_of_arr - 1; ++i) {
		sum = sum + arr[i];
	}
	printf("%d", sum / len_of_arr);
}



// https://dasturlash.uz/exercise-solving/array/article/0293c692-84b8-11eb-bd03-e83935115a22
void arrayda_n_bormi(int arr[], int len_of_arr, int n) {
	int a = 0;
	for (int i = 0; i <= len_of_arr - 1; ++i) {
		if (n == arr[i]) a = 1;
	}
	if (a == 1) printf("True");
	else if (a == 0) printf("False");
}



//https://dasturlash.uz/exercise-solving/array/article/bdc9b490-84c1-11eb-b9b5-e83935115a22
void oxiriga_son_qoshish(int arr[], int len_of_arr, int n) {
	int qwe[len_of_arr + 1];
	for (int i = 0; i <= len_of_arr; ++i) {
		qwe[i] = arr[i];
		if (i == len_of_arr) qwe[i] = n;
	}
	for (int i = 0; i <= len_of_arr; ++i) {
		printf("%d ", qwe[i]);
	}
}



//https://dasturlash.uz/exercise-solving/array/article/65fc5bd8-84c5-11eb-a920-e83935115a22
void sonni_boshiga_qoshish(int arr[], int len_of_arr, int n) {
	int qwe[len_of_arr+1];
	for (int i = 0; i <= len_of_arr; ++i) {
		if (i == 0) qwe[i] = n;
		else qwe[i] = arr[i-1];
	}
	for (int i = 0; i <= len_of_arr; ++i) {
		printf("%d ", qwe[i]);
	}
}



//https://dasturlash.uz/exercise-solving/array/article/e68f21ec-84c8-11eb-8407-e83935115a22
void a_index_ga_b_ni_qoshish(int arr[], int len_of_arr, int a, int b) {
	int qwe[len_of_arr + 1];
	for (int i = 0; i <= a; ++i) {
		if (i == a) { 
			qwe[i] = b;
			for (int j = a + 1; j <= len_of_arr; ++j) {
				qwe[j] = arr[j - 1];
			}
		}
		else qwe[i] = arr[i];
	}
	for (int i = 0; i <= len_of_arr; ++i) {
		printf("%d ", qwe[i]);
	}
}



//https://dasturlash.uz/exercise-solving/array/article/60c44d7c-84d1-11eb-8748-e83935115a22
void nchi_indexni_olib_tashlash(int arr[], int len_of_arr, int n) {
	int qwe[len_of_arr-1];
	for (int i = 0; i <= n; ++i) {
		if (i == n) {
			for (int j = n; j <= len_of_arr - 1; ++j) {
				if (j == len_of_arr - 1) break;
				else qwe[j] = arr[j + 1];
			}
		}
		else qwe[i] = arr[i];
	}
	for (int i = 0; i <= len_of_arr - 2; ++i) {
		printf("%d ", qwe[i]);
	}
}



//https://dasturlash.uz/exercise-solving/array/article/e475dfea-84d2-11eb-8eb8-e83935115a22
void teskari_array(int arr[], int len_of_arr) {
	int qwe[len_of_arr];
	for (int i = len_of_arr - 1; i >= 0; --i) {
		qwe[len_of_arr - 1 - i] = arr[i];
	}
	for (int i = 0; i <= len_of_arr - 1; ++i) {
		printf("%d ", qwe[i]);
	}
}



//https://dasturlash.uz/exercise-solving/array/article/feb86c82-8532-11eb-9059-e83935115a22
void arrayda_n_nechi_marta_bor(int arr[], int len_of_arr, int n) {
	int a = 0;
	for (int i = 0; i <= len_of_arr - 1; ++i) {
		if (arr[i] == n) ++a;
	}
	printf("\n%d", a);
}



//https://dasturlash.uz/exercise-solving/array/article/e6b5cfca-854c-11eb-9fe6-e83935115a22
void oxshash_elementlar(int arr[], int len_of_arr) {
	int a;
	for (int i = 0; i <= len_of_arr - 1; ++i) {
		for (int j = 0; j <= len_of_arr - 1; ++j) {
			if (arr[i] == arr[j] && i != j) {
				if(a != j) printf("arr[%d] = arr[%d]\n", i, j);
				a = i;
			}
		}
	}
}



//https://dasturlash.uz/exercise-solving/array/article/7c2056a0-854f-11eb-8926-e83935115a22
void ikkita_arrayda_oxshash_elementlar(int arr1[], int arr2[], int len1, int len2) {
	if (len1 >= len2) {
		for (int i = 0; i <= len1 - 1; ++i) {
			for (int j = 0; j <= len2 - 1; ++j) {
				if (arr1[i] == arr2[j]) printf("arr1[%d] = arr2[%d]", i, j);
			}
		}
	}
	else if (len1 < len2) {
		for (int i = 0; i <= len2 - 1; ++i) {
			for (int j = 0; j <= len1 - 1; ++j) {
				if (arr2[i] == arr1[j]) printf("arr2[%d] = arr1[%d]\n", i, j);
			}
		}
	}
}