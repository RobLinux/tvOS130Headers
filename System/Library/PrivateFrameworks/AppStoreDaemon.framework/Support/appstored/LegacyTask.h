/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <appstored/appstored-Structs.h>
@class AMSPromise;

@interface LegacyTask : NSObject {

	AMSPromise* _promise;
	os_unfair_lock_s _promiseLock;

}

@property (readonly) BOOL isCanceled; 
@property (readonly) BOOL isFinished; 
@property (readonly) BOOL isRunning; 
@property (readonly) AMSPromise * promise; 
+(void)_retainTask:(id)arg1 ;
+(void)_releaseTask:(id)arg1 ;
-(id)init;
-(BOOL)isFinished;
-(BOOL)isRunning;
-(AMSPromise *)promise;
-(BOOL)isCanceled;
-(id)performTaskUsingBlock:(/*^block*/id)arg1 ;
@end

