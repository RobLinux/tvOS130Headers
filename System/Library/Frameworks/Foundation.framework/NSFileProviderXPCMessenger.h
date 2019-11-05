/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileProviderXPCInterface.h>

@protocol NSFileProvider, OS_dispatch_queue;
@class NSObject, NSFileProviderProxy, NSString;

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {

	id<NSFileProvider> _fileProvider;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileProviderProxy* _fileProviderProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)checkInProviderWithReply:(/*^block*/id)arg1 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFileProvider:(id)arg1 queue:(id)arg2 ;
-(void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 options:(unsigned long long)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 kernelOperation:(unsigned)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 kernelOperation:(unsigned)arg5 completionHandler:(/*^block*/id)arg6 ;
-(oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2 ;
-(void)providePhysicalItemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(id)arg4 url:(id)arg5 newURL:(id)arg6 ;
-(oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 ;
-(void)movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithFileProviderProxy:(id)arg1 ;
@end

