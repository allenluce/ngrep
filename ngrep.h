/*
 * $Id$
 *
 * Copyright (c) 2001  Jordan Ritter <jpr5@darkridge.com>
 *
 * Please refer to the COPYRIGHT file for more information.
 *
 */

#define VERSION "1.41"


#define ETHHDR_SIZE 14
#define TOKENRING_SIZE 22
#define PPPHDR_SIZE 4
#define SLIPHDR_SIZE 16
#define RAWHDR_SIZE 0
#define LOOPHDR_SIZE 4
#define FDDIHDR_SIZE 21
#define ISDNHDR_SIZE 16
#define IEEE80211HDR_SIZE 24

#ifndef IP_OFFMASK
#define IP_OFFMASK 0x1fff
#endif

#define WORD_REGEX "((^%s\\W)|(\\W%s$)|(\\W%s\\W))"
#define IP_ONLY "ip and ( %s)"

#ifndef TH_ECE
#define TH_ECE 0x40
#endif

#ifndef TH_CWR
#define TH_CWR 0x80
#endif

char *get_filter(char **);
void process(u_char *, struct pcap_pkthdr*, u_char *);
void dump(char *, int);
void clean_exit(int);
void usage(int);
void version(void);

int re_match_func(char *, int);
int bin_match_func(char *, int);
int blank_match_func(char *, int);

int strishex(char *);

void print_time_absolute(struct pcap_pkthdr *);
void print_time_diff_init(struct pcap_pkthdr *);
void print_time_diff(struct pcap_pkthdr *);

void dump_delay_proc_init(struct pcap_pkthdr *);
void dump_delay_proc(struct pcap_pkthdr *);

void update_windowsize(int);
void drop_privs(void);
