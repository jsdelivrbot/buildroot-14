#ifndef __XLNX_MW_AXISTREAM_DMA__
#define __XLNX_MW_AXISTREAM_DMA__

#if defined(MW_DATAWIDTH_SELECT) && MW_DATAWIDTH_SELECT == 256
	#define XLNX_MM2S_DATAWIDTH <0x100>
	#define XLNX_S2MM_DATAWIDTH <0x100>
#elif defined(MW_DATAWIDTH_SELECT) && MW_DATAWIDTH_SELECT == 128
	#define XLNX_MM2S_DATAWIDTH <0x80>
	#define XLNX_S2MM_DATAWIDTH <0x80>
#elif defined(MW_DATAWIDTH_SELECT) && MW_DATAWIDTH_SELECT == 64
	#define XLNX_MM2S_DATAWIDTH <0x40>
	#define XLNX_S2MM_DATAWIDTH <0x40>
#else
	#define XLNX_MM2S_DATAWIDTH <0x20>
	#define XLNX_S2MM_DATAWIDTH <0x20>	
#endif

#endif /* __XLNX_MW_AXISTREAM_DMA__ */
