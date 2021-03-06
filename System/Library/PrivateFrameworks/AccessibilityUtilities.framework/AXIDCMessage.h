/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXSimpleMessage.h>

@class NSString;

@interface AXIDCMessage : AXSimpleMessage {

	NSString* _UUID;
	/*^block*/id _sendCompletion;

}

@property (nonatomic,retain) NSString * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) id sendCompletion;              //@synthesize sendCompletion=_sendCompletion - In the implementation block
+(id)messageWithPayload:(id)arg1 andSendCompletion:(/*^block*/id)arg2 ;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(id)sendCompletion;
-(void)setSendCompletion:(id)arg1 ;
-(id)transportPayload;
@end

