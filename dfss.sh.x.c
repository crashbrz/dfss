#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f /opt/hackstore/dfss/dfss.sh 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[8]))
	"\260\215\110\330\233\043\302\010\051\110\314\053\034\260\256\220"
	"\145\016\157\111\154\012\027\110\340\140\374\115\233\375\246\202"
	"\025\040\362\041\154\125\310\000\061\214\135\324\144\141\227\317"
	"\171\026"
#define      pswd_z	256
#define      pswd	((&data[80]))
	"\326\363\314\351\124\237\102\213\343\232\315\364\045\256\107\314"
	"\232\136\210\241\017\025\352\347\260\015\251\271\033\037\016\132"
	"\154\003\020\275\335\051\040\014\057\032\002\173\317\237\120\300"
	"\017\214\347\212\256\131\124\006\251\350\261\115\130\277\247\305"
	"\302\267\203\237\341\243\253\021\276\256\214\215\115\334\116\135"
	"\150\066\350\027\217\075\035\071\045\316\207\176\215\057\103\120"
	"\346\306\357\310\152\233\331\050\111\146\266\227\103\005\365\254"
	"\073\335\303\313\033\341\005\101\260\215\277\076\274\003\216\243"
	"\312\176\153\065\032\105\136\144\253\025\373\357\032\361\233\126"
	"\316\137\042\351\100\050\052\361\265\352\057\161\356\275\025\270"
	"\073\200\356\126\306\114\272\162\141\266\141\174\247\375\323\165"
	"\134\366\137\235\036\212\216\324\164\275\105\142\172\133\033\266"
	"\334\011\014\242\125\307\024\267\175\166\064\044\163\007\232\317"
	"\376\371\154\034\204\373\360\370\270\066\133\063\221\166\352\155"
	"\200\367\020\326\276\044\215\073\233\302\137\016\312\372\336\310"
	"\363\113\344\167\106\325\160\376\013\314\062\235\103\034\013\303"
	"\023\033\231\322\100\047\015\333\352\155\352\264\147\310\174\133"
	"\023\141\323\131\066\104\130\102\020\212\340\123\247\353\051\361"
	"\022\365\333\147\225\036\362\171\271\300\155\336\156\265\253\011"
	"\023\063\253\042\111\225\012\371\243\263"
#define      rlax_z	1
#define      rlax	((&data[364]))
	"\067"
