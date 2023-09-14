#include "io.h"

void BallInsert()
{
	int BasketCount;
	cout << "�ٱ����� ������ �Է����ּ��� : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "�� �ִ� Ƚ���� �Է����ּ��� : ";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];

	for (int i = 0; i < BasketCount; i++) {
		pBasket[i] = 0;
	}

	int StartBasketNumber, EndBasketNumber, BallNumber;

	for (int i = 0; i < InsertCount; i++) {

	cout << "���� �ٱ��� ��ȣ : ";
	cin >> StartBasketNumber;
	cout << "���� �ٱ��� ��ȣ : ";
	cin >> EndBasketNumber;
	cout << "�־��� �� ��ȣ : ";
	cin >> BallNumber;


		for (int j = StartBasketNumber-1; j <= EndBasketNumber-1; j++) {
		pBasket[j] = BallNumber;
		}
	}
	for (int i = 0; i < BasketCount; i++) {
		cout << pBasket[i] << ":";
	}

	cout << endl;
}

void BallSwap()
{
	int BasketCount;
	cout << "�ٱ����� ������ �Է����ּ��� : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "�� �¹ٲٴ� Ƚ���� �Է����ּ��� : ";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];

	for (int i = 0; i < BasketCount; i++) {
		pBasket[i] = i;
	}

	int LeftBasketNumber, RightBasketNumber, temp;

	for (int i = 0; i < InsertCount; i++) {

		cout << "���� �ٱ��� ��ȣ : ";
		cin >> LeftBasketNumber;
		cout << "������ �ٱ��� ��ȣ : ";
		cin >> RightBasketNumber;

		// swap
		temp = pBasket[LeftBasketNumber - 1];
		pBasket[LeftBasketNumber - 1] = pBasket[RightBasketNumber - 1];
		pBasket[RightBasketNumber - 1] = temp;

	}
	for (int i = 0; i < BasketCount; i++) {
		cout << pBasket[i] << ":";
	}

	cout << endl;
}