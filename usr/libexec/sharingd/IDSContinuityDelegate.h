/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSContinuityDelegate <NSObject>
@optional
-(void)continuity:(id)arg1 didStartAdvertisingOfType:(long long)arg2;
-(void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2;
-(void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2 withError:(id)arg3;
-(void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;
-(void)continuity:(id)arg1 didStartScanningForType:(long long)arg2;
-(void)continuity:(id)arg1 didStopScanningForType:(long long)arg2;
-(void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 withError:(id)arg3;
-(void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;
-(void)continuity:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
-(void)continuity:(id)arg1 didStartTrackingPeer:(id)arg2 type:(long long)arg3 error:(id)arg4;
-(void)continuity:(id)arg1 didStopTrackingPeer:(id)arg2 type:(long long)arg3;

@required
-(void)continuityDidUpdateState:(id)arg1;

@end
