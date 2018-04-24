// Base16 Flat dark - simple terminal color setup
// Chris Kempson (http://chriskempson.com)
static const char *colorname[] = {
	/* Normal colors */
	"#2c3e50", /*  0: Base 00 - Black   */
	"#e74c3c", /*  1: Base 08 - Red     */
	"#2ecc71", /*  2: Base 0B - Green   */
	"#f1c40f", /*  3: Base 0A - Yellow  */
	"#3498db", /*  4: Base 0D - Blue    */
	"#9b59b6", /*  5: Base 0E - Magenta */
	"#1abc9c", /*  6: Base 0C - Cyan    */
	"#e0e0e0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#95a5a6", /*  8: Base 03 - Bright Black */
	"#e67e22", /* 16: Base 09 */
	"#34495e", /* 18: Base 01 */
	"#7f8c8d", /* 19: Base 02 */
	"#bdc3c7", /* 20: Base 04 */
	"#f5f5f5", /* 21: Base 06 */
	"#be643c", /* 17: Base 0F */
	"#ecf0f1", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#e0e0e0", /* default fg: Base 05 */
	[257] = "#2c3e50", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