#define      text_z	1016
#define      text	((&data[541]))
	"\321\214\115\146\252\100\340\143\000\115\102\157\003\355\171\026"
	"\041\044\071\152\271\104\143\134\367\026\033\313\362\314\261\303"
	"\130\377\052\002\077\012\145\100\130\247\260\133\225\051\162\266"
	"\115\254\041\007\360\204\143\350\233\176\264\215\112\146\121\243"
	"\145\173\245\245\206\013\346\337\263\227\073\111\300\256\377\016"
	"\133\040\026\113\245\171\064\100\370\350\315\103\116\037\346\264"
	"\232\214\132\041\230\100\001\113\330\075\224\231\353\224\250\106"
	"\265\276\222\133\067\307\233\060\257\151\163\376\210\132\263\043"
	"\346\016\105\176\117\107\312\047\204\137\300\157\363\150\266\251"
	"\046\110\004\136\017\240\217\277\011\003\276\222\135\162\266\104"
	"\200\374\303\317\103\216\366\307\355\266\067\341\037\355\212\106"
	"\010\376\065\063\176\121\060\163\204\241\001\074\133\051\267\305"
	"\005\317\110\161\353\033\251\113\002\315\106\034\144\143\073\253"
	"\266\311\024\044\027\056\331\141\231\003\261\211\075\301\123\240"
	"\066\106\077\353\162\045\241\257\152\001\041\037\364\037\307\101"
	"\034\312\023\262\070\130\000\035\350\227\363\320\225\341\331\207"
	"\041\172\120\055\333\175\124\303\067\030\150\033\100\336\144\025"
	"\036\043\300\332\330\006\056\257\351\051\274\036\325\303\125\312"
	"\367\230\146\163\055\003\043\055\323\253\061\354\313\207\174\227"
	"\272\012\007\120\022\031\267\312\253\332\104\072\310\116\210\043"
	"\172\331\337\274\135\123\252\227\034\313\135\307\201\244\157\022"
	"\263\214\213\335\355\346\033\134\037\154\265\072\074\352\201\224"
	"\253\277\041\150\101\243\254\074\342\103\055\017\055\061\213\212"
	"\233\231\074\132\141\143\313\152\010\017\030\053\154\355\051\363"
	"\357\076\340\367\347\010\322\033\017\260\037\107\364\117\017\275"
	"\202\275\147\273\253\313\255\116\071\034\075\125\011\000\360\024"
	"\164\060\204\044\316\005\033\202\012\065\303\114\031\154\027\165"
	"\100\203\155\230\261\033\053\372\131\340\331\135\265\367\361\112"
	"\023\112\307\217\325\370\311\125\045\231\335\352\132\155\174\132"
	"\154\103\344\353\025\206\350\020\172\242\201\331\064\150\177\340"
	"\325\173\156\166\254\333\002\357\305\220\037\377\100\061\367\137"
	"\304\251\164\211\316\374\323\304\226\305\200\205\027\371\044\340"
	"\350\217\147\362\367\066\307\232\324\007\051\120\204\320\031\110"
	"\337\123\371\205\125\201\005\223\014\033\167\325\110\061\076\101"
	"\367\060\332\114\236\046\032\253\162\057\157\045\316\130\221\177"
	"\242\024\076\067\227\042\317\111\176\350\205\120\154\266\273\132"
	"\226\212\142\143\065\221\127\171\363\265\301\135\231\043\244\127"
	"\341\005\375\354\203\376\216\146\325\363\263\101\171\374\216\244"
	"\064\245\246\355\377\257\033\102\145\024\167\062\275\364\052\377"
	"\226\053\306\105\117\355\331\334\326\340\147\064\170\306\234\222"
	"\036\105\147\234\207\343\040\032\232\166\240\271\267\047\274\371"
	"\215\261\112\336\306\002\047\242\041\014\045\016\360\113\375\007"
	"\151\317\371\345\201\220\322\144\017\143\265\275\231\057\120\216"
	"\124\326\327\146\370\276\255\132\110\331\205\003\261\330\003\121"
	"\075\340\310\242\371\200\240\265\172\247\232\367\033\231\211\323"
	"\137\124\223\057\246\012\110\246\014\361\202\140\073\061\115\072"
	"\000\241\142\174\155\360\235\055\311\075\223\055\367\135\134\245"
	"\143\064\373\155\355\040\204\055\150\044\061\265\035\356\265\274"
	"\273\336\014\164\256\036\207\014\374\354\251\033\377\154\161\215"
	"\131\047\374\356\164\306\217\257\063\347\060\225\020\140\166\330"
	"\177\245\242\337\112\000\135\063\064\041\373\174\176\365\003\161"
	"\126\320\004\042\021\047\104\224\232\127\373\320\212\033\051\156"
	"\350\041\166\362\023\100\255\172\074\020\315\156\271\340\132\004"
	"\252\006\370\120\102\346\371\011\226\373\312\351\253\112\227\301"
	"\364\034\001\101\356\356\045\270\230\210\324\170\000\372\325\212"
	"\362\342\355\362\105\044\047\155\365\171\066\044\150\013\213\026"
	"\133\036\167\267\126\056\116\142\171\147\203\206\105\057\260\167"
	"\257\147\350\266\242\144\224\370\207\343\166\077\115\134\054\023"
	"\256\374\277\342\301\137\127\047\102\373\266\207\372\323\077\336"
	"\122\075\224\054\363\261\366\341\021\174\245\014\016\063\314\375"
	"\041\130\100\270\261\121\030\032\236\075\352\225\201\234\014\331"
	"\002\114\156\034\241\335\101\070\206\137\023\062\244\151\222\254"
	"\064\362\023\036\330\366\114\344\233\302\102\322\141\176\232\320"
	"\272\240\116\273\147\142\377\234\262\023\103\124\156\170\354\335"
	"\271\075\023\371\310\056\063\266\336\277\227\247\256\166\114\174"
	"\356\115\124\244\017\057\302\046\026\026\045\130\226\022\211\322"
	"\120\007\145\332\330\112\321\123\136\044\037\153\052\242\041\244"
	"\003\170\346\046\375\125\300\061\016\360\073\271\357\352\340\052"
	"\032\222\351\103\300\113\254\017\152\270\223\305\241\235\057\270"
	"\165\315\252\215\353\103\151\346\323\253\162\341\073\372\051\021"
	"\304\143\211\220\051\345\276\363\213\152\316\256\055\205\007\365"
	"\210\126\322\254\324\314\375\231\102\201\222\023\347\177\040\076"
	"\077\366\247\004\315\056\343\330\320\004\341\074\100\252\027\335"
	"\163\171\307\337\320\172\102\243\364\026\004\372\350\377\015\070"
	"\321\133\143\050\035\125\254\026\066\216\245\105\056\064\005\070"
	"\067\303\313\225\065\201\331\265\175\235\205\301\053\173\211\030"
	"\062\300\371\122\256\203\230\344\022\075\051\101\161\057\171\250"
	"\362\105\076\050\307\027\336\105\264\143\006\340\336\217\370\021"
	"\117\361\143\376\165\373\342\207\071\014\311\252\073\102\123\056"
	"\210\221\126\117\251\064\224\136\227\233\076\166\052\066\207\172"
	"\050\353\170\236\347\133\046\040\147\357\312\242\061\036\320\272"
	"\260\047\011\131\133\236\270\363\071\366\152\144\055\362\337\125"
	"\335\130\364\304\263\032\345\033\011\260\276\073\316\217\365\176"
	"\266\377\330\022\236\220\006\330\207\160\074\264\143\034\012\100"
	"\164\376\005\047\030\352\102\041\232\000\134\151\217\122\350\106"
	"\121\300\130\357\121\136\307\330\317\004\214\062\040\227\163\225"
	"\225\171\274\255\143\377\317\376\000\054\150\220\176\120\327\320"
	"\021\057\300\142\216\207\073\136\214\310\220\255\137\004\102\365"
	"\175\376\242\341\376\162\340\377\236\110\220\035\230"
