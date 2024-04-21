/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#24283b",     /* after initialization */
	[INPUT] =  "#7aa2f7",   /* during input */
	[FAILED] = "#ff7a93",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
