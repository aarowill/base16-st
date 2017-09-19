// Base16 Cupcake dark - simple terminal color setup
// Chris Kempson (http://chriskempson.com)
static const char *colorname[] = {
	/* Normal colors */
	"#fbf1f2", /*  0: Base 00 - Black   */
	"#d57e85", /*  1: Base 08 - Red     */
	"#a3b367", /*  2: Base 0B - Green   */
	"#dcb16c", /*  3: Base 0A - Yellow  */
	"#7297b9", /*  4: Base 0D - Blue    */
	"#bb99b4", /*  5: Base 0E - Magenta */
	"#69a9a7", /*  6: Base 0C - Cyan    */
	"#8b8198", /*  7: Base 05 - White   */

	/* Bright colors */
	"#bfb9c6", /*  8: Base 03 - Bright Black */
	"#d57e85", /*  9: Base 08 - Red          */
	"#a3b367", /* 10: Base 0B - Green        */
	"#dcb16c", /* 11: Base 0A - Yellow       */
	"#7297b9", /* 12: Base 0D - Blue         */
	"#bb99b4", /* 13: Base 0E - Magenta      */
	"#69a9a7", /* 14: Base 0C - Cyan         */
	"#585062", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ebb790", /* 16: Base 09 */
	"#baa58c", /* 17: Base 0F */
	"#f2f1f4", /* 18: Base 01 */
	"#d8d5dd", /* 19: Base 02 */
	"#a59daf", /* 20: Base 04 */
	"#72677e", /* 21: Base 06 */

	[255] = 0,

	[256] = "#8b8198", /* default fg: Base 05 */
	[257] = "#fbf1f2", /* default bg: Base 00 */
};

// Foreground, background and cursor
static unsigned int defaultfg = 256;
static unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
