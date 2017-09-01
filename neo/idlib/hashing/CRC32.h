#ifndef __CRC32_H__
#define __CRC32_H__

/*
===============================================================================

	Calculates a checksum for a block of data
	using the CRC-32.

===============================================================================
*/

void CRC32_InitChecksum( unsigned long &crcvalue );
void CRC32_UpdateChecksum( unsigned long &crcvalue, const void *data, size_t length );
void CRC32_FinishChecksum( unsigned long &crcvalue );
unsigned long CRC32_BlockChecksum( const void *data, size_t length );

#endif /* !__CRC32_H__ */
