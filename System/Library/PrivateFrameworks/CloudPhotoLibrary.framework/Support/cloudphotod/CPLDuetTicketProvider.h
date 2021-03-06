/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CDAttribute;

@interface CPLDuetTicketProvider : NSObject {

	NSString* _clientBundlerIdentifier;
	CDAttribute* _mandatoryAttribute;
	CDAttribute* _discretionaryAttribute;
	unsigned long long _significantWorkRetainCount;

}

@property (nonatomic,readonly) NSString * clientBundlerIdentifier;                       //@synthesize clientBundlerIdentifier=_clientBundlerIdentifier - In the implementation block
@property (nonatomic,readonly) CDAttribute * mandatoryAttribute;                         //@synthesize mandatoryAttribute=_mandatoryAttribute - In the implementation block
@property (nonatomic,readonly) CDAttribute * discretionaryAttribute;                     //@synthesize discretionaryAttribute=_discretionaryAttribute - In the implementation block
@property (assign,nonatomic) unsigned long long significantWorkRetainCount;              //@synthesize significantWorkRetainCount=_significantWorkRetainCount - In the implementation block
+(id)delegate;
+(void)setDelegate:(id)arg1 ;
+(void)getSystemBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2 ;
+(id)duetStatuses;
+(void)pushSignificantWorkIsPending;
+(void)popSignificantWorkIsPending;
-(BOOL)isBlocked;
-(void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2 ;
-(void)overrideHasSignificantWork:(BOOL)arg1 ;
-(unsigned long long)_blockedReason;
-(id)duetStatuses;
-(void)_setupCallbacks;
-(id)_isBlockedKeyPath;
-(id)_significantWorkKeyPath;
-(BOOL)hasSignificantWork;
-(id)_blockedReasonStatus;
-(id)_budgetOverrideKeyPath;
-(BOOL)_boolValueForDuetKeyPath:(id)arg1 ;
-(id)initWithClientBundlerIdentifier:(id)arg1 ;
-(NSString *)clientBundlerIdentifier;
-(CDAttribute *)mandatoryAttribute;
-(CDAttribute *)discretionaryAttribute;
-(unsigned long long)significantWorkRetainCount;
-(void)setSignificantWorkRetainCount:(unsigned long long)arg1 ;
@end

