int   QKPass(RecordType r[],int left,int right)
/*�Լ�¼����r �е�r[left]��r[right]���ֽ���һ�����򣬲��õ���׼��λ�ã�ʹ�������Ľ��������֮��ǰ���ļ�¼�Ĺؼ��־���С�ڣ����ڣ��ڻ�׼��¼*/
{ 
	RecordType x;
	int low,high;
	x= r[left];             /* ѡ���׼��¼*/ 
	low=left;  
	high=right;
	while ( low<high )
	{
		while (low< high && r[high].key>=x.key ) 
			/* high���ҵ�����С��x.key�ļ�¼ */
			high--;
		if ( low <high ) 
		{ 
			r[low]= r[high];
			low++;
		}  
		/* �ҵ�С��x.key�ļ�¼������н���*/
		while (low<high && r[low].key<x.key  )    /* low�������Ҵ���x.key�ļ�¼ */
			low++; 
		if (  low<high  )
		{ 
			r[high]= r[low];
			high--; 
		} /* �ҵ�����x.key�ļ�¼���򽻻�*/
	}
	r[low]=x;                     /*����׼��¼���浽low=high��λ��*/
	return low;                     /*���ػ�׼��¼��λ��*/
} /* QKPass */ 