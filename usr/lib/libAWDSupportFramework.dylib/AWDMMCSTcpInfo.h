/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:10:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDMMCSTcpInfo : PBCodable <NSCopying> {

	unsigned long long _tcpiCellRxbytes;
	unsigned long long _tcpiCellRxpackets;
	unsigned long long _tcpiCellTxbytes;
	unsigned long long _tcpiCellTxpackets;
	unsigned long long _tcpiRxbytes;
	unsigned long long _tcpiRxduplicatebytes;
	unsigned long long _tcpiRxoutoforderbytes;
	unsigned long long _tcpiRxpackets;
	unsigned long long _tcpiSndBw;
	unsigned long long _tcpiTxbytes;
	unsigned long long _tcpiTxpackets;
	unsigned long long _tcpiTxretransmitbytes;
	unsigned long long _tcpiTxunacked;
	unsigned long long _tcpiWifiRxbytes;
	unsigned long long _tcpiWifiRxpackets;
	unsigned long long _tcpiWifiTxbytes;
	unsigned long long _tcpiWifiTxpackets;
	unsigned _tcpiFlags;
	int _tcpiLastOutif;
	unsigned _tcpiOptions;
	unsigned _tcpiRcvMss;
	unsigned _tcpiRcvNxt;
	unsigned _tcpiRcvSpace;
	unsigned _tcpiRcvWscale;
	unsigned _tcpiRto;
	unsigned _tcpiRttbest;
	unsigned _tcpiRttcur;
	unsigned _tcpiRttvar;
	unsigned _tcpiSndCwnd;
	unsigned _tcpiSndMss;
	unsigned _tcpiSndNxt;
	unsigned _tcpiSndSbbytes;
	unsigned _tcpiSndSsthresh;
	unsigned _tcpiSndWnd;
	unsigned _tcpiSndWscale;
	unsigned _tcpiSrtt;
	unsigned _tcpiState;
	int _tcpiSynrexmits;
	int _tcpiUnused1;
	unsigned _tcpiUnused2;
	SCD_Struct_AW31 _has;

}

