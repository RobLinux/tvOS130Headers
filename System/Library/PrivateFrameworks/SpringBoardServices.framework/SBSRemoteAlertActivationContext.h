/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/BSDescriptionProviding.h>
#import <SpringBoardServices/BSSettingDescriptionProvider.h>
#import <SpringBoardServices/BSXPCCoding.h>
#import <SpringBoardServices/NSSecureCoding.h>

@class NSString, NSSet, NSDictionary, SBSRemoteAlertPresentationTarget, NSUUID;

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding> {

	BOOL _activatingForSiri;
	BOOL _shouldInvalidateWhenDeactivated;
	BOOL _switcherEligible;
	NSString* _reason;
	NSSet* _actions;
	NSDictionary* _userInfo;
	SBSRemoteAlertPresentationTarget* _presentationTarget;
	NSUUID* _activityContinuationIdentifier;
	NSDictionary* _legacyAlertOptions;

}

@property (nonatomic,copy) NSUUID * activityContinuationIdentifier;                              //@synthesize activityContinuationIdentifier=_activityContinuationIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * legacyAlertOptions;                                    //@synthesize legacyAlertOptions=_legacyAlertOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldInvalidateWhenDeactivated;                               //@synthesize shouldInvalidateWhenDeactivated=_shouldInvalidateWhenDeactivated - In the implementation block
@property (assign,getter=isSwitcherEligible,nonatomic) BOOL switcherEligible;                    //@synthesize switcherEligible=_switcherEligible - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                    //@synthesize reason=_reason - In the implementation block
@property (assign,getter=isActivatingForSiri,nonatomic) BOOL activatingForSiri;                  //@synthesize activatingForSiri=_activatingForSiri - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                                      //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertPresentationTarget * presentationTarget;              //@synthesize presentationTarget=_presentationTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)activationContextWithLegacyAlertOptions:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSSet *)actions;
-(void)setActions:(NSSet *)arg1 ;
-(id)initWithActions:(id)arg1 ;
-(id)initWithActions:(id)arg1 presentationTarget:(id)arg2 ;
-(id)initWithActions:(id)arg1 presentationTarget:(id)arg2 userInfo:(id)arg3 ;
-(void)setLegacyAlertOptions:(NSDictionary *)arg1 ;
-(NSUUID *)activityContinuationIdentifier;
-(void)setActivityContinuationIdentifier:(NSUUID *)arg1 ;
-(void)setActivatingForSiri:(BOOL)arg1 ;
-(BOOL)isActivatingForSiri;
-(SBSRemoteAlertPresentationTarget *)presentationTarget;
-(void)setPresentationTarget:(SBSRemoteAlertPresentationTarget *)arg1 ;
-(NSDictionary *)legacyAlertOptions;
-(BOOL)shouldInvalidateWhenDeactivated;
-(void)setShouldInvalidateWhenDeactivated:(BOOL)arg1 ;
-(BOOL)isSwitcherEligible;
-(void)setSwitcherEligible:(BOOL)arg1 ;
@end

