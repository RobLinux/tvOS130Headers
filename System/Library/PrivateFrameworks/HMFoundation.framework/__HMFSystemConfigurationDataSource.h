/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoNameDataSource.h>

@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;
@class HMFUnfairLock, NSString, NSObject;

@interface __HMFSystemConfigurationDataSource : HMFObject <HMFSystemInfoNameDataSource> {

	HMFUnfairLock* _lock;
	id<HMFSystemInfoNameDataSourceDelegate> _delegate;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	SCDynamicStoreRef _store;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SCDynamicStoreRef store;                           //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<HMFSystemInfoNameDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<HMFSystemInfoNameDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HMFSystemInfoNameDataSourceDelegate>)arg1 ;
-(SCDynamicStoreRef)store;
@end

