/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenDriverProtocol <NSObject>
@required
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)configureWithReply:(/*^block*/id)arg1;
-(void)releaseTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2;

@end

