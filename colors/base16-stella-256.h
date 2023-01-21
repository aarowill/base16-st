// Base16 Stella dark - simple terminal color setup
// Shrimpram
static const char *colorname[] = {
	/* Normal colors */
	"#2b213c", /*  0: Base 00 - Black   */
	"#c79987", /*  1: Base 08 - Red     */
	"#acc79b", /*  2: Base 0B - Green   */
	"#c7c691", /*  3: Base 0A - Yellow  */
	"#a5aad4", /*  4: Base 0D - Blue    */
	"#c594ff", /*  5: Base 0E - Magenta */
	"#9bc7bf", /*  6: Base 0C - Cyan    */
	"#998bad", /*  7: Base 05 - White   */

	/* Bright colors */
	"#655978", /*  8: Base 03 - Bright Black */
	"#c79987", /*  9: Base 08 - Red          */
	"#acc79b", /* 10: Base 0B - Green        */
	"#c7c691", /* 11: Base 0A - Yellow       */
	"#a5aad4", /* 12: Base 0D - Blue         */
	"#c594ff", /* 13: Base 0E - Magenta      */
	"#9bc7bf", /* 14: Base 0C - Cyan         */
	"#ebdcff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#8865c6", /* 16: Base 09 */
	"#c7ab87", /* 17: Base 0F */
	"#362b48", /* 18: Base 01 */
	"#4d4160", /* 19: Base 02 */
	"#7f7192", /* 20: Base 04 */
	"#b4a5c8", /* 21: Base 06 */

	[255] = 0,

	[256] = "#998bad", /* default fg: Base 05 */
	[257] = "#2b213c", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