#define      lsto_z	1
#define      lsto	((&data[1786]))
	"\057"
#define      chk1_z	22
#define      chk1	((&data[1791]))
	"\046\065\110\204\105\162\276\314\220\216\246\262\365\323\340\221"
	"\243\221\270\201\047\010\070\130\225\216"
#define      opts_z	1
#define      opts	((&data[1813]))
	"\325"
#define      tst1_z	22
#define      tst1	((&data[1816]))
	"\261\145\130\356\005\254\222\031\046\346\167\224\104\027\001\004"
	"\076\301\003\315\124\073\212\332"
#define      msg2_z	19
#define      msg2	((&data[1841]))
	"\170\256\173\004\153\334\024\243\351\245\026\224\332\163\275\236"
	"\066\207\256\035\073\121"
#define      xecc_z	15
#define      xecc	((&data[1862]))
	"\240\076\340\120\127\150\022\275\343\077\332\172\102\003\251\104"
	"\071"
#define      shll_z	10
#define      shll	((&data[1877]))
	"\340\106\370\165\132\040\350\111\041\241\045"
#define      tst2_z	19
#define      tst2	((&data[1889]))
	"\360\374\263\014\037\106\024\023\123\350\204\152\267\144\275\116"
	"\047\061\261\152\143\010\071\350"
#define      chk2_z	19
#define      chk2	((&data[1913]))
	"\071\301\275\207\270\176\237\211\274\154\371\364\331\303\006\364"
	"\165\351\174\005\272\027\352\040"
#define      date_z	1
#define      date	((&data[1936]))
	"\264"
#define      inlo_z	3
#define      inlo	((&data[1937]))
	"\005\055\127"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}