//unsigned char xdata *pb = 0xc001;
//unsigned char xdata *pa = 0xc000;
//unsigned char i = 0;
//unsigned char xdata *p = 0xc000;
//unsigned char led_data[] = { 0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0 };
//unsigned char wei_xuan[] = { 0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe };
//void delay(unsigned int i)
//{
//	while (i--);
//}
//void main()
//{
//	p[3] = 0x80;
//	while (1)
//	{
//		for (i=0;i<8;i++)
//		{
//			pb = 0xff;
//			pb = wei_xuan[i];
//			pa = led_data[i];
//			delay(3000);
//		}
//	}
//}