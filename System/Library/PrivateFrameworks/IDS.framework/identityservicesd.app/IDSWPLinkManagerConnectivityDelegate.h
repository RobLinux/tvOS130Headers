/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSWPLinkManagerConnectivityDelegate <NSObject>
@required
-(void)manager:(id)arg1 cbuuidDidConnect:(id)arg2 isAlwaysConnected:(BOOL)arg3;
-(void)manager:(id)arg1 cbuuidDidDisconnect:(id)arg2;
-(BOOL)manager:(id)arg1 cbuuidDidDiscover:(id)arg2;
-(void)manager:(id)arg1 cbuuidDidFailToConnect:(id)arg2 withReason:(id)arg3;

@end

