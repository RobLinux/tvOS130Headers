/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSearchForMessagesIntent.h>
@class _INPBStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBContactList, _INPBDataStringList;


@protocol _INPBSearchForMessagesIntent <NSObject>
@property (nonatomic,readonly) int* attributes; 
@property (nonatomic,readonly) unsigned long long attributesCount; 
@property (nonatomic,retain) _INPBStringList * content; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) _INPBStringList * conversationIdentifier; 
@property (nonatomic,readonly) BOOL hasConversationIdentifier; 
@property (nonatomic,retain) _INPBDateTimeRange * dateTimeRange; 
@property (nonatomic,readonly) BOOL hasDateTimeRange; 
@property (nonatomic,retain) _INPBStringList * groupName; 
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,retain) _INPBStringList * identifier; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBStringList * notificationIdentifier; 
@property (nonatomic,readonly) BOOL hasNotificationIdentifier; 
@property (nonatomic,retain) _INPBContactList * recipient; 
@property (nonatomic,readonly) BOOL hasRecipient; 
@property (nonatomic,retain) _INPBStringList * searchTerm; 
@property (nonatomic,readonly) BOOL hasSearchTerm; 
@property (nonatomic,retain) _INPBContactList * sender; 
@property (nonatomic,readonly) BOOL hasSender; 
@property (nonatomic,retain) _INPBDataStringList * speakableGroupName; 
@property (nonatomic,readonly) BOOL hasSpeakableGroupName; 
@required
-(_INPBStringList *)identifier;
-(_INPBContactList *)sender;
-(void)setSender:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(_INPBStringList *)content;
-(int*)attributes;
-(void)setRecipient:(id)arg1;
-(_INPBStringList *)groupName;
-(void)setGroupName:(id)arg1;
-(void)setContent:(id)arg1;
-(BOOL)hasIdentifier;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
-(id)attributesAsString:(int)arg1;
-(int)StringAsAttributes:(id)arg1;
-(void)addAttribute:(int)arg1;
-(int)attributeAtIndex:(unsigned long long)arg1;
-(BOOL)hasContent;
-(_INPBStringList *)conversationIdentifier;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(void)setConversationIdentifier:(id)arg1;
-(BOOL)hasConversationIdentifier;
-(BOOL)hasGroupName;
-(BOOL)hasSender;
-(_INPBDataStringList *)speakableGroupName;
-(void)setSpeakableGroupName:(id)arg1;
-(BOOL)hasSpeakableGroupName;
-(_INPBDateTimeRange *)dateTimeRange;
-(void)setDateTimeRange:(id)arg1;
-(BOOL)hasDateTimeRange;
-(_INPBStringList *)notificationIdentifier;
-(void)setNotificationIdentifier:(id)arg1;
-(BOOL)hasNotificationIdentifier;
-(_INPBContactList *)recipient;
-(BOOL)hasRecipient;
-(_INPBStringList *)searchTerm;
-(void)setSearchTerm:(id)arg1;
-(BOOL)hasSearchTerm;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBContactList, _INPBDataStringList, NSString;

@interface _INPBSearchForMessagesIntent : PBCodable <_INPBSearchForMessagesIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN5* _attributes;
	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBStringList* _content;
	_INPBStringList* _conversationIdentifier;
	_INPBDateTimeRange* _dateTimeRange;
	_INPBStringList* _groupName;
	_INPBStringList* _identifier;
	_INPBIntentMetadata* _intentMetadata;
	_INPBStringList* _notificationIdentifier;
	_INPBContactList* _recipient;
	_INPBStringList* _searchTerm;
	_INPBContactList* _sender;
	_INPBDataStringList* _speakableGroupName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int* attributes; 
@property (nonatomic,readonly) unsigned long long attributesCount; 
@property (nonatomic,retain) _INPBStringList * content;                                                  //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) _INPBStringList * conversationIdentifier;                                   //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasConversationIdentifier; 
@property (nonatomic,retain) _INPBDateTimeRange * dateTimeRange;                                         //@synthesize dateTimeRange=_dateTimeRange - In the implementation block
@property (nonatomic,readonly) BOOL hasDateTimeRange; 
@property (nonatomic,retain) _INPBStringList * groupName;                                                //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,retain) _INPBStringList * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBStringList * notificationIdentifier;                                   //@synthesize notificationIdentifier=_notificationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationIdentifier; 
@property (nonatomic,retain) _INPBContactList * recipient;                                               //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipient; 
@property (nonatomic,retain) _INPBStringList * searchTerm;                                               //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchTerm; 
@property (nonatomic,retain) _INPBContactList * sender;                                                  //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) BOOL hasSender; 
@property (nonatomic,retain) _INPBDataStringList * speakableGroupName;                                   //@synthesize speakableGroupName=_speakableGroupName - In the implementation block
@property (nonatomic,readonly) BOOL hasSpeakableGroupName; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBStringList *)identifier;
-(_INPBContactList *)sender;
-(void)setSender:(_INPBContactList *)arg1 ;
-(void)setIdentifier:(_INPBStringList *)arg1 ;
-(_INPBStringList *)content;
-(int*)attributes;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRecipient:(_INPBContactList *)arg1 ;
-(_INPBStringList *)groupName;
-(void)setGroupName:(_INPBStringList *)arg1 ;
-(void)setContent:(_INPBStringList *)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(void)setAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributesAsString:(int)arg1 ;
-(int)StringAsAttributes:(id)arg1 ;
-(void)addAttribute:(int)arg1 ;
-(int)attributeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasContent;
-(_INPBStringList *)conversationIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setConversationIdentifier:(_INPBStringList *)arg1 ;
-(BOOL)hasConversationIdentifier;
-(BOOL)hasGroupName;
-(BOOL)hasSender;
-(_INPBDataStringList *)speakableGroupName;
-(void)setSpeakableGroupName:(_INPBDataStringList *)arg1 ;
-(BOOL)hasSpeakableGroupName;
-(_INPBDateTimeRange *)dateTimeRange;
-(void)setDateTimeRange:(_INPBDateTimeRange *)arg1 ;
-(BOOL)hasDateTimeRange;
-(_INPBStringList *)notificationIdentifier;
-(void)setNotificationIdentifier:(_INPBStringList *)arg1 ;
-(BOOL)hasNotificationIdentifier;
-(_INPBContactList *)recipient;
-(BOOL)hasRecipient;
-(_INPBStringList *)searchTerm;
-(void)setSearchTerm:(_INPBStringList *)arg1 ;
-(BOOL)hasSearchTerm;
@end

