/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMChatItem.h>
#import <IMCore/IMChatTranscriptItem.h>

@class NSAttributedString, NSDate, IMServiceImpl, IMHandle, NSString;

@interface IMTranscriptChatItem : IMChatItem <IMChatTranscriptItem> {

	NSString* _guid;
	unsigned char _contiguousType;
	unsigned char _attachmentContiguousType;
	unsigned _contiguousLoaded : 1;

}

@property (setter=_setGUID:,nonatomic,copy) NSString * guid;                          //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned char contiguousType; 
@property (nonatomic,readonly) unsigned char attachmentContiguousType; 
@property (getter=isContiguous,nonatomic,readonly) BOOL contiguous; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) BOOL wantsTail; 
@property (nonatomic,copy,readonly) NSAttributedString * transcriptText; 
@property (nonatomic,readonly) NSDate * transcriptDate; 
@property (nonatomic,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) IMHandle * handle; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(IMHandle *)handle;
-(IMServiceImpl *)service;
-(NSString *)guid;
-(BOOL)isContiguous;
-(BOOL)isFromMe;
-(unsigned char)contiguousType;
-(BOOL)wantsTail;
-(NSAttributedString *)transcriptText;
-(NSDate *)transcriptDate;
-(BOOL)isContiguousWithChatItem:(id)arg1 ;
-(BOOL)isAttachmentContiguousWithChatItem:(id)arg1 ;
-(unsigned char)attachmentContiguousType;
-(BOOL)_isContiguousLoaded;
-(void)_setContiguousLoaded:(BOOL)arg1 ;
-(void)_setContiguousType:(unsigned char)arg1 ;
-(void)_setAttachmentContiguousType:(unsigned char)arg1 ;
-(void)_setGUID:(id)arg1 ;
@end

