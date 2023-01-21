// Base16 Ayu Mirage dark - simple terminal color setup
// Khue Nguyen &lt;Z5483Y@gmail.com&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#171b24", /*  0: Base 00 - Black   */
	"#f28779", /*  1: Base 08 - Red     */
	"#d5ff80", /*  2: Base 0B - Green   */
	"#ffd173", /*  3: Base 0A - Yellow  */
	"#5ccfe6", /*  4: Base 0D - Blue    */
	"#d4bfff", /*  5: Base 0E - Magenta */
	"#95e6cb", /*  6: Base 0C - Cyan    */
	"#cccac2", /*  7: Base 05 - White   */

	/* Bright colors */
	"#707a8c", /*  8: Base 03 - Bright Black */
	"#f28779", /*  9: Base 08 - Red          */
	"#d5ff80", /* 10: Base 0B - Green        */
	"#ffd173", /* 11: Base 0A - Yellow       */
	"#5ccfe6", /* 12: Base 0D - Blue         */
	"#d4bfff", /* 13: Base 0E - Magenta      */
	"#95e6cb", /* 14: Base 0C - Cyan         */
	"#f3f4f5", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ffad66", /* 16: Base 09 */
	"#f29e74", /* 17: Base 0F */
	"#1f2430", /* 18: Base 01 */
	"#242936", /* 19: Base 02 */
	"#8a9199", /* 20: Base 04 */
	"#d9d7ce", /* 21: Base 06 */

	[255] = 0,

	[256] = "#cccac2", /* default fg: Base 05 */
	[257] = "#171b24", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
