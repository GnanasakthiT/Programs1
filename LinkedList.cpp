#include<iostream>

using namespace std;

struct linkedList{
	int data;
	struct linkedList *link;
}s1, s2, s3;

void traverse(struct linkedList* first){
	while(first != NULL){
		cout << first->data << endl;
		first = first->link;
	}
}
int main(){
	s1.data = 10;
	s1.link = &s2;
	s2.data = 20;
	s2.link = &s3;
	s3.data = 30;
	s3.link = NULL;
	traverse(&s1);
	return 0;
}