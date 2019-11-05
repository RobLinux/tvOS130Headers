/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSLimitation.h>

@interface RBSCPUMaximumUsageLimitation : RBSLimitation {

	unsigned char _role;
	unsigned long long _percentage;
	double _duration;
	unsigned long long _violationPolicy;

}

@property (nonatomic,readonly) unsigned char role;                              //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) unsigned long long percentage;                   //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long violationPolicy;              //@synthesize violationPolicy=_violationPolicy - In the implementation block
+(id)limitationForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4 ;
-(void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(BOOL)isValidForContext:(id)arg1 withError:(id*)arg2 ;
-(BOOL)conflictsWithAttribute:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned char)role;
-(double)duration;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)percentage;
-(unsigned long long)violationPolicy;
-(id)_initWithRole:(unsigned char)arg1 percentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4 ;
@end

