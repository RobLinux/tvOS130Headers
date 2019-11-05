/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAttachmentManager.h>

@class MFInvocationQueue, NSMutableArray;

@interface MFAttachmentComposeManager : MFAttachmentManager {

	MFInvocationQueue* _defaultDownloadQueue;
	NSMutableArray* _composeAttachmentURLs;

}
-(void)dealloc;
-(void)removeAttachmentForURL:(id)arg1 ;
-(id)attachmentsForContext:(id)arg1 ;
-(void)_callProgressBlockForAttachmentURL:(id)arg1 withBytes:(unsigned long long)arg2 expectedSize:(unsigned long long)arg3 ;
-(void)_fetchInvocationCallUsingBlock:(/*^block*/id)arg1 ;
-(id)_queueForAttachment:(id)arg1 ;
-(id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5 ;
-(id)_composeAttachmentDataProviderForContext:(id)arg1 ;
-(id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 syncLock:(id*)arg3 ;
-(void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2 ;
-(BOOL)updateAttachment:(id)arg1 withNewData:(id)arg2 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
@end

