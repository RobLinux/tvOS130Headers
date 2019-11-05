/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleIntentAction.h>

@class INIntent, NSString;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {

	BOOL _forceExecutionOnPhone;
	INIntent* _intent;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,readonly) BOOL forceExecutionOnPhone;              //@synthesize forceExecutionOnPhone=_forceExecutionOnPhone - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) INIntent * intent;                         //@synthesize intent=_intent - In the implementation block
+(id)intentActionWithShortcut:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 groupIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)name;
-(id)localizedName;
-(NSString *)groupIdentifier;
-(NSString *)title;
-(id)localizedSubtitle;
-(NSString *)subtitle;
-(id)appIdentifier;
-(INIntent *)intent;
-(void)setIntent:(INIntent *)arg1 ;
-(long long)intentCategory;
-(id)intentDescription;
-(id)initWithIntent:(id)arg1 ;
-(id)serializedParameters;
-(void)initializeParameters;
-(id)localizedKeyParameterDisplayName;
-(id)generatedIntentWithInput:(id)arg1 error:(id*)arg2 ;
-(id)requiredResources;
-(id)localizedDescriptionSummary;
-(id)initWithIntent:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 ;
-(void)continueInAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithInteraction:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)slots;
-(id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2 ;
-(BOOL)forceExecutionOnPhone;
@end

