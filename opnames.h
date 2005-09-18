/* -*- buffer-read-only: t -*-
 *
 *    opnames.h
 *
 *    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *  This file is built by opcode.pl from its data.  Any changes made here
 *  will be lost!
 */

typedef enum opcode {
	OP_NULL,	/* 0 */
	OP_STUB,	/* 1 */
	OP_SCALAR,	/* 2 */
	OP_PUSHMARK,	/* 3 */
	OP_WANTARRAY,	/* 4 */
	OP_CONST,	/* 5 */
	OP_GVSV,	/* 6 */
	OP_GV,		/* 7 */
	OP_GELEM,	/* 8 */
	OP_PADSV,	/* 9 */
	OP_PADAV,	/* 10 */
	OP_PADHV,	/* 11 */
	OP_PADANY,	/* 12 */
	OP_PUSHRE,	/* 13 */
	OP_RV2GV,	/* 14 */
	OP_RV2SV,	/* 15 */
	OP_AV2ARYLEN,	/* 16 */
	OP_RV2CV,	/* 17 */
	OP_ANONCODE,	/* 18 */
	OP_PROTOTYPE,	/* 19 */
	OP_REFGEN,	/* 20 */
	OP_SREFGEN,	/* 21 */
	OP_REF,		/* 22 */
	OP_BLESS,	/* 23 */
	OP_BACKTICK,	/* 24 */
	OP_GLOB,	/* 25 */
	OP_READLINE,	/* 26 */
	OP_RCATLINE,	/* 27 */
	OP_REGCMAYBE,	/* 28 */
	OP_REGCRESET,	/* 29 */
	OP_REGCOMP,	/* 30 */
	OP_MATCH,	/* 31 */
	OP_QR,		/* 32 */
	OP_SUBST,	/* 33 */
	OP_SUBSTCONT,	/* 34 */
	OP_TRANS,	/* 35 */
	OP_SASSIGN,	/* 36 */
	OP_AASSIGN,	/* 37 */
	OP_CHOP,	/* 38 */
	OP_SCHOP,	/* 39 */
	OP_CHOMP,	/* 40 */
	OP_SCHOMP,	/* 41 */
	OP_DEFINED,	/* 42 */
	OP_UNDEF,	/* 43 */
	OP_STUDY,	/* 44 */
	OP_POS,		/* 45 */
	OP_PREINC,	/* 46 */
	OP_I_PREINC,	/* 47 */
	OP_PREDEC,	/* 48 */
	OP_I_PREDEC,	/* 49 */
	OP_POSTINC,	/* 50 */
	OP_I_POSTINC,	/* 51 */
	OP_POSTDEC,	/* 52 */
	OP_I_POSTDEC,	/* 53 */
	OP_POW,		/* 54 */
	OP_MULTIPLY,	/* 55 */
	OP_I_MULTIPLY,	/* 56 */
	OP_DIVIDE,	/* 57 */
	OP_I_DIVIDE,	/* 58 */
	OP_MODULO,	/* 59 */
	OP_I_MODULO,	/* 60 */
	OP_REPEAT,	/* 61 */
	OP_ADD,		/* 62 */
	OP_I_ADD,	/* 63 */
	OP_SUBTRACT,	/* 64 */
	OP_I_SUBTRACT,	/* 65 */
	OP_CONCAT,	/* 66 */
	OP_STRINGIFY,	/* 67 */
	OP_LEFT_SHIFT,	/* 68 */
	OP_RIGHT_SHIFT,	/* 69 */
	OP_LT,		/* 70 */
	OP_I_LT,	/* 71 */
	OP_GT,		/* 72 */
	OP_I_GT,	/* 73 */
	OP_LE,		/* 74 */
	OP_I_LE,	/* 75 */
	OP_GE,		/* 76 */
	OP_I_GE,	/* 77 */
	OP_EQ,		/* 78 */
	OP_I_EQ,	/* 79 */
	OP_NE,		/* 80 */
	OP_I_NE,	/* 81 */
	OP_NCMP,	/* 82 */
	OP_I_NCMP,	/* 83 */
	OP_SLT,		/* 84 */
	OP_SGT,		/* 85 */
	OP_SLE,		/* 86 */
	OP_SGE,		/* 87 */
	OP_SEQ,		/* 88 */
	OP_SNE,		/* 89 */
	OP_SCMP,	/* 90 */
	OP_BIT_AND,	/* 91 */
	OP_BIT_XOR,	/* 92 */
	OP_BIT_OR,	/* 93 */
	OP_NEGATE,	/* 94 */
	OP_I_NEGATE,	/* 95 */
	OP_NOT,		/* 96 */
	OP_COMPLEMENT,	/* 97 */
	OP_ATAN2,	/* 98 */
	OP_SIN,		/* 99 */
	OP_COS,		/* 100 */
	OP_RAND,	/* 101 */
	OP_SRAND,	/* 102 */
	OP_EXP,		/* 103 */
	OP_LOG,		/* 104 */
	OP_SQRT,	/* 105 */
	OP_INT,		/* 106 */
	OP_HEX,		/* 107 */
	OP_OCT,		/* 108 */
	OP_ABS,		/* 109 */
	OP_LENGTH,	/* 110 */
	OP_SUBSTR,	/* 111 */
	OP_VEC,		/* 112 */
	OP_INDEX,	/* 113 */
	OP_RINDEX,	/* 114 */
	OP_SPRINTF,	/* 115 */
	OP_FORMLINE,	/* 116 */
	OP_ORD,		/* 117 */
	OP_CHR,		/* 118 */
	OP_CRYPT,	/* 119 */
	OP_UCFIRST,	/* 120 */
	OP_LCFIRST,	/* 121 */
	OP_UC,		/* 122 */
	OP_LC,		/* 123 */
	OP_QUOTEMETA,	/* 124 */
	OP_RV2AV,	/* 125 */
	OP_AELEMFAST,	/* 126 */
	OP_AELEM,	/* 127 */
	OP_ASLICE,	/* 128 */
	OP_EACH,	/* 129 */
	OP_VALUES,	/* 130 */
	OP_KEYS,	/* 131 */
	OP_DELETE,	/* 132 */
	OP_EXISTS,	/* 133 */
	OP_RV2HV,	/* 134 */
	OP_HELEM,	/* 135 */
	OP_HSLICE,	/* 136 */
	OP_UNPACK,	/* 137 */
	OP_PACK,	/* 138 */
	OP_SPLIT,	/* 139 */
	OP_JOIN,	/* 140 */
	OP_LIST,	/* 141 */
	OP_LSLICE,	/* 142 */
	OP_ANONLIST,	/* 143 */
	OP_ANONHASH,	/* 144 */
	OP_SPLICE,	/* 145 */
	OP_PUSH,	/* 146 */
	OP_POP,		/* 147 */
	OP_SHIFT,	/* 148 */
	OP_UNSHIFT,	/* 149 */
	OP_SORT,	/* 150 */
	OP_REVERSE,	/* 151 */
	OP_GREPSTART,	/* 152 */
	OP_GREPWHILE,	/* 153 */
	OP_MAPSTART,	/* 154 */
	OP_MAPWHILE,	/* 155 */
	OP_RANGE,	/* 156 */
	OP_FLIP,	/* 157 */
	OP_FLOP,	/* 158 */
	OP_AND,		/* 159 */
	OP_OR,		/* 160 */
	OP_XOR,		/* 161 */
	OP_COND_EXPR,	/* 162 */
	OP_ANDASSIGN,	/* 163 */
	OP_ORASSIGN,	/* 164 */
	OP_METHOD,	/* 165 */
	OP_ENTERSUB,	/* 166 */
	OP_LEAVESUB,	/* 167 */
	OP_LEAVESUBLV,	/* 168 */
	OP_CALLER,	/* 169 */
	OP_WARN,	/* 170 */
	OP_DIE,		/* 171 */
	OP_RESET,	/* 172 */
	OP_LINESEQ,	/* 173 */
	OP_NEXTSTATE,	/* 174 */
	OP_DBSTATE,	/* 175 */
	OP_UNSTACK,	/* 176 */
	OP_ENTER,	/* 177 */
	OP_LEAVE,	/* 178 */
	OP_SCOPE,	/* 179 */
	OP_ENTERITER,	/* 180 */
	OP_ITER,	/* 181 */
	OP_ENTERLOOP,	/* 182 */
	OP_LEAVELOOP,	/* 183 */
	OP_RETURN,	/* 184 */
	OP_LAST,	/* 185 */
	OP_NEXT,	/* 186 */
	OP_REDO,	/* 187 */
	OP_DUMP,	/* 188 */
	OP_GOTO,	/* 189 */
	OP_EXIT,	/* 190 */
	OP_OPEN,	/* 191 */
	OP_CLOSE,	/* 192 */
	OP_PIPE_OP,	/* 193 */
	OP_FILENO,	/* 194 */
	OP_UMASK,	/* 195 */
	OP_BINMODE,	/* 196 */
	OP_TIE,		/* 197 */
	OP_UNTIE,	/* 198 */
	OP_TIED,	/* 199 */
	OP_DBMOPEN,	/* 200 */
	OP_DBMCLOSE,	/* 201 */
	OP_SSELECT,	/* 202 */
	OP_SELECT,	/* 203 */
	OP_GETC,	/* 204 */
	OP_READ,	/* 205 */
	OP_ENTERWRITE,	/* 206 */
	OP_LEAVEWRITE,	/* 207 */
	OP_PRTF,	/* 208 */
	OP_PRINT,	/* 209 */
	OP_SYSOPEN,	/* 210 */
	OP_SYSSEEK,	/* 211 */
	OP_SYSREAD,	/* 212 */
	OP_SYSWRITE,	/* 213 */
	OP_SEND,	/* 214 */
	OP_RECV,	/* 215 */
	OP_EOF,		/* 216 */
	OP_TELL,	/* 217 */
	OP_SEEK,	/* 218 */
	OP_TRUNCATE,	/* 219 */
	OP_FCNTL,	/* 220 */
	OP_IOCTL,	/* 221 */
	OP_FLOCK,	/* 222 */
	OP_SOCKET,	/* 223 */
	OP_SOCKPAIR,	/* 224 */
	OP_BIND,	/* 225 */
	OP_CONNECT,	/* 226 */
	OP_LISTEN,	/* 227 */
	OP_ACCEPT,	/* 228 */
	OP_SHUTDOWN,	/* 229 */
	OP_GSOCKOPT,	/* 230 */
	OP_SSOCKOPT,	/* 231 */
	OP_GETSOCKNAME,	/* 232 */
	OP_GETPEERNAME,	/* 233 */
	OP_LSTAT,	/* 234 */
	OP_STAT,	/* 235 */
	OP_FTRREAD,	/* 236 */
	OP_FTRWRITE,	/* 237 */
	OP_FTREXEC,	/* 238 */
	OP_FTEREAD,	/* 239 */
	OP_FTEWRITE,	/* 240 */
	OP_FTEEXEC,	/* 241 */
	OP_FTIS,	/* 242 */
	OP_FTEOWNED,	/* 243 */
	OP_FTROWNED,	/* 244 */
	OP_FTZERO,	/* 245 */
	OP_FTSIZE,	/* 246 */
	OP_FTMTIME,	/* 247 */
	OP_FTATIME,	/* 248 */
	OP_FTCTIME,	/* 249 */
	OP_FTSOCK,	/* 250 */
	OP_FTCHR,	/* 251 */
	OP_FTBLK,	/* 252 */
	OP_FTFILE,	/* 253 */
	OP_FTDIR,	/* 254 */
	OP_FTPIPE,	/* 255 */
	OP_FTLINK,	/* 256 */
	OP_FTSUID,	/* 257 */
	OP_FTSGID,	/* 258 */
	OP_FTSVTX,	/* 259 */
	OP_FTTTY,	/* 260 */
	OP_FTTEXT,	/* 261 */
	OP_FTBINARY,	/* 262 */
	OP_CHDIR,	/* 263 */
	OP_CHOWN,	/* 264 */
	OP_CHROOT,	/* 265 */
	OP_UNLINK,	/* 266 */
	OP_CHMOD,	/* 267 */
	OP_UTIME,	/* 268 */
	OP_RENAME,	/* 269 */
	OP_LINK,	/* 270 */
	OP_SYMLINK,	/* 271 */
	OP_READLINK,	/* 272 */
	OP_MKDIR,	/* 273 */
	OP_RMDIR,	/* 274 */
	OP_OPEN_DIR,	/* 275 */
	OP_READDIR,	/* 276 */
	OP_TELLDIR,	/* 277 */
	OP_SEEKDIR,	/* 278 */
	OP_REWINDDIR,	/* 279 */
	OP_CLOSEDIR,	/* 280 */
	OP_FORK,	/* 281 */
	OP_WAIT,	/* 282 */
	OP_WAITPID,	/* 283 */
	OP_SYSTEM,	/* 284 */
	OP_EXEC,	/* 285 */
	OP_KILL,	/* 286 */
	OP_GETPPID,	/* 287 */
	OP_GETPGRP,	/* 288 */
	OP_SETPGRP,	/* 289 */
	OP_GETPRIORITY,	/* 290 */
	OP_SETPRIORITY,	/* 291 */
	OP_TIME,	/* 292 */
	OP_TMS,		/* 293 */
	OP_LOCALTIME,	/* 294 */
	OP_GMTIME,	/* 295 */
	OP_ALARM,	/* 296 */
	OP_SLEEP,	/* 297 */
	OP_SHMGET,	/* 298 */
	OP_SHMCTL,	/* 299 */
	OP_SHMREAD,	/* 300 */
	OP_SHMWRITE,	/* 301 */
	OP_MSGGET,	/* 302 */
	OP_MSGCTL,	/* 303 */
	OP_MSGSND,	/* 304 */
	OP_MSGRCV,	/* 305 */
	OP_SEMGET,	/* 306 */
	OP_SEMCTL,	/* 307 */
	OP_SEMOP,	/* 308 */
	OP_REQUIRE,	/* 309 */
	OP_DOFILE,	/* 310 */
	OP_ENTEREVAL,	/* 311 */
	OP_LEAVEEVAL,	/* 312 */
	OP_ENTERTRY,	/* 313 */
	OP_LEAVETRY,	/* 314 */
	OP_GHBYNAME,	/* 315 */
	OP_GHBYADDR,	/* 316 */
	OP_GHOSTENT,	/* 317 */
	OP_GNBYNAME,	/* 318 */
	OP_GNBYADDR,	/* 319 */
	OP_GNETENT,	/* 320 */
	OP_GPBYNAME,	/* 321 */
	OP_GPBYNUMBER,	/* 322 */
	OP_GPROTOENT,	/* 323 */
	OP_GSBYNAME,	/* 324 */
	OP_GSBYPORT,	/* 325 */
	OP_GSERVENT,	/* 326 */
	OP_SHOSTENT,	/* 327 */
	OP_SNETENT,	/* 328 */
	OP_SPROTOENT,	/* 329 */
	OP_SSERVENT,	/* 330 */
	OP_EHOSTENT,	/* 331 */
	OP_ENETENT,	/* 332 */
	OP_EPROTOENT,	/* 333 */
	OP_ESERVENT,	/* 334 */
	OP_GPWNAM,	/* 335 */
	OP_GPWUID,	/* 336 */
	OP_GPWENT,	/* 337 */
	OP_SPWENT,	/* 338 */
	OP_EPWENT,	/* 339 */
	OP_GGRNAM,	/* 340 */
	OP_GGRGID,	/* 341 */
	OP_GGRENT,	/* 342 */
	OP_SGRENT,	/* 343 */
	OP_EGRENT,	/* 344 */
	OP_GETLOGIN,	/* 345 */
	OP_SYSCALL,	/* 346 */
	OP_LOCK,	/* 347 */
	OP_THREADSV,	/* 348 */
	OP_SETSTATE,	/* 349 */
	OP_METHOD_NAMED,/* 350 */
	OP_CUSTOM,	/* 351 */
	OP_max		
} opcode;

