// Base16 Atelier Cave dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#19171c", /*  0: Base 00 - Black   */
	"#be4678", /*  1: Base 08 - Red     */
	"#2a9292", /*  2: Base 0B - Green   */
	"#a06e3b", /*  3: Base 0A - Yellow  */
	"#576ddb", /*  4: Base 0D - Blue    */
	"#955ae7", /*  5: Base 0E - Magenta */
	"#398bc6", /*  6: Base 0C - Cyan    */
	"#8b8792", /*  7: Base 05 - White   */

	/* Bright colors */
	"#655f6d", /*  8: Base 03 - Bright Black */
	"#aa573c", /* 16: Base 09 */
	"#26232a", /* 18: Base 01 */
	"#585260", /* 19: Base 02 */
	"#7e7887", /* 20: Base 04 */
	"#e2dfe7", /* 21: Base 06 */
	"#bf40bf", /* 17: Base 0F */
	"#efecf4", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#8b8792", /* default fg: Base 05 */
	[257] = "#19171c", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
