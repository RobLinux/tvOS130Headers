/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <CoreHAP/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CBCentralManager, NSMutableSet, NSString;

@interface HAPBTLECentralManager : HMFObject <CBCentralManagerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	CBCentralManager* centralManager;
	NSMutableSet* delegates;
	long long state;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) CBCentralManager * centralManager; 
@property (nonatomic,retain) NSMutableSet * delegates; 
@property (assign) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(NSMutableSet *)delegates;
-(void)setDelegates:(NSMutableSet *)arg1 ;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(CBCentralManager *)centralManager;
-(id)_getCentralManager;
-(void)registerCentralManagerDelegate:(id)arg1 ;
@end

