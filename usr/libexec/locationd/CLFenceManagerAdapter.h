/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <locationd/CLFenceManagerProtocol.h>

@class NSString;

@interface CLFenceManagerAdapter : CLNotifierServiceAdapter <CLFenceManagerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(CLFenceManager*)adaptee;
-(void)getFencesForBundleID:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4 ;
-(void)addFence:(/*^block*/id)arg1 ;
-(BOOL)syncgetHasMonitoredFences:(id)arg1 ;
-(void)removeFence:(/*^block*/id)arg1 ;
-(void)requestRegionState:(/*^block*/id)arg1 ;
-(BOOL)syncgetFences:(vector<CLFenceManager_Type::Fence, std::__1::allocator<CLFenceManager_Type::Fence> >*)arg1 forKey:(id)arg2 ;
@end

