/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CRBundleManager : NSObject {

	NSMutableSet* _bundles;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedInstance;
+(id)bundleDirectoryName;
+(id)bundleDirectoryPath;
+(Class)bundleClass;
-(id)init;
-(void)_getBundlesOnCurrentQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)getBundlesWithCompletion:(/*^block*/id)arg1 ;
@end

