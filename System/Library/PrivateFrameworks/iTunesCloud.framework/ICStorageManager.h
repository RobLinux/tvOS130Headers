/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICStorageManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,readonly) unsigned long long storageSpaceAvailable; 
@property (nonatomic,readonly) BOOL cachingEnabled; 
+(id)sharedManager;
-(id)init;
-(unsigned long long)storageSpaceAvailable;
-(BOOL)cachingEnabled;
-(void)ensureStorageIsAvailable:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

