/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSSocketPairConnectionDelegate <NSObject>
@optional
-(void)connectionDidClose:(id)arg1;
-(void)connectionDidReachInFlightMessageLowWaterMark:(id)arg1;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(unsigned)arg3;
-(void)connection:(id)arg1 didReceiveDataMessage:(id)arg2;
-(void)connectionDidReceiveBytes:(id)arg1;
-(void)connectionBecameEmpty:(id)arg1;
-(void)didReceiveDataMessage:(id)arg1;
-(void)connectionDidClose;
-(void)connectionBecameEmpty;

@end

