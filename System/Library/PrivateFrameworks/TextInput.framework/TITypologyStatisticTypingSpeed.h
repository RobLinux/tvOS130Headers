/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatisticComposite.h>

@class TITypologyStatisticTimeElapsed, TITypologyStatisticBasicCounts;

@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite {

	TITypologyStatisticTimeElapsed* _timeElapsed;
	TITypologyStatisticBasicCounts* _basicCounts;

}

@property (nonatomic,readonly) TITypologyStatisticTimeElapsed * timeElapsed;              //@synthesize timeElapsed=_timeElapsed - In the implementation block
@property (nonatomic,readonly) TITypologyStatisticBasicCounts * basicCounts;              //@synthesize basicCounts=_basicCounts - In the implementation block
@property (nonatomic,readonly) float typingSpeed; 
+(id)statistic;
+(id)statisticCompositeWithStatistics:(id)arg1 ;
-(id)aggregateReport;
-(id)initWithTimeElapsed:(id)arg1 basicCounts:(id)arg2 ;
-(float)typingSpeed;
-(TITypologyStatisticTimeElapsed *)timeElapsed;
-(TITypologyStatisticBasicCounts *)basicCounts;
@end

