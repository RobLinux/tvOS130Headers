/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>
#import <Message/MFCollectingDataConsumer.h>

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {

	MFBufferedDataConsumer* _consumer;
	NSData* _rawData;
	unsigned long long _count;
	BOOL _lastNewLine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(id)rawData;
-(BOOL)isLastCharacterNewLine;
@end

