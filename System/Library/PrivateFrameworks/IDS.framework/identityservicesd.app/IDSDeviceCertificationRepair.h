/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSDeviceCertificationRepairDelegate;
@class NSTimer;

@interface IDSDeviceCertificationRepair : NSObject {

	id<IDSDeviceCertificationRepairDelegate> _delegate;
	NSTimer* _repairTimer;

}

@property (nonatomic,retain) NSTimer * repairTimer;                                                 //@synthesize repairTimer=_repairTimer - In the implementation block
@property (assign,nonatomic,__weak) id<IDSDeviceCertificationRepairDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<IDSDeviceCertificationRepairDelegate>)delegate;
-(void)setDelegate:(id<IDSDeviceCertificationRepairDelegate>)arg1 ;
-(void)_repairTimerHit:(id)arg1 ;
-(NSTimer *)repairTimer;
-(void)setRepairTimer:(NSTimer *)arg1 ;
-(void)recertifyDeviceIfNeeded;
-(BOOL)_missingDeviceIdentity:(BOOL*)arg1 ;
@end

