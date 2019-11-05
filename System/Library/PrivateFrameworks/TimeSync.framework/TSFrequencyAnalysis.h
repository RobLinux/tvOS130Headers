/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSFrequencyAnalysis : NSObject {

	double _averagePeriod;
	double _averageFrequency;
	double _averageTimeError;
	double _lowestFrequency;
	double _highestFrequency;

}

@property (assign,nonatomic) double averagePeriod;                 //@synthesize averagePeriod=_averagePeriod - In the implementation block
@property (assign,nonatomic) double averageFrequency;              //@synthesize averageFrequency=_averageFrequency - In the implementation block
@property (assign,nonatomic) double averageTimeError;              //@synthesize averageTimeError=_averageTimeError - In the implementation block
@property (assign,nonatomic) double lowestFrequency;               //@synthesize lowestFrequency=_lowestFrequency - In the implementation block
@property (assign,nonatomic) double highestFrequency;              //@synthesize highestFrequency=_highestFrequency - In the implementation block
-(id)initWithTimeErrorValues:(id)arg1 ;
-(double)averagePeriod;
-(void)setAveragePeriod:(double)arg1 ;
-(double)averageFrequency;
-(void)setAverageFrequency:(double)arg1 ;
-(double)averageTimeError;
-(void)setAverageTimeError:(double)arg1 ;
-(double)lowestFrequency;
-(void)setLowestFrequency:(double)arg1 ;
-(double)highestFrequency;
-(void)setHighestFrequency:(double)arg1 ;
@end

