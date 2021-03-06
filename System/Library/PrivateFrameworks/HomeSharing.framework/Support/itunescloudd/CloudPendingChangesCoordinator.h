/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, ICConnectionConfiguration;

@interface CloudPendingChangesCoordinator : NSObject {

	NSString* _name;
	NSString* _pendingChangesPath;
	NSObject*<OS_dispatch_queue> _queue;
	Class _loggable;
	ICConnectionConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) ICConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(ICConnectionConfiguration *)configuration;
-(id)_pendingChanges;
-(void)processPendingChangesUsingLibrary:(id)arg1 ;
-(void)addPendingChange:(id)arg1 ;
-(void)removeAllPendingChangesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_savePendingChanges:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 prefix:(id)arg2 loggable:(Class)arg3 ;
-(void)removeAllPendingChanges;
@end

