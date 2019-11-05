/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDSiriAccessoryMonitorDelegate;
@class NSMapTable;

@interface HMDSiriAccessoryMonitor : NSObject {

	id<HMDSiriAccessoryMonitorDelegate> _delegate;
	NSMapTable* _accessories;

}

@property (nonatomic,__weak,readonly) id<HMDSiriAccessoryMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMapTable * accessories;                                           //@synthesize accessories=_accessories - In the implementation block
-(id<HMDSiriAccessoryMonitorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSMapTable *)accessories;
-(void)setAccessories:(NSMapTable *)arg1 ;
-(id)_getInfoForAccessory:(id)arg1 ;
-(BOOL)hasAnyActiveTargetingAccessories;
-(id)_accessoriesTargetingAccessory:(id)arg1 ;
-(void)_addAccessory:(id)arg1 withTarget:(id)arg2 ;
-(void)_removeAccessory:(id)arg1 ;
-(void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2 ;
-(void)accessory:(id)arg1 setSupportsDragonSiri:(BOOL)arg2 ;
@end

