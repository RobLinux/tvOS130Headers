/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UAStreamHandlerDelegate <NSObject>
@optional
-(void)streams:(id)arg1 didWriteMessageWithTag:(long long)arg2;
-(void)streamsDidClose:(id)arg1 withError:(id)arg2;
-(void)streams:(id)arg1 didReadRawData:(id)arg2;
-(void)streamsDidWriteRawDataBuffer:(id)arg1;

@required
-(void)streams:(id)arg1 didReadMessage:(id)arg2 withTag:(long long)arg3;

@end
