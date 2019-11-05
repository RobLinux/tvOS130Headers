/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rtcreportingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ClientSessionInterface
@required
-(void)setSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 hasAggregationBlock:(BOOL)arg4;
-(void)startConfigWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchStatesWithUserInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDisplayURL:(/*^block*/id)arg1;
-(void)sendMessageWithDictionary:(id)arg1 reply:(/*^block*/id)arg2;
-(void)flushMessagesWithCompletion:(/*^block*/id)arg1;
-(void)finishSessionGracefully;
-(void)uploadFileAtPath:(id)arg1 extensionToken:(char*)arg2 completionHandler:(/*^block*/id)arg3;
-(void)uploadLogData:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)sendMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 reply:(/*^block*/id)arg6;
-(void)updateSharedDataWithDictionary:(id)arg1;
-(void)updateSharedDataForKey:(id)arg1 value:(id)arg2;
-(void)setDigestKey:(id)arg1 algorithm:(int)arg2;

@end

