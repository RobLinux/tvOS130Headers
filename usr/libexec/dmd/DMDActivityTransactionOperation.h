/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/DMDTaskOperation.h>

@protocol OS_os_transaction;
@class NSObject;

@interface DMDActivityTransactionOperation : DMDTaskOperation {

	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)requiredEntitlements;
+(BOOL)validateRequest:(id)arg1 error:(id*)arg2 ;
+(id)whitelistedClassesForRequest;
-(void)cancel;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)endOperationIfNeeded;
-(BOOL)runConcurrently;
-(BOOL)runOnMainThread;
-(void)runWithRequest:(id)arg1 ;
@end

