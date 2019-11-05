/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFDNDTrigger : WFTrigger {

	BOOL _onEnable;
	BOOL _onDisable;

}

@property (assign,nonatomic) BOOL onEnable;               //@synthesize onEnable=_onEnable - In the implementation block
@property (assign,nonatomic) BOOL onDisable;              //@synthesize onDisable=_onDisable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(BOOL)onEnable;
-(BOOL)onDisable;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setOnEnable:(BOOL)arg1 ;
-(void)setOnDisable:(BOOL)arg1 ;
@end

