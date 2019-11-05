/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression {

	SCRCMathExpression* _divisor;

}

@property (nonatomic,retain) SCRCMathExpression * divisor;              //@synthesize divisor=_divisor - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(void)setDivisor:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)divisor;
@end

