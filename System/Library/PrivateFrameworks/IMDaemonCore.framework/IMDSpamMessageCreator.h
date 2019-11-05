/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDSpamMessageCreator : NSObject
-(id)transferForGuid:(id)arg1 ;
-(id)surfURLForIMMessageItem:(id)arg1 ;
-(id)metaDataForSurfURL:(id)arg1 ;
-(BOOL)isSurfPayment:(id)arg1 ;
-(BOOL)hasDataDetectedInformalPayment:(id)arg1 ;
-(void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4 ;
-(id)reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(BOOL)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 onlyReportForiMessageService:(BOOL)arg8 notifyInternalSecurity:(BOOL)arg9 ;
@end

