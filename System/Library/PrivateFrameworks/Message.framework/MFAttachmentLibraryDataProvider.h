/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAttachmentDataProvider.h>

@class MFWeakReferenceHolder, MFMessageLibrary;

@interface MFAttachmentLibraryDataProvider : MFAttachmentDataProvider {

	MFWeakReferenceHolder* _messageLibraryHolder;

}

@property (assign,nonatomic,__weak) MFMessageLibrary * messageLibrary; 
-(void)dealloc;
-(id)initWithLibrary:(id)arg1 ;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
-(void)setMessageLibrary:(MFMessageLibrary *)arg1 ;
-(MFMessageLibrary *)messageLibrary;
@end

