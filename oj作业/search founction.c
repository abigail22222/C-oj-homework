

int search(int key,int number[],int length)
{
	int i;
	int ret=-1;
	for(i=0;i<length;i++){
		if(key==number[i]){
			ret=i; 
			break;/////////////if found dont insist
		}
	}
	return ret;
}
	

	
	