#define MAXO 352
#define OP_phoney_INPUT_ONLY -1
#define OP_phoney_OUTPUT_ONLY -2


#define OP_IS_SOCKET(op)	\
	((op) == OP_ACCEPT || \
	 (op) == OP_BIND || \
	 (op) == OP_CONNECT || \
	 (op) == OP_GETPEERNAME || \
	 (op) == OP_GETSOCKNAME || \
	 (op) == OP_GSOCKOPT || \
	 (op) == OP_LISTEN || \
	 (op) == OP_RECV || \
	 (op) == OP_SEND || \
	 (op) == OP_SHUTDOWN || \
	 (op) == OP_SOCKET || \
	 (op) == OP_SOCKPAIR || \
	 (op) == OP_SSOCKOPT)


#define OP_IS_FILETEST(op)	\
	((op) == OP_FTATIME || \
	 (op) == OP_FTBINARY || \
	 (op) == OP_FTBLK || \
	 (op) == OP_FTCHR || \
	 (op) == OP_FTCTIME || \
	 (op) == OP_FTDIR || \
	 (op) == OP_FTEEXEC || \
	 (op) == OP_FTEOWNED || \
	 (op) == OP_FTEREAD || \
	 (op) == OP_FTEWRITE || \
	 (op) == OP_FTFILE || \
	 (op) == OP_FTIS || \
	 (op) == OP_FTLINK || \
	 (op) == OP_FTMTIME || \
	 (op) == OP_FTPIPE || \
	 (op) == OP_FTREXEC || \
	 (op) == OP_FTROWNED || \
	 (op) == OP_FTRREAD || \
	 (op) == OP_FTRWRITE || \
	 (op) == OP_FTSGID || \
	 (op) == OP_FTSIZE || \
	 (op) == OP_FTSOCK || \
	 (op) == OP_FTSUID || \
	 (op) == OP_FTSVTX || \
	 (op) == OP_FTTEXT || \
	 (op) == OP_FTTTY || \
	 (op) == OP_FTZERO)

/* ex: set ro: */
