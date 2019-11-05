/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SymbolCandidate : NSObject {

	unsigned short _symbol;
	double _probability;
	double _logProbability;

}

@property (assign,nonatomic) unsigned short symbol;                 //@synthesize symbol=_symbol - In the implementation block
@property (assign,nonatomic) double probability;                    //@synthesize probability=_probability - In the implementation block
@property (assign,nonatomic) double logProbability;                 //@synthesize logProbability=_logProbability - In the implementation block
@property (nonatomic,readonly) NSString * description; 
-(NSString *)description;
-(unsigned short)symbol;
-(double)probability;
-(void)setSymbol:(unsigned short)arg1 ;
-(void)setProbability:(double)arg1 ;
-(double)logProbability;
-(void)setLogProbability:(double)arg1 ;
@end
