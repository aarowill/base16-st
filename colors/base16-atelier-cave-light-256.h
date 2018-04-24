// Base16 Atelier Cave Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#efecf4", /*  0: Base 00 - Black   */
	"#be4678", /*  1: Base 08 - Red     */
	"#2a9292", /*  2: Base 0B - Green   */
	"#a06e3b", /*  3: Base 0A - Yellow  */
	"#576ddb", /*  4: Base 0D - Blue    */
	"#955ae7", /*  5: Base 0E - Magenta */
	"#398bc6", /*  6: Base 0C - Cyan    */
	"#585260", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7e7887", /*  8: Base 03 - Bright Black */
	"#be4678", /*  9: Base 08 - Red          */
	"#2a9292", /* 10: Base 0B - Green        */
	"#a06e3b", /* 11: Base 0A - Yellow       */
	"#576ddb", /* 12: Base 0D - Blue         */
	"#955ae7", /* 13: Base 0E - Magenta      */
	"#398bc6", /* 14: Base 0C - Cyan         */
	"#19171c", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#aa573c", /* 16: Base 09 */
	"#bf40bf", /* 17: Base 0F */
	"#e2dfe7", /* 18: Base 01 */
	"#8b8792", /* 19: Base 02 */
	"#655f6d", /* 20: Base 04 */
	"#26232a", /* 21: Base 06 */

	[255] = 0,

	[256] = "#585260", /* default fg: Base 05 */
	[257] = "#efecf4", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
