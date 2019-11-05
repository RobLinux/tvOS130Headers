/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKitDaemon/HMFLogging.h>
#import <HomeKitDaemon/HMFTimerDelegate.h>

@protocol HMDAuthServerDelegate, OS_dispatch_queue;
@class NSObject, MFAATokenManager, HMFTimer, NSLocale, NSString, NSData, NSUUID;

@interface HMDAuthServer : HMFObject <HMFLogging, HMFTimerDelegate> {

	id<HMDAuthServerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	MFAATokenManager* _tokenManager;
	HMFTimer* _retryTimer;
	long long _retryCount;
	NSLocale* _locale;
	NSString* _model;
	id _context;
	NSData* _token;
	NSUUID* _uuid;
	unsigned long long _currentOperation;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) MFAATokenManager * tokenManager;                               //@synthesize tokenManager=_tokenManager - In the implementation block
@property (nonatomic,retain) HMFTimer * retryTimer;                                 //@synthesize retryTimer=_retryTimer - In the implementation block
@property (assign,nonatomic) long long retryCount;                                  //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * model;                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) id context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * token;                                        //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long currentOperation;                   //@synthesize currentOperation=_currentOperation - In the implementation block
@property (__weak,readonly) id<HMDAuthServerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSData *)token;
-(id<HMDAuthServerDelegate>)delegate;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(unsigned long long)currentOperation;
-(NSUUID *)uuid;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(NSString *)model;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setCurrentOperation:(unsigned long long)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)retryTimer;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(BOOL)resumeRetryIfPending;
-(void)_reportFailureWithContext:(id)arg1 error:(id)arg2 ;
-(void)resetRetryOperation;
-(void)retryOrReportFailure:(id)arg1 context:(id)arg2 ;
-(void)sendPPIDInfoRequest:(id)arg1 model:(id)arg2 token:(id)arg3 uuid:(id)arg4 context:(id)arg5 ;
-(void)sendActivationRequest:(id)arg1 uuid:(id)arg2 context:(id)arg3 ;
-(void)sendActivationConfirmation:(id)arg1 uuid:(id)arg2 context:(id)arg3 ;
-(void)_handleResponseMetadata:(id)arg1 ppid:(id)arg2 locale:(id)arg3 context:(id)arg4 error:(id)arg5 ;
-(void)saveRetryOperation:(unsigned long long)arg1 token:(id)arg2 uuid:(id)arg3 context:(id)arg4 locale:(id)arg5 model:(id)arg6 ;
-(MFAATokenManager *)tokenManager;
-(void)getPPIDInfo:(id)arg1 model:(id)arg2 cert:(id)arg3 context:(id)arg4 ;
@end

