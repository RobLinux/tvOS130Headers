/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface NRBabelPendingOutgoingTLVs : NSObject {

	BOOL _representsIHU;
	BOOL _representsUpdate;
	NSMutableArray* _tlvs;
	double _minTime;
	double _maxTime;

}

@property (nonatomic,retain) NSMutableArray * tlvs;              //@synthesize tlvs=_tlvs - In the implementation block
@property (assign,nonatomic) double minTime;                     //@synthesize minTime=_minTime - In the implementation block
@property (assign,nonatomic) double maxTime;                     //@synthesize maxTime=_maxTime - In the implementation block
@property (assign,nonatomic) BOOL representsIHU;                 //@synthesize representsIHU=_representsIHU - In the implementation block
@property (assign,nonatomic) BOOL representsUpdate;              //@synthesize representsUpdate=_representsUpdate - In the implementation block
-(double)maxTime;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(id)initWithInterval:(unsigned short)arg1 ;
-(NSMutableArray *)tlvs;
-(void)setTlvs:(NSMutableArray *)arg1 ;
-(BOOL)representsIHU;
-(void)setRepresentsIHU:(BOOL)arg1 ;
-(BOOL)representsUpdate;
-(void)setRepresentsUpdate:(BOOL)arg1 ;
@end
