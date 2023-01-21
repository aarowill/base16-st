// Base16 Primer Light dark - simple terminal color setup
// Jimmy Lin
static const char *colorname[] = {
	/* Normal colors */
	"#fafbfc", /*  0: Base 00 - Black   */
	"#d73a49", /*  1: Base 08 - Red     */
	"#28a745", /*  2: Base 0B - Green   */
	"#ffd33d", /*  3: Base 0A - Yellow  */
	"#0366d6", /*  4: Base 0D - Blue    */
	"#ea4aaa", /*  5: Base 0E - Magenta */
	"#79b8ff", /*  6: Base 0C - Cyan    */
	"#2f363d", /*  7: Base 05 - White   */

	/* Bright colors */
	"#959da5", /*  8: Base 03 - Bright Black */
	"#d73a49", /*  9: Base 08 - Red          */
	"#28a745", /* 10: Base 0B - Green        */
	"#ffd33d", /* 11: Base 0A - Yellow       */
	"#0366d6", /* 12: Base 0D - Blue         */
	"#ea4aaa", /* 13: Base 0E - Magenta      */
	"#79b8ff", /* 14: Base 0C - Cyan         */
	"#1b1f23", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f66a0a", /* 16: Base 09 */
	"#a04100", /* 17: Base 0F */
	"#e1e4e8", /* 18: Base 01 */
	"#d1d5da", /* 19: Base 02 */
	"#444d56", /* 20: Base 04 */
	"#24292e", /* 21: Base 06 */

	[255] = 0,

	[256] = "#2f363d", /* default fg: Base 05 */
	[257] = "#fafbfc", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
