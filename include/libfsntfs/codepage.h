/*
 * Codepage definitions for libfsntfs
 *
 * Copyright (C) 2010-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFSNTFS_CODEPAGE_H )
#define _LIBFSNTFS_CODEPAGE_H

#include <libfsntfs/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBFSNTFS_CODEPAGES
{
	LIBFSNTFS_CODEPAGE_ASCII			= 20127,

	LIBFSNTFS_CODEPAGE_ISO_8859_1			= 28591,
	LIBFSNTFS_CODEPAGE_ISO_8859_2			= 28592,
	LIBFSNTFS_CODEPAGE_ISO_8859_3			= 28593,
	LIBFSNTFS_CODEPAGE_ISO_8859_4			= 28594,
	LIBFSNTFS_CODEPAGE_ISO_8859_5			= 28595,
	LIBFSNTFS_CODEPAGE_ISO_8859_6			= 28596,
	LIBFSNTFS_CODEPAGE_ISO_8859_7			= 28597,
	LIBFSNTFS_CODEPAGE_ISO_8859_8			= 28598,
	LIBFSNTFS_CODEPAGE_ISO_8859_9			= 28599,
	LIBFSNTFS_CODEPAGE_ISO_8859_10			= 28600,
	LIBFSNTFS_CODEPAGE_ISO_8859_11			= 28601,
	LIBFSNTFS_CODEPAGE_ISO_8859_13			= 28603,
	LIBFSNTFS_CODEPAGE_ISO_8859_14			= 28604,
	LIBFSNTFS_CODEPAGE_ISO_8859_15			= 28605,
	LIBFSNTFS_CODEPAGE_ISO_8859_16			= 28606,

	LIBFSNTFS_CODEPAGE_KOI8_R			= 20866,
	LIBFSNTFS_CODEPAGE_KOI8_U			= 21866,

	LIBFSNTFS_CODEPAGE_WINDOWS_874			= 874,
	LIBFSNTFS_CODEPAGE_WINDOWS_932			= 932,
	LIBFSNTFS_CODEPAGE_WINDOWS_936			= 936,
	LIBFSNTFS_CODEPAGE_WINDOWS_949			= 949,
	LIBFSNTFS_CODEPAGE_WINDOWS_950			= 950,
	LIBFSNTFS_CODEPAGE_WINDOWS_1250			= 1250,
	LIBFSNTFS_CODEPAGE_WINDOWS_1251			= 1251,
	LIBFSNTFS_CODEPAGE_WINDOWS_1252			= 1252,
	LIBFSNTFS_CODEPAGE_WINDOWS_1253			= 1253,
	LIBFSNTFS_CODEPAGE_WINDOWS_1254			= 1254,
	LIBFSNTFS_CODEPAGE_WINDOWS_1255			= 1255,
	LIBFSNTFS_CODEPAGE_WINDOWS_1256			= 1256,
	LIBFSNTFS_CODEPAGE_WINDOWS_1257			= 1257,
	LIBFSNTFS_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBFSNTFS_CODEPAGE_US_ASCII			LIBFSNTFS_CODEPAGE_ASCII

#define LIBFSNTFS_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBFSNTFS_CODEPAGE_ISO_8859_1
#define LIBFSNTFS_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBFSNTFS_CODEPAGE_ISO_8859_2
#define LIBFSNTFS_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBFSNTFS_CODEPAGE_ISO_8859_3
#define LIBFSNTFS_CODEPAGE_ISO_NORTH_EUROPEAN		LIBFSNTFS_CODEPAGE_ISO_8859_4
#define LIBFSNTFS_CODEPAGE_ISO_CYRILLIC			LIBFSNTFS_CODEPAGE_ISO_8859_5
#define LIBFSNTFS_CODEPAGE_ISO_ARABIC			LIBFSNTFS_CODEPAGE_ISO_8859_6
#define LIBFSNTFS_CODEPAGE_ISO_GREEK			LIBFSNTFS_CODEPAGE_ISO_8859_7
#define LIBFSNTFS_CODEPAGE_ISO_HEBREW			LIBFSNTFS_CODEPAGE_ISO_8859_8
#define LIBFSNTFS_CODEPAGE_ISO_TURKISH			LIBFSNTFS_CODEPAGE_ISO_8859_9
#define LIBFSNTFS_CODEPAGE_ISO_NORDIC			LIBFSNTFS_CODEPAGE_ISO_8859_10
#define LIBFSNTFS_CODEPAGE_ISO_THAI			LIBFSNTFS_CODEPAGE_ISO_8859_11
#define LIBFSNTFS_CODEPAGE_ISO_BALTIC			LIBFSNTFS_CODEPAGE_ISO_8859_13
#define LIBFSNTFS_CODEPAGE_ISO_CELTIC			LIBFSNTFS_CODEPAGE_ISO_8859_14

#define LIBFSNTFS_CODEPAGE_ISO_LATIN_1			LIBFSNTFS_CODEPAGE_ISO_8859_1
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_2			LIBFSNTFS_CODEPAGE_ISO_8859_2
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_3			LIBFSNTFS_CODEPAGE_ISO_8859_3
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_4			LIBFSNTFS_CODEPAGE_ISO_8859_4
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_5			LIBFSNTFS_CODEPAGE_ISO_8859_9
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_6			LIBFSNTFS_CODEPAGE_ISO_8859_10
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_7			LIBFSNTFS_CODEPAGE_ISO_8859_13
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_8			LIBFSNTFS_CODEPAGE_ISO_8859_14
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_9			LIBFSNTFS_CODEPAGE_ISO_8859_15
#define LIBFSNTFS_CODEPAGE_ISO_LATIN_10			LIBFSNTFS_CODEPAGE_ISO_8859_16

#define LIBFSNTFS_CODEPAGE_KOI8_RUSSIAN			LIBFSNTFS_CODEPAGE_KOI8_R
#define LIBFSNTFS_CODEPAGE_KOI8_UKRAINIAN		LIBFSNTFS_CODEPAGE_KOI8_U

#define LIBFSNTFS_CODEPAGE_WINDOWS_THAI			LIBFSNTFS_CODEPAGE_WINDOWS_874
#define LIBFSNTFS_CODEPAGE_WINDOWS_JAPANESE		LIBFSNTFS_CODEPAGE_WINDOWS_932
#define LIBFSNTFS_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBFSNTFS_CODEPAGE_WINDOWS_936
#define LIBFSNTFS_CODEPAGE_WINDOWS_KOREAN		LIBFSNTFS_CODEPAGE_WINDOWS_949
#define LIBFSNTFS_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBFSNTFS_CODEPAGE_WINDOWS_950
#define LIBFSNTFS_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBFSNTFS_CODEPAGE_WINDOWS_1250
#define LIBFSNTFS_CODEPAGE_WINDOWS_CYRILLIC		LIBFSNTFS_CODEPAGE_WINDOWS_1251
#define LIBFSNTFS_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBFSNTFS_CODEPAGE_WINDOWS_1252
#define LIBFSNTFS_CODEPAGE_WINDOWS_GREEK		LIBFSNTFS_CODEPAGE_WINDOWS_1253
#define LIBFSNTFS_CODEPAGE_WINDOWS_TURKISH		LIBFSNTFS_CODEPAGE_WINDOWS_1254
#define LIBFSNTFS_CODEPAGE_WINDOWS_HEBREW		LIBFSNTFS_CODEPAGE_WINDOWS_1255
#define LIBFSNTFS_CODEPAGE_WINDOWS_ARABIC		LIBFSNTFS_CODEPAGE_WINDOWS_1256
#define LIBFSNTFS_CODEPAGE_WINDOWS_BALTIC		LIBFSNTFS_CODEPAGE_WINDOWS_1257
#define LIBFSNTFS_CODEPAGE_WINDOWS_VIETNAMESE		LIBFSNTFS_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

