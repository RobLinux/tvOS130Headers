/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <demod/IXAppInstallCoordinatorObserver.h>

@protocol OS_dispatch_semaphore;
@class NSError, NSObject, NSString;

@interface MSDInstallObserver : NSObject <IXAppInstallCoordinatorObserver> {

	NSError* _error;
	NSObject*<OS_dispatch_semaphore> _completeSemaphore;

}

@property (nonatomic,readonly) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (readonly) NSObject*<OS_dispatch_semaphore> completeSemaphore;              //@synthesize completeSemaphore=_completeSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSError *)error;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)completeSemaphore;
@end

