/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWorkoutTrigger : WFTrigger {

	BOOL _onStart;
	BOOL _onEnd;
	unsigned long long _selection;
	NSArray* _selectedWorkoutTypes;

}

@property (assign,nonatomic) unsigned long long selection;              //@synthesize selection=_selection - In the implementation block
@property (nonatomic,copy) NSArray * selectedWorkoutTypes;              //@synthesize selectedWorkoutTypes=_selectedWorkoutTypes - In the implementation block
@property (assign,nonatomic) BOOL onStart;                              //@synthesize onStart=_onStart - In the implementation block
@property (assign,nonatomic) BOOL onEnd;                                //@synthesize onEnd=_onEnd - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
+(BOOL)isSupportedOnThisDevice;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(unsigned long long)contextStoreRegistrationIsForWatch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)selection;
-(void)setSelection:(unsigned long long)arg1 ;
-(BOOL)onStart;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedWorkoutTypes;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedWorkoutTypes:(NSArray *)arg1 ;
-(void)setOnStart:(BOOL)arg1 ;
-(BOOL)onEnd;
-(void)setOnEnd:(BOOL)arg1 ;
@end

