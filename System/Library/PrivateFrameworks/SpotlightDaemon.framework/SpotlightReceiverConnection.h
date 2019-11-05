/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableSet, NSSet, NSArray, NSObject;

@interface SpotlightReceiverConnection : CSXPCConnection {

	NSMutableSet* _positiveSet;
	NSMutableSet* _negativeSet;
	AB _disabled;
	BOOL _wantsHTML;
	BOOL _wantsText;
	BOOL _setupStarted;
	BOOL _setupComplete;
	BOOL _skipFileProviderItems;
	int _supportedJobs;
	AI _requestCount;
	NSSet* _bundleIDs;
	NSArray* _contentTypes;
	NSSet* _INIntentClassNames;
	NSObject*<OS_dispatch_queue> _senderQueue;
	double _minDate;
	NSObject*<OS_dispatch_semaphore> _setupSemaphore;

}

@property (nonatomic,readonly) NSSet * bundleIDs;                                     //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) NSArray * contentTypes;                                //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,readonly) NSSet * INIntentClassNames;                            //@synthesize INIntentClassNames=_INIntentClassNames - In the implementation block
@property (nonatomic,readonly) int supportedJobs;                                     //@synthesize supportedJobs=_supportedJobs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> senderQueue;              //@synthesize senderQueue=_senderQueue - In the implementation block
@property (nonatomic,readonly) AI requestCount;                                       //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) BOOL wantsHTML;                                          //@synthesize wantsHTML=_wantsHTML - In the implementation block
@property (assign,nonatomic) BOOL wantsText;                                          //@synthesize wantsText=_wantsText - In the implementation block
@property (assign,nonatomic) BOOL setupStarted;                                       //@synthesize setupStarted=_setupStarted - In the implementation block
@property (assign,nonatomic) BOOL setupComplete;                                      //@synthesize setupComplete=_setupComplete - In the implementation block
@property (assign,nonatomic) BOOL skipFileProviderItems;                              //@synthesize skipFileProviderItems=_skipFileProviderItems - In the implementation block
@property (assign,nonatomic) double minDate;                                          //@synthesize minDate=_minDate - In the implementation block
@property (nonatomic,readonly) BOOL unresponsive; 
@property (retain) NSObject*<OS_dispatch_semaphore> setupSemaphore;                   //@synthesize setupSemaphore=_setupSemaphore - In the implementation block
+(void)setup;
-(void)handleError:(id)arg1 ;
-(void)invalidationHandler;
-(AI)requestCount;
-(BOOL)disabled;
-(NSSet *)bundleIDs;
-(void)setWantsHTML:(BOOL)arg1 ;
-(BOOL)setupComplete;
-(NSArray *)contentTypes;
-(id)initWithServiceName:(id)arg1 clientID:(long long)arg2 wantsText:(BOOL)arg3 wantsHTML:(BOOL)arg4 ;
-(void)setSkipFileProviderItems:(BOOL)arg1 ;
-(void)setMinDate:(double)arg1 ;
-(void)disableReceiver;
-(NSObject*<OS_dispatch_semaphore>)setupSemaphore;
-(void)setSetupSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setupComplete:(BOOL)arg1 ;
-(void)enableReceiver;
-(void)startSetup;
-(BOOL)_wantsBundleID:(id)arg1 ;
-(BOOL)unresponsive;
-(void)receiverRequestStart;
-(void)receiverRequestComplete;
-(void)runOnSenderQueue:(/*^block*/id)arg1 ;
-(BOOL)_wantsContentType:(id)arg1 ;
-(BOOL)canRun;
-(void)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 ;
-(void)deleteFromBundle:(id)arg1 ;
-(void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 ;
-(NSSet *)INIntentClassNames;
-(int)supportedJobs;
-(NSObject*<OS_dispatch_queue>)senderQueue;
-(BOOL)wantsHTML;
-(BOOL)wantsText;
-(void)setWantsText:(BOOL)arg1 ;
-(BOOL)setupStarted;
-(void)setSetupStarted:(BOOL)arg1 ;
-(void)setSetupComplete:(BOOL)arg1 ;
-(BOOL)skipFileProviderItems;
-(double)minDate;
@end