@property (assign,nonatomic) BOOL hasTcpiState; 
@property (assign,nonatomic) unsigned tcpiState;                                    //@synthesize tcpiState=_tcpiState - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiOptions; 
@property (assign,nonatomic) unsigned tcpiOptions;                                  //@synthesize tcpiOptions=_tcpiOptions - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSndWscale; 
@property (assign,nonatomic) unsigned tcpiSndWscale;                                //@synthesize tcpiSndWscale=_tcpiSndWscale - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRcvWscale; 
@property (assign,nonatomic) unsigned tcpiRcvWscale;                                //@synthesize tcpiRcvWscale=_tcpiRcvWscale - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiFlags; 
@property (assign,nonatomic) unsigned tcpiFlags;                                    //@synthesize tcpiFlags=_tcpiFlags - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRto; 
@property (assign,nonatomic) unsigned tcpiRto;                                      //@synthesize tcpiRto=_tcpiRto - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSndMss; 
@property (assign,nonatomic) unsigned tcpiSndMss;                                   //@synthesize tcpiSndMss=_tcpiSndMss - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRcvMss; 
@property (assign,nonatomic) unsigned tcpiRcvMss;                                   //@synthesize tcpiRcvMss=_tcpiRcvMss - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRttcur; 
@property (assign,nonatomic) unsigned tcpiRttcur;                                   //@synthesize tcpiRttcur=_tcpiRttcur - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSrtt; 
@property (assign,nonatomic) unsigned tcpiSrtt;                                     //@synthesize tcpiSrtt=_tcpiSrtt - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRttvar; 
@property (assign,nonatomic) unsigned tcpiRttvar;                                   //@synthesize tcpiRttvar=_tcpiRttvar - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRttbest; 
@property (assign,nonatomic) unsigned tcpiRttbest;                                  //@synthesize tcpiRttbest=_tcpiRttbest - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSndSsthresh; 
@property (assign,nonatomic) unsigned tcpiSndSsthresh;                              //@synthesize tcpiSndSsthresh=_tcpiSndSsthresh - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSndCwnd; 
@property (assign,nonatomic) unsigned tcpiSndCwnd;                                  //@synthesize tcpiSndCwnd=_tcpiSndCwnd - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRcvSpace; 
@property (assign,nonatomic) unsigned tcpiRcvSpace;                                 //@synthesize tcpiRcvSpace=_tcpiRcvSpace - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSndWnd; 
@property (assign,nonatomic) unsigned tcpiSndWnd;                                   //@synthesize tcpiSndWnd=_tcpiSndWnd - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSndNxt; 
@property (assign,nonatomic) unsigned tcpiSndNxt;                                   //@synthesize tcpiSndNxt=_tcpiSndNxt - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRcvNxt; 
@property (assign,nonatomic) unsigned tcpiRcvNxt;                                   //@synthesize tcpiRcvNxt=_tcpiRcvNxt - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiLastOutif; 
@property (assign,nonatomic) int tcpiLastOutif;                                     //@synthesize tcpiLastOutif=_tcpiLastOutif - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSndSbbytes; 
@property (assign,nonatomic) unsigned tcpiSndSbbytes;                               //@synthesize tcpiSndSbbytes=_tcpiSndSbbytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiTxpackets; 
@property (assign,nonatomic) unsigned long long tcpiTxpackets;                      //@synthesize tcpiTxpackets=_tcpiTxpackets - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiTxbytes; 
@property (assign,nonatomic) unsigned long long tcpiTxbytes;                        //@synthesize tcpiTxbytes=_tcpiTxbytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiTxretransmitbytes; 
@property (assign,nonatomic) unsigned long long tcpiTxretransmitbytes;              //@synthesize tcpiTxretransmitbytes=_tcpiTxretransmitbytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiTxunacked; 
@property (assign,nonatomic) unsigned long long tcpiTxunacked;                      //@synthesize tcpiTxunacked=_tcpiTxunacked - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRxpackets; 
@property (assign,nonatomic) unsigned long long tcpiRxpackets;                      //@synthesize tcpiRxpackets=_tcpiRxpackets - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRxbytes; 
@property (assign,nonatomic) unsigned long long tcpiRxbytes;                        //@synthesize tcpiRxbytes=_tcpiRxbytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRxduplicatebytes; 
@property (assign,nonatomic) unsigned long long tcpiRxduplicatebytes;               //@synthesize tcpiRxduplicatebytes=_tcpiRxduplicatebytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiRxoutoforderbytes; 
@property (assign,nonatomic) unsigned long long tcpiRxoutoforderbytes;              //@synthesize tcpiRxoutoforderbytes=_tcpiRxoutoforderbytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSndBw; 
@property (assign,nonatomic) unsigned long long tcpiSndBw;                          //@synthesize tcpiSndBw=_tcpiSndBw - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiSynrexmits; 
@property (assign,nonatomic) int tcpiSynrexmits;                                    //@synthesize tcpiSynrexmits=_tcpiSynrexmits - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiUnused1; 
@property (assign,nonatomic) int tcpiUnused1;                                       //@synthesize tcpiUnused1=_tcpiUnused1 - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiUnused2; 
@property (assign,nonatomic) unsigned tcpiUnused2;                                  //@synthesize tcpiUnused2=_tcpiUnused2 - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiCellRxpackets; 
@property (assign,nonatomic) unsigned long long tcpiCellRxpackets;                  //@synthesize tcpiCellRxpackets=_tcpiCellRxpackets - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiCellRxbytes; 
@property (assign,nonatomic) unsigned long long tcpiCellRxbytes;                    //@synthesize tcpiCellRxbytes=_tcpiCellRxbytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiCellTxpackets; 
@property (assign,nonatomic) unsigned long long tcpiCellTxpackets;                  //@synthesize tcpiCellTxpackets=_tcpiCellTxpackets - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiCellTxbytes; 
@property (assign,nonatomic) unsigned long long tcpiCellTxbytes;                    //@synthesize tcpiCellTxbytes=_tcpiCellTxbytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiWifiRxpackets; 
@property (assign,nonatomic) unsigned long long tcpiWifiRxpackets;                  //@synthesize tcpiWifiRxpackets=_tcpiWifiRxpackets - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiWifiRxbytes; 
@property (assign,nonatomic) unsigned long long tcpiWifiRxbytes;                    //@synthesize tcpiWifiRxbytes=_tcpiWifiRxbytes - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiWifiTxpackets; 
@property (assign,nonatomic) unsigned long long tcpiWifiTxpackets;                  //@synthesize tcpiWifiTxpackets=_tcpiWifiTxpackets - In the implementation block
@property (assign,nonatomic) BOOL hasTcpiWifiTxbytes; 
@property (assign,nonatomic) unsigned long long tcpiWifiTxbytes;                    //@synthesize tcpiWifiTxbytes=_tcpiWifiTxbytes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTcpiState:(unsigned)arg1 ;
-(void)setHasTcpiState:(BOOL)arg1 ;
-(BOOL)hasTcpiState;
-(void)setTcpiOptions:(unsigned)arg1 ;
-(void)setHasTcpiOptions:(BOOL)arg1 ;
-(BOOL)hasTcpiOptions;
-(void)setTcpiSndWscale:(unsigned)arg1 ;
-(void)setHasTcpiSndWscale:(BOOL)arg1 ;
-(BOOL)hasTcpiSndWscale;
-(void)setTcpiRcvWscale:(unsigned)arg1 ;
-(void)setHasTcpiRcvWscale:(BOOL)arg1 ;
-(BOOL)hasTcpiRcvWscale;
-(void)setTcpiFlags:(unsigned)arg1 ;
-(void)setHasTcpiFlags:(BOOL)arg1 ;
-(BOOL)hasTcpiFlags;
-(void)setTcpiRto:(unsigned)arg1 ;
-(void)setHasTcpiRto:(BOOL)arg1 ;
-(BOOL)hasTcpiRto;
-(void)setTcpiSndMss:(unsigned)arg1 ;
-(void)setHasTcpiSndMss:(BOOL)arg1 ;
-(BOOL)hasTcpiSndMss;
-(void)setTcpiRcvMss:(unsigned)arg1 ;
-(void)setHasTcpiRcvMss:(BOOL)arg1 ;
-(BOOL)hasTcpiRcvMss;
-(void)setTcpiRttcur:(unsigned)arg1 ;
-(void)setHasTcpiRttcur:(BOOL)arg1 ;
-(BOOL)hasTcpiRttcur;
-(void)setTcpiSrtt:(unsigned)arg1 ;
-(void)setHasTcpiSrtt:(BOOL)arg1 ;
-(BOOL)hasTcpiSrtt;
-(void)setTcpiRttvar:(unsigned)arg1 ;
-(void)setHasTcpiRttvar:(BOOL)arg1 ;
-(BOOL)hasTcpiRttvar;
-(void)setTcpiRttbest:(unsigned)arg1 ;
-(void)setHasTcpiRttbest:(BOOL)arg1 ;
-(BOOL)hasTcpiRttbest;
-(void)setTcpiSndSsthresh:(unsigned)arg1 ;
-(void)setHasTcpiSndSsthresh:(BOOL)arg1 ;
-(BOOL)hasTcpiSndSsthresh;
-(void)setTcpiSndCwnd:(unsigned)arg1 ;
-(void)setHasTcpiSndCwnd:(BOOL)arg1 ;
-(BOOL)hasTcpiSndCwnd;
-(void)setTcpiRcvSpace:(unsigned)arg1 ;
-(void)setHasTcpiRcvSpace:(BOOL)arg1 ;
-(BOOL)hasTcpiRcvSpace;
-(void)setTcpiSndWnd:(unsigned)arg1 ;
-(void)setHasTcpiSndWnd:(BOOL)arg1 ;
-(BOOL)hasTcpiSndWnd;
-(void)setTcpiSndNxt:(unsigned)arg1 ;
-(void)setHasTcpiSndNxt:(BOOL)arg1 ;
-(BOOL)hasTcpiSndNxt;
-(void)setTcpiRcvNxt:(unsigned)arg1 ;
-(void)setHasTcpiRcvNxt:(BOOL)arg1 ;
-(BOOL)hasTcpiRcvNxt;
-(void)setTcpiLastOutif:(int)arg1 ;
-(void)setHasTcpiLastOutif:(BOOL)arg1 ;
-(BOOL)hasTcpiLastOutif;
-(void)setTcpiSndSbbytes:(unsigned)arg1 ;
-(void)setHasTcpiSndSbbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiSndSbbytes;
-(void)setTcpiTxpackets:(unsigned long long)arg1 ;
-(void)setHasTcpiTxpackets:(BOOL)arg1 ;
-(BOOL)hasTcpiTxpackets;
-(void)setTcpiTxbytes:(unsigned long long)arg1 ;
-(void)setHasTcpiTxbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiTxbytes;
-(void)setTcpiTxretransmitbytes:(unsigned long long)arg1 ;
-(void)setHasTcpiTxretransmitbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiTxretransmitbytes;
-(void)setTcpiTxunacked:(unsigned long long)arg1 ;
-(void)setHasTcpiTxunacked:(BOOL)arg1 ;
-(BOOL)hasTcpiTxunacked;
-(void)setTcpiRxpackets:(unsigned long long)arg1 ;
-(void)setHasTcpiRxpackets:(BOOL)arg1 ;
-(BOOL)hasTcpiRxpackets;
-(void)setTcpiRxbytes:(unsigned long long)arg1 ;
-(void)setHasTcpiRxbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiRxbytes;
-(void)setTcpiRxduplicatebytes:(unsigned long long)arg1 ;
-(void)setHasTcpiRxduplicatebytes:(BOOL)arg1 ;
-(BOOL)hasTcpiRxduplicatebytes;
-(void)setTcpiRxoutoforderbytes:(unsigned long long)arg1 ;
-(void)setHasTcpiRxoutoforderbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiRxoutoforderbytes;
-(void)setTcpiSndBw:(unsigned long long)arg1 ;
-(void)setHasTcpiSndBw:(BOOL)arg1 ;
-(BOOL)hasTcpiSndBw;
-(void)setTcpiSynrexmits:(int)arg1 ;
-(void)setHasTcpiSynrexmits:(BOOL)arg1 ;
-(BOOL)hasTcpiSynrexmits;
-(void)setTcpiUnused1:(int)arg1 ;
-(void)setHasTcpiUnused1:(BOOL)arg1 ;
-(BOOL)hasTcpiUnused1;
-(void)setTcpiUnused2:(unsigned)arg1 ;
-(void)setHasTcpiUnused2:(BOOL)arg1 ;
-(BOOL)hasTcpiUnused2;
-(void)setTcpiCellRxpackets:(unsigned long long)arg1 ;
-(void)setHasTcpiCellRxpackets:(BOOL)arg1 ;
-(BOOL)hasTcpiCellRxpackets;
-(void)setTcpiCellRxbytes:(unsigned long long)arg1 ;
-(void)setHasTcpiCellRxbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiCellRxbytes;
-(void)setTcpiCellTxpackets:(unsigned long long)arg1 ;
-(void)setHasTcpiCellTxpackets:(BOOL)arg1 ;
-(BOOL)hasTcpiCellTxpackets;
-(void)setTcpiCellTxbytes:(unsigned long long)arg1 ;
-(void)setHasTcpiCellTxbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiCellTxbytes;
-(void)setTcpiWifiRxpackets:(unsigned long long)arg1 ;
-(void)setHasTcpiWifiRxpackets:(BOOL)arg1 ;
-(BOOL)hasTcpiWifiRxpackets;
-(void)setTcpiWifiRxbytes:(unsigned long long)arg1 ;
-(void)setHasTcpiWifiRxbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiWifiRxbytes;
-(void)setTcpiWifiTxpackets:(unsigned long long)arg1 ;
-(void)setHasTcpiWifiTxpackets:(BOOL)arg1 ;
-(BOOL)hasTcpiWifiTxpackets;
-(void)setTcpiWifiTxbytes:(unsigned long long)arg1 ;
-(void)setHasTcpiWifiTxbytes:(BOOL)arg1 ;
-(BOOL)hasTcpiWifiTxbytes;
-(unsigned)tcpiState;
-(unsigned)tcpiOptions;
-(unsigned)tcpiSndWscale;
-(unsigned)tcpiRcvWscale;
-(unsigned)tcpiFlags;
-(unsigned)tcpiRto;
-(unsigned)tcpiSndMss;
-(unsigned)tcpiRcvMss;
-(unsigned)tcpiRttcur;
-(unsigned)tcpiSrtt;
-(unsigned)tcpiRttvar;
-(unsigned)tcpiRttbest;
-(unsigned)tcpiSndSsthresh;
-(unsigned)tcpiSndCwnd;
-(unsigned)tcpiRcvSpace;
-(unsigned)tcpiSndWnd;
-(unsigned)tcpiSndNxt;
-(unsigned)tcpiRcvNxt;
-(int)tcpiLastOutif;
-(unsigned)tcpiSndSbbytes;
-(unsigned long long)tcpiTxpackets;
-(unsigned long long)tcpiTxbytes;
-(unsigned long long)tcpiTxretransmitbytes;
-(unsigned long long)tcpiTxunacked;
-(unsigned long long)tcpiRxpackets;
-(unsigned long long)tcpiRxbytes;
-(unsigned long long)tcpiRxduplicatebytes;
-(unsigned long long)tcpiRxoutoforderbytes;
-(unsigned long long)tcpiSndBw;
-(int)tcpiSynrexmits;
-(int)tcpiUnused1;
-(unsigned)tcpiUnused2;
-(unsigned long long)tcpiCellRxpackets;
-(unsigned long long)tcpiCellRxbytes;
-(unsigned long long)tcpiCellTxpackets;
-(unsigned long long)tcpiCellTxbytes;
-(unsigned long long)tcpiWifiRxpackets;
-(unsigned long long)tcpiWifiRxbytes;
-(unsigned long long)tcpiWifiTxpackets;
-(unsigned long long)tcpiWifiTxbytes;
@end

