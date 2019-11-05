/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, INSpeakableString, INPerson;


@protocol INSendMessageIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) INPerson * sender; 
@property (assign,nonatomic) long long effect; 
@property (nonatomic,copy) NSArray * attachments; 
@property (assign,nonatomic) long long messageType; 
@required
-(id)init;
-(INPerson *)sender;
-(void)setSender:(id)arg1;
-(NSString *)content;
-(NSArray *)attachments;
-(void)setAttachments:(id)arg1;
-(NSString *)serviceName;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(long long)messageType;
-(void)setMessageType:(long long)arg1;
-(void)setServiceName:(id)arg1;
-(void)setContent:(id)arg1;
-(NSString *)conversationIdentifier;
-(void)setConversationIdentifier:(id)arg1;
-(long long)effect;
-(void)setEffect:(long long)arg1;
-(INSpeakableString *)speakableGroupName;
-(void)setSpeakableGroupName:(id)arg1;

@end

