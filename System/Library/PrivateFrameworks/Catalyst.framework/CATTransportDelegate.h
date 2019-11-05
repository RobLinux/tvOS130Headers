/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTransportDelegate <NSObject>
@optional
-(void)transportDidResume:(id)arg1;
-(void)transportDidInvalidate:(id)arg1;
-(void)transportDidConnect:(id)arg1;
-(void)transport:(id)arg1 didSendMessage:(id)arg2;
-(void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2;

@end

