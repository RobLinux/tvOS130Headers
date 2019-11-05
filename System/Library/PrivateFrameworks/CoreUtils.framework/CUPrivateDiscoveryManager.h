/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject;

@interface CUPrivateDiscoveryManager : NSObject {

	NSMutableSet* _advertisers;
	NSMutableSet* _browsers;
	BOOL _changesPending;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	LogCategory* _ucat;

}
+(id)sharedPrivateDiscoveryManager;
-(id)init;
-(void)_update;
-(void)addAdvertiser:(id)arg1 ;
-(void)removeAdvertiser:(id)arg1 ;
-(void)addBrowser:(id)arg1 ;
-(void)removeBrowser:(id)arg1 ;
@end

