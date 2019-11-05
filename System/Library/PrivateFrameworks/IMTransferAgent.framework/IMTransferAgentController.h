/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MMCSController;

@interface IMTransferAgentController : NSObject {

	MMCSController* _controller;

}

@property (nonatomic,retain) MMCSController * controller;              //@synthesize controller=_controller - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)setController:(MMCSController *)arg1 ;
-(MMCSController *)controller;
-(BOOL)_isWhiteListedURL:(id)arg1 ;
-(void)cancelSendTransferID:(id)arg1 ;
-(void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 userInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(BOOL)_shouldRetryUploadGivenMMCSError:(id)arg1 retryAttemptCount:(unsigned long long)arg2 ;
-(void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 retryAttemptCount:(unsigned long long)arg4 userInfo:(id)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)_defaultMMCSWhiteList;
-(void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 allowReauthorize:(BOOL)arg7 fileSize:(unsigned long long)arg8 progressBlock:(/*^block*/id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 fileSize:(unsigned long long)arg7 progressBlock:(/*^block*/id)arg8 completionBlock:(/*^block*/id)arg9 ;
@end

