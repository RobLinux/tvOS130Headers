/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFIMAPConnectionDelegate <NSObject>
@optional
-(void)willRemoveDelegation:(id)arg1;
-(BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3;
-(void)connectionDidDisconnect:(id)arg1;
-(void)connection:(id)arg1 didBeginBodyLoad:(id)arg2 section:(id)arg3;
-(void)connection:(id)arg1 didLoadMoreBodyData:(id)arg2 section:(id)arg3;
-(void)connection:(id)arg1 didFinishLoadingBodyData:(id)arg2 section:(id)arg3;
-(unsigned)connectionBodyDataReadChunkSize:(id)arg1;
-(BOOL)shouldStartIdleForConnection:(id)arg1;

@end

